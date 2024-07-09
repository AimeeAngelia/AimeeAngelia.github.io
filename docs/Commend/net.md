# 网络传输

## ping

* 检查指定网络服务器是否可联通

```bash
ping [-c num] ip/主机名
```

* `[-c num]` 检查次数, 默认(不指定)无限次执行

```bash
root@Ubuntu:~# ping bilibili.com
PING bilibili.com (8.134.50.24) 56(84) bytes of data.
64 bytes from 8.134.50.24 (8.134.50.24): icmp_seq=1 ttl=91 time=11.1 ms
64 bytes from 8.134.50.24 (8.134.50.24): icmp_seq=2 ttl=91 time=11.4 ms
64 bytes from 8.134.50.24 (8.134.50.24): icmp_seq=3 ttl=91 time=11.1 ms
64 bytes from 8.134.50.24 (8.134.50.24): icmp_seq=4 ttl=91 time=11.1 ms
64 bytes from 8.134.50.24 (8.134.50.24): icmp_seq=5 ttl=91 time=11.1 ms
^C
--- bilibili.com ping statistics ---
5 packets transmitted, 5 received, 0% packet loss, time 4004ms
rtt min/avg/max/mdev = 11.089/11.173/11.418/0.122 ms
```

## wget

* 终端下载网络文件

```bash
wget [-b] url
```

* [-b] 后台下载

```bash
root@Ubuntu:~# wget https://dl.hdslb.com/mobile/fixed/pc_electron_mac/bili_mac.dmg?v=1.14.0
--2024-07-09 12:21:44--  https://dl.hdslb.com/mobile/fixed/pc_electron_mac/bili_mac.dmg?v=1.14.0
Resolving dl.hdslb.com (dl.hdslb.com)... 14.215.172.221, 14.215.172.222, 14.215.172.208, ...
Connecting to dl.hdslb.com (dl.hdslb.com)|14.215.172.221|:443... connected.
HTTP request sent, awaiting response... 200 OK
Length: 173053654 (165M) [application/x-apple-diskimage]
Saving to: ‘bili_mac.dmg?v=1.14.0’

bili_mac.dmg?v=1.14.0                       100%[=========================================================================================>] 165.04M  12.0MB/s    in 13s     

2024-07-09 12:21:57 (12.9 MB/s) - ‘bili_mac.dmg?v=1.14.0’ saved [173053654/173053654]
```

* 无论下载是否完成,文件都会显示

## curl

* 发送http网络请求,可用于下载文件,获取信息

```bash
curl [-O] url
```

* [-O] 下载文件

* 不加[-O] ,获取相关网页html或服务器返回信息

```bash
root@Ubuntu:~# curl cip.cc
IP      : 47.121.31.150
地址    : 中国  中国

数据二  : 中国 | 阿里云

数据三  : 中国浙江省杭州市 | 阿里巴巴

URL     : http://www.cip.cc/47.121.31.150



root@Ubuntu:~# curl bilibili.com > bi.html
  % Total    % Received % Xferd  Average Speed   Time    Time     Time  Current
                                 Dload  Upload   Total   Spent    Left  Speed
100   239  100   239    0     0   5207      0 --:--:-- --:--:-- --:--:--  5311
```