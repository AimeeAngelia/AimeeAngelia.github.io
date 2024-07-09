# 环境变量

* 操作系统运行时记录的一些关键信息,辅助系统运行

```bash
env		//查看当前系统记录的环境变量
```

* 环境变量是`KeyValue(Key=Value)`型结构

```bash
root@Ubuntu:~# env | grep PATH
PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
```

* 执行的命令,系统会在`PATH`路经下搜索

* `:` 为分隔

## $

* 取到某一环境变量(`Key`)具体的值(`Value`)

例:

```bash
root@Ubuntu:~# echo $PWD
/root
echo $PATH
/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
```

* ⚠️注意为大写

```bash
echo ${PATH}ABC		//在PATH的`Value`后加上`ABC`
```

## 临时变量

```bash
export 变量名=变量值
```

例:

```bash
root@Ubuntu:~# export myname=kitte
root@Ubuntu:~# echo $myname
kitte
```

## 永久变量

### 仅对当前用户生效

```bash
vim ~/.bashrc
export Key=Value		//文件末尾,两者皆可
export Key='Value'		//文件末尾,两者皆可
```

```bash
source .bashrc		//配置生效
```

### 对当全部用户生效

```bash
vim /etc/profile
export Key=Value		//文件末尾,两者皆可
export Key='Value'		//文件末尾,两者皆可
```

```bash
source /etc/profile		//配置生效
```
### 拓展

```bash
export PATH=$PATH:/root/myenv
```

* 将指定的文件夹加入PATH,达到在系统各处实现自己的自定义命令
