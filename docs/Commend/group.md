# 用户 && 用户组

* 系统中可以有多个用户 && 用户组

* 用户可以加入多个用户组 

## 权限管理

* 用户权限管理

* 用户组权限管理

* [`e.g.`] 针对某个文件,分配用户和用户组的权限管理

## 用户组管理

* 需要`root`权限

* 创建用户组

```bash
groupadd user_group_name
```

* 删除用户组

```bash
groupdel user_group_name
```

## 用户管理

* 需要`root`权限

* 创建用户

```bash
useradd [-g -d] user_name
```

* `[-g]` 指定用户的组(必需),默认(未指定)创建同`user_name`的`user_group_name`并加入
* `[-d]`指定用户的`home`目录,默认( 未指定)位于`/home/user_name`


```bash
userdel [-r] user_name
```

* `[-r]` 删除用户`home`目录,否则保留

```bash
id [user_name]
```

* 查看用户(不加参数默认为当前用户)所属的组,

```bash
usermod -aG user_group_name user_name
```

* 添加`user_name`到`user_group_name`

```bash
getent passwd
```

* 查看系统所有用户

```bash
root@Ubuntu:/home# getent passwd


root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
sys:x:3:3:sys:/dev:/usr/sbin/nologin
sync:x:4:65534:sync:/bin:/bin/sync
games:x:5:60:games:/usr/games:/usr/sbin/nologin
man:x:6:12:man:/var/cache/man:/usr/sbin/nologin
lp:x:7:7:lp:/var/spool/lpd:/usr/sbin/nologin
mail:x:8:8:mail:/var/mail:/usr/sbin/nologin
news:x:9:9:news:/var/spool/news:/usr/sbin/nologin
uucp:x:10:10:uucp:/var/spool/uucp:/usr/sbin/nologin
proxy:x:13:13:proxy:/bin:/usr/sbin/nologin
www-data:x:33:33:www-data:/var/www:/usr/sbin/nologin
backup:x:34:34:backup:/var/backups:/usr/sbin/nologin
list:x:38:38:Mailing List Manager:/var/list:/usr/sbin/nologin
irc:x:39:39:ircd:/run/ircd:/usr/sbin/nologin
gnats:x:41:41:Gnats Bug-Reporting System (admin):/var/lib/gnats:/usr/sbin/nologin
nobody:x:65534:65534:nobody:/nonexistent:/usr/sbin/nologin
_apt:x:100:65534::/nonexistent:/usr/sbin/nologin
systemd-network:x:101:102:systemd Network Management,,,:/run/systemd:/usr/sbin/nologin
systemd-resolve:x:102:103:systemd Resolver,,,:/run/systemd:/usr/sbin/nologin
messagebus:x:103:104::/nonexistent:/usr/sbin/nologin
systemd-timesync:x:104:105:systemd Time Synchronization,,,:/run/systemd:/usr/sbin/nologin
pollinate:x:105:1::/var/cache/pollinate:/bin/false
sshd:x:106:65534::/run/sshd:/usr/sbin/nologin
syslog:x:107:113::/home/syslog:/usr/sbin/nologin
uuidd:x:108:114::/run/uuidd:/usr/sbin/nologin
tcpdump:x:109:115::/nonexistent:/usr/sbin/nologin
tss:x:110:116:TPM software stack,,,:/var/lib/tpm:/bin/false
landscape:x:111:117::/var/lib/landscape:/usr/sbin/nologin
usbmux:x:112:46:usbmux daemon,,,:/var/lib/usbmux:/usr/sbin/nologin
lxd:x:999:100::/var/snap/lxd/common/lxd:/bin/false
ntp:x:113:118::/nonexistent:/usr/sbin/nologin
_chrony:x:114:124:Chrony daemon,,,:/var/lib/chrony:/usr/sbin/nologin
fwupd-refresh:x:115:125:fwupd-refresh user,,,:/run/systemd:/usr/sbin/nologin
ecs-assist-user:x:1000:1000::/home/ecs-assist-user:/sbin/nologin
gfhdju:x:1001:1002:,,,:/home/gfhdju:/bin/bash
```

* 展示的相关信息  `user_name` : `密码(x)` : `用户ID` : `组ID` : `描述信息` : `HOME目录` : `执行终端(默认bash)`

```bash
getent group
```

```bash
root@Ubuntu:~# getent group


root:x:0:
daemon:x:1:
bin:x:2:
sys:x:3:
adm:x:4:syslog
tty:x:5:
disk:x:6:
lp:x:7:
mail:x:8:
news:x:9:
uucp:x:10:
man:x:12:
proxy:x:13:
kmem:x:15:
dialout:x:20:
fax:x:21:
voice:x:22:
cdrom:x:24:
floppy:x:25:
tape:x:26:
sudo:x:27:
audio:x:29:
dip:x:30:
www-data:x:33:
backup:x:34:
operator:x:37:
list:x:38:
irc:x:39:
src:x:40:
gnats:x:41:
shadow:x:42:
utmp:x:43:
video:x:44:
sasl:x:45:
plugdev:x:46:
staff:x:50:
games:x:60:
users:x:100:
nogroup:x:65534:
systemd-journal:x:101:
systemd-network:x:102:
systemd-resolve:x:103:
messagebus:x:104:
systemd-timesync:x:105:
input:x:106:
sgx:x:107:
kvm:x:108:
render:x:109:
lxd:x:110:
_ssh:x:111:
crontab:x:112:
syslog:x:113:
uuidd:x:114:
tcpdump:x:115:
tss:x:116:
landscape:x:117:
ntp:x:118:
stapdev:x:119:
stapusr:x:120:
stapsys:x:121:
rdma:x:122:
lpadmin:x:123:
_chrony:x:124:
fwupd-refresh:x:125:
ecs-assist-user:x:1000:
KA:x:1001:gfhdju
gfhdju:x:1002:
```

* 展示的相关信息  `user_group_name` : `组认证(x)` : `组ID`















