#
#udp 
#UDP之多播/组播  https://blog.csdn.net/weixin_36750623/article/details/83576656
#网络编程之UDP多播通信  https://blog.csdn.net/c_base_jin/article/details/97616341
#SO_BROADCAST
#用udp实现广播通信  https://blog.csdn.net/xiaolei251990/article/details/83177165
# 2https://blog.csdn.net/aspnet_lyc/article/details/34444111
#设置套接字函数： https://www.cnblogs.com/coder2012/archive/2013/04/02/2995889.html
#Linux Socket详解 <七> UDP广播  http://blog.sina.com.cn/s/blog_602f87700102vcde.html
#b nc -vul -s 0.0.0.0 -p 29999  # FYI: 1:it listen on ipv6 by default,and nc has a "connect" for both tcp/udp
#b nc -vu 127.0.0.1 29999       #  2:still means a "connect" for nc'udp when first sendto from a udp client, and seems ignore other clients
#
import socket;
import sys;

s=socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
s.setsockopt(socket.SOL_SOCKET, socket.SO_BROADCAST, 1)

#sv
s.bind(('', 9999))
#n=s.sendto(b'AAA-start',('127.0.0.1',9999)); print(n)
#b=s.recvfrom(22);b

#cl
#s.bind(('', 19999))
#s.sendto(b'AAA',('127.0.0.1',9999))
#s.sendto(b'AAA',('192.168.1.255',9999))

