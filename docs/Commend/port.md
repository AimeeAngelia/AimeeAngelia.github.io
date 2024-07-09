# 端口

* Linux支持65535个端口,分为3类使用

|   分类   |    端口     | 作用                                   |
| :------: | :---------: | -------------------------------------- |
| 公认端口 |   1-1023    | 通常用于系统内置或知名程序的预留使用   |
| 注册端口 | 1024-49151  | 通常可以随意使用,用于松散绑定程序/服务 |
| 动态端口 | 49152-65535 | 程序对外网络链接时,临时使用            |

## nmap

```bash
nmap ip地址
```

* 查看ip开放端口(可访问)情况

```bash
root@Ubuntu:~# nmap 127.0.0.1
Starting Nmap 7.80 ( https://nmap.org ) at 2024-07-09 12:47 CST
Nmap scan report for localhost (127.0.0.1)
Host is up (0.0000030s latency).
Not shown: 999 closed ports
PORT   STATE SERVICE
22/tcp open  ssh

Nmap done: 1 IP address (1 host up) scanned in 0.08 seconds
```

## netstart

* 查看指定端口的占用情况

```bash
apt -y install net-tools		//安装
netstat -anp | grep 端口		//使用
```

