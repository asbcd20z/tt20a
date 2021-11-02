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
#IP地址分类以及网络地址的计算(子网划分、超网划分):
#https://blog.csdn.net/weixin_43625577/article/details/84728675
'''
2.4、特殊的网址
1、每一个字节都为0的地址（“0.0.0.0”）对应于当前主机；
2、IP地址中的每一个字节都为1的IP地址（“255．255．255．255”）是当前子网的广播地址；(本子网的受限广播)
3、IP地址中不能以十进制“127”作为开头，该类地址中数字127．0．0．1到127．255．255．255用于回路测试，如：127.0.0.1可以代表本机IP地址，ping 127.0.0.1 可以测试本机TCP/IP是否正常。
4、0.0.0.0 —当一台主机还没有被分配一个IP地址的时候，用于表示主机本身；被保留用来指向默认路由。
--
ip地址主机号全0或全1:
主机号全为“0”。不论哪一类网络，主机号全为“0”表示指向本网，常用在路由表中；(此类ip地址可以当源端但不可以做目的端)
主机号全为“1”。主机号全为“1”表示广播地址，向特定的所在网上的所有主机发送数据包。(广播地址是不可以做源端的，但是可以做目的端)
'''
#
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

