# systemctl命令

* `Linux`系统大多数软件均支持`systemctl`命令控制 : 启动,停止,开机自启
* 能够被`systemctl`管理的软件,一般称之为 :` 服务`

```bash
systemctl start | stop | status | enable | disable 服务名
```

|  start  |     启动      |
| :-----: | :-----------: |
|  stop   |     关闭      |
| status  |   查看状态    |
| enable  | 开启开机自启  |
| disable | 关闭;开机自启 |

```bash
root@Ubuntu:~# systemctl status ntp
● ntp.service - Network Time Service
     Loaded: loaded (/lib/systemd/system/ntp.service; enabled; vendor preset: enabled)
     Active: active (running) since Mon 2024-07-08 18:29:59 CST; 3min 39s ago
       Docs: man:ntpd(8)
    Process: 3682 ExecStart=/usr/lib/ntp/ntp-systemd-wrapper (code=exited, status=0/SUCCESS)
   Main PID: 3688 (ntpd)
      Tasks: 2 (limit: 1930)
     Memory: 1.3M
        CPU: 76ms
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