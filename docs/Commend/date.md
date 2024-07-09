# 日期和时区

```bash
date [-d] [+格式化字符串]
```

## [+格式化字符串]

| 格式化字符串 |                  详情                  |
| :----------: | :------------------------------------: |
|      %Y      |                   年                   |
|      %y      |        年份的后两位数字(00-99)         |
|      %m      |              月份(01-12)               |
|      %d      |               日(01-31)                |
|      %H      |              小时(00-23)               |
|      %M      |              分钟(00-59)               |
|      %S      |               秒(00-59)                |
|      %s      | 直1970-01-01 00:00:00 UTC 到现在的秒数 |
|      %w      |            星期(0-->星期日)            |

* 格式化字符串中有`空格`,用"+格式化字符串"

```bash
root@Ubuntu:~# date +%Y-%m-%d
2024-07-08
root@Ubuntu:~# date +%Y-%m-%d %H:%M:%S
date: extra operand ‘%H:%M:%S’
Try 'date --help' for more information.
root@Ubuntu:~# date "+%Y-%m-%d %H:%M:%S"
2024-07-08 19:22:31
```

## [-d]

* `[-d]` 按照给定的字符串显示日期,一般用于日期计算

| 日期加减                                   | 详情             |
| :----------------------------------------- | ---------------- |
| date -d "+1 day" "+%Y-%m-%d %H:%M:%S"      | 显示后一天日期   |
| date -d "-1 day" "+%Y-%m-%d %H:%M:%S"      | 显示前一天日期   |
| date -d "+1 month" "+%Y-%m-%d %H:%M:%S"    | 显示后一个月日期 |
| date -d "+2 hour" "+%Y-%m-%d %H:%M:%S"     | 显示后两小时日期 |
| date -d "+1 minute" "+%Y-%m-%d %H:%M:%S"   | 显示后一分钟日期 |
| date -d "+100 second" "+%Y-%m-%d %H:%M:%S" | 显示后一百秒日期 |

## 时区

* 定时联网校准时间

```bash
rm -rf /etc/localtime
sudo ln -s /usr/share/zoneinfo/Asia/Shanghai /etc/localtime
```

* 更改时区为CST(东八区)

## ntp自动校准时间

```bash
apt install ntp		//安装
```

* 自动注册为服务(ntp)

```bash
root@Ubuntu:~# systemctl status ntp
● ntp.service - Network Time Service
     Loaded: loaded (/lib/systemd/system/ntp.service; enabled; vendor preset: enabled)
     Active: active (running) since Mon 2024-07-08 18:29:59 CST; 1h 12min ago
       Docs: man:ntpd(8)
    Process: 3682 ExecStart=/usr/lib/ntp/ntp-systemd-wrapper (code=exited, status=0/SUCCESS)
   Main PID: 3688 (ntpd)
      Tasks: 2 (limit: 1930)
     Memory: 1.3M
        CPU: 379ms
     CGroup: /system.slice/ntp.service
             └─3688 /usr/sbin/ntpd -p /var/run/ntpd.pid -g -u 113:118

Jul 08 18:29:59 Ubuntu ntpd[3682]: corporation.  Support and training for ntp-4 are
Jul 08 18:29:59 Ubuntu ntpd[3682]: available at https://www.nwtime.org/support
Jul 08 18:29:59 Ubuntu ntpd[3682]: ----------------------------------------------------
Jul 08 18:29:59 Ubuntu ntpd[3688]: proto: precision = 0.055 usec (-24)
Jul 08 18:29:59 Ubuntu ntpd[3688]: basedate set to 2022-02-04
Jul 08 18:29:59 Ubuntu ntpd[3688]: gps base set to 2022-02-06 (week 2196)
Jul 08 18:29:59 Ubuntu ntpd[3688]: restrict default: KOD does nothing without LIMITED.
Jul 08 18:29:59 Ubuntu ntpd[3688]: restrict ::: KOD does nothing without LIMITED.
Jul 08 18:29:59 Ubuntu ntpd[3688]: switching logging to file /var/log/ntp.log
Jul 08 18:29:59 Ubuntu systemd[1]: Started Network Time Service.
```

## 手动校准时间

```bash
apt install ntpdate		//安装ntpdate
```

```bash
ntpdate -u ntp.aliyun.com		//运行
```

* `-u` 指向一个`ntp`服务器

```bash
-----运行结果-----
root@Ubuntu:~/iinn# ntpdate -u ntp.aliyun.com
 8 Jul 19:47:49 ntpdate[4225]: adjust time server 203.107.6.88 offset -0.002986 sec
```