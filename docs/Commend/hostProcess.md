# 主机运行状态

## 查看系统资源占用

```bash
top
```

* 查看系统资源占用,默认5秒刷新一次
* 按`q`或`ctrl + c`退出

```bash
top - 13:32:12 up 1 day,  1:07,  2 users,  load average: 0.17, 0.06, 0.01
Tasks: 115 total,   1 running, 114 sleeping,   0 stopped,   0 zombie
%Cpu(s):  0.7 us,  0.5 sy,  0.0 ni, 98.8 id,  0.0 wa,  0.0 hi,  0.0 si,  0.0 st
MiB Mem :   1685.0 total,    256.9 free,    231.3 used,   1196.8 buff/cache
MiB Swap:      0.0 total,      0.0 free,      0.0 used.   1260.1 avail Mem 

    PID USER      PR  NI    VIRT    RES    SHR S  %CPU  %MEM     TIME+ COMMAND                                                                                                
   2615 root      20   0  132900  23944  16948 S   1.0   1.4  13:22.47 AliYunDunMonito                                                                                        
   2604 root      20   0   96324  14548  12356 S   0.3   0.8   7:56.16 AliYunDun                                                                                              
      1 root      20   0  167620  13092   8288 S   0.0   0.8   0:03.49 systemd                                                                                                
      2 root      20   0       0      0      0 S   0.0   0.0   0:00.01 kthreadd                                                                                               

```

| PR              | VIRT     | RES      | SHR      | S    |
| --------------- | -------- | -------- | -------- | ---- |
| 优先级,越小越高 | 虚拟内存 | 物理内存 | 共享内存 | 状态 |

| S    | R    | Z    | N          | I    |
| ---- | ---- | ---- | ---------- | ---- |
| 休眠 | 运行 | 僵死 | 负数优先级 | 空闲 |

![hostProcess](https://www.anook.cc/Pictures/Commend/hostProcess/1.png)

![hostProcess](https://www.anook.cc/Pictures/Commend/hostProcess/2.png)

## 磁盘系统监控

```bash
df [-h]
```

* `-h` 以更人性化的单位显示

* `df` ----> `disk free`

```bash
iostat [-x] [num1] [num2]
```

* `[-x]` 显示更多信息

* `[num1]` 刷新间隔,`[num2]`刷新次数

```bash
root@Ubuntu:~# iostat
Linux 5.15.0-71-generic (Ubuntu)        07/09/2024      _x86_64_        (2 CPU)

avg-cpu:  %user   %nice %system %iowait  %steal   %idle
           0.63    0.00    0.27    0.01    0.00   99.09

Device             tps    kB_read/s    kB_wrtn/s    kB_dscd/s    kB_read    kB_wrtn    kB_dscd
loop0             0.01         0.03         0.00         0.00       2371          0          0
loop1             0.00         0.02         0.00         0.00       1814          0          0
loop2             0.01         0.05         0.00         0.00       4271          0          0
loop3             0.00         0.01         0.00         0.00       1114          0          0
loop4             0.00         0.01         0.00         0.00       1107          0          0
loop5             0.00         0.00         0.00         0.00         10          0          0
vda               0.73         7.82        11.66         0.00     720914    1075614          0
```

## 网络状态监控(浅尝辄止😱)

```bash
sar -n DEV num1 num2
```

* `-n` 查看网络, `DEV` 查看网络接口

* `num1` 刷新间隔(默认一次), `num2`查看次所(默认无限次)