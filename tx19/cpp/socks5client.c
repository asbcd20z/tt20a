//

/*
以下是一个简单的 SOCKS5 客户端代码示例，使用 C 语言实现。这个示例展示了如何通过 SOCKS5 代理连接到远程服务器。

```

### 解释

1. **导入头文件**：导入必要的头文件。
2. **定义常量**：定义 SOCKS5 协议的常量和缓冲区大小。
3. **错误处理函数**：定义 `error_exit` 函数，用于错误处理。
4. **连接到 SOCKS5 代理**：定义 `connect_to_socks5_proxy` 函数，连接到 SOCKS5 代理服务器。
5. **SOCKS5 握手**：定义 `socks5_handshake` 函数，进行 SOCKS5 握手。
6. **SOCKS5 连接**：定义 `socks5_connect` 函数，向 SOCKS5 代理发送连接请求。
7. **发送 HTTP 请求**：定义 `send_http_request` 函数，发送 HTTP GET 请求。
8. **接收 HTTP 响应**：定义 `receive_http_response` 函数，接收并打印 HTTP 响应。
9. **主函数**：在 `main` 函数中，连接到 SOCKS5 代理，进行握手和连接，然后发送 HTTP 请求并接收响应。

### 注意事项

- 确保你的 SOCKS5 代理服务器是可用的，并且你有正确的访问权限。
- 你可以根据需要修改目标服务器的地址和端口，以及发送的请求内容。
- 这个示例代码没有处理所有可能的错误情况，实际使用时可能需要添加更多的错误处理。

通过这种方式，你可以使用 C 语言实现一个简单的 SOCKS5 客户端，通过 SOCKS5 代理连接到远程服务器并发送和接收数据。
*/


//### SOCKS5 客户端代码示例

//```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <errno.h>

#define SOCKS5_VERSION 0x05
#define SOCKS5_NO_AUTH 0x00
#define SOCKS5_CMD_CONNECT 0x01
#define SOCKS5_ATYP_DOMAINNAME 0x03
#define SOCKS5_ATYP_IPV4 0x01
#define BUFFER_SIZE 4096

void error_exit(const char *message) {
    perror(message);
    exit(EXIT_FAILURE);
}

int connect_to_socks5_proxy(const char *proxy_host, int proxy_port) {
    int sockfd;
    struct sockaddr_in proxy_addr;
    struct hostent *proxy;

    if ((proxy = gethostbyname(proxy_host)) == NULL) {
        error_exit("gethostbyname");
    }

    if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        error_exit("socket");
    }

    memset(&proxy_addr, 0, sizeof(proxy_addr));
    proxy_addr.sin_family = AF_INET;
    proxy_addr.sin_port = htons(proxy_port);
    memcpy(&proxy_addr.sin_addr.s_addr, proxy->h_addr, proxy->h_length);

    if (connect(sockfd, (struct sockaddr *)&proxy_addr, sizeof(proxy_addr)) < 0) {
        error_exit("connect");
    }

    return sockfd;
}

void socks5_handshake(int sockfd) {
    unsigned char request[3];
    unsigned char response[2];

    // Send SOCKS5 handshake
    request[0] = SOCKS5_VERSION;
    request[1] = 1; // Number of authentication methods
    request[2] = SOCKS5_NO_AUTH; // No authentication

    if (write(sockfd, request, sizeof(request)) != sizeof(request)) {
        error_exit("write");
    }

    // Receive SOCKS5 handshake response
    if (read(sockfd, response, sizeof(response)) != sizeof(response)) {
        error_exit("read");
    }

    if (response[0] != SOCKS5_VERSION || response[1] != SOCKS5_NO_AUTH) {
        error_exit("SOCKS5 handshake failed");
    }
}

void socks5_connect(int sockfd, const char *target_host, int target_port) {
    unsigned char request[BUFFER_SIZE];
    unsigned char response[BUFFER_SIZE];
    int request_len, response_len;
    struct hostent *target;

    if ((target = gethostbyname(target_host)) == NULL) {
        error_exit("gethostbyname");
    }

    // Send SOCKS5 connect request
    request[0] = SOCKS5_VERSION;
    request[1] = SOCKS5_CMD_CONNECT;
    request[2] = 0x00; // Reserved
    request[3] = SOCKS5_ATYP_DOMAINNAME;
    request[4] = strlen(target_host);
    memcpy(&request[5], target_host, strlen(target_host));
    request_len = 5 + strlen(target_host);
    request[request_len++] = (target_port >> 8) & 0xFF;
    request[request_len++] = target_port & 0xFF;

    if (write(sockfd, request, request_len) != request_len) {
        error_exit("write");
    }

    // Receive SOCKS5 connect response
    if ((response_len = read(sockfd, response, sizeof(response))) < 0) {
        error_exit("read");
    }

    if (response[0] != SOCKS5_VERSION || response[1] != 0x00) {
        error_exit("SOCKS5 connect failed");
    }
}

void send_http_request(int sockfd, const char *host) {
    char request[BUFFER_SIZE];
    snprintf(request, sizeof(request), "GET / HTTP/1.1\r\nHost: %s\r\n\r\n", host);

    if (write(sockfd, request, strlen(request)) != strlen(request)) {
        error_exit("write");
    }
}

void receive_http_response(int sockfd) {
    char response[BUFFER_SIZE];
    int bytes_read;

    while ((bytes_read = read(sockfd, response, sizeof(response) - 1)) > 0) {
        response[bytes_read] = '\0';
        printf("%s", response);
    }

    if (bytes_read < 0) {
        error_exit("read");
    }
}

int main() {
    const char *proxy_host = "your_socks5_proxy_host";
    int proxy_port = 1080;
    const char *target_host = "example.com";
    int target_port = 80;

    int sockfd = connect_to_socks5_proxy(proxy_host, proxy_port);
    socks5_handshake(sockfd);
    socks5_connect(sockfd, target_host, target_port);
    send_http_request(sockfd, target_host);
    receive_http_response(sockfd);

    close(sockfd);
    return 0;
}

