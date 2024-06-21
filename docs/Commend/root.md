# 超级管理员账户(root😱)

## su && exit

* 切换用户 ---> `S`witch `U`ser
* 语法 

```bash
su [-] [user_name]
```

*  [`-`] 可选，表示是否在切换用户是加载环境变量，推荐带上

* [user_name]表示要切换的用户，可省略，默认`root`

* 切换用户后，可通过`exit`命令退回上一个用户，也可使用快捷键`ctrl + d`

* 普通用户切换其它用户`需要输密码`

* `root`用户切换其他用户`无需输密码`

## sudo

* 使用sudo命令,为普通的命令授权，临时以root身份执行,避免带来系统损坏。
* 语法:
```bash
sudo 其它命令
```

* 在其它命令之前,带上`sudo`,即可为这一条命令临时赋予`root`授权
* 但是并不是所有的用户都有权利使用`sudo`,我们需要为普通用户配置`sudo`认证

## 配置sudo认证

* 切换`root`用户，执行`visudo`,终端通过默认编辑器(`Nano`)自动打开`/etc/sudoers`		也可使用`vim /etc/sudoers`进行配置(推荐)
* 在文件末尾添加
```bash
user_name ALL=(ALL)		NOPASSWORD: ALL		//NOPASSWORD: ALL 表示user_name使用root时无需密码
```
* 不添加认证需要`root`密码，添加认证后可直接执行`sudo`命令