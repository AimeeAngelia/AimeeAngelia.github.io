# 查看权限控制信息

## 认知权限信息

```bash
root@Ubuntu:~# ls -l
total 27716
drwxr-xr-x 2 root root     4096 Jul  7 20:07 KSelf
drwx------ 3 root root     4096 May 15  2023 snap
-rwxr-xr-x 1 root root 28366016 Jul  8 12:10 Snipaste-2.9.2-Beta-x86_64.AppImage
drwxr-xr-x 3 root root     4096 Jul  8 12:16 squashfs-root
```
### 权限细节(第一列)

![Permission Control](https://aimeeangelia.github.io/Pictures/Commend/PermissionControl/1.png)

![Permission Control](https://aimeeangelia.github.io/Pictures/Commend/PermissionControl/2.png)

* `r[read]`读`w[write]`写`x[execute]`执行

### 第二列

* 所属用户

### 第三列

* 所属用户组

## 修改权限信息

### chmod

* 只有文件/文件夹的所属用户/root可以修改

```bash
chmod [-R] 权限 文件/文件夹
```

* `[-R]` 对文件夹内的全部文件应用相同操作

例:

```bash
chmod u=rwx,g=rx,o=x hello.txt
chmod -R u=rwx,g=rx,o=x direg
```

* u表示该文件的拥有者(User)；g表示与该文件的拥有者属于同一个组(Group)；o表示其他用户(Other)；a表示这三者皆是，全部的用户(ALL)

* 简单表示方法

![Permission Control](https://aimeeangelia.github.io/Pictures/Commend/PermissionControl/3.png)

### chown

```bash
chown [-R] [user] [:] [group] 文件/文件夹
```
`[:]` 仅用于分割,表示用户组

例:

```bash
chown root hello.txt		//将hello.txt所属用户修改为root
chown :root hello.txt		//将hello.txt所属用户组修改为root
chown root:KA hello.txt		//将hello.txt所属用户修改为root,用户组修改为KA
chown -R root test		//将文件夹test的所属用户修改为root并对文件夹内全部内容应用同样规则
```



















