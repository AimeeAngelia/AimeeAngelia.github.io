# 重定向符> & >>命令
## 总述
```bash
>
>>
```

## 重定向符>

* 将左侧命令的结果，`覆盖`写入到右侧指定文件中

```bash
root@Ubuntu:~# ls -alh > ls.txt
root@Ubuntu:~# cat ls.txt
-----------输出结果-----------
total 77M
drwx------ 10 root root 4.0K Jun 20 11:01 .
drwxr-xr-x 19 root root 4.0K Apr 24 11:30 ..
drwxr-xr-x  2 root root 4.0K Apr 30 18:59 1panel-v1.10.6-lts-linux-amd64
-rw-r--r--  1 root root  50M Apr 30 18:58 1panel-v1.10.6-lts-linux-amd64.tar.gz
-rw-------  1 root root 2.7K Jun 20 11:07 .bash_history
-rw-r--r--  1 root root 3.1K Oct 15  2021 .bashrc
drwx------  3 root root 4.0K May 15  2023 .cache
drwx------  3 root root 4.0K May 15  2023 .config
drwxr-xr-x  2 root root 4.0K Jun 12 15:24 .finalshellc
-rw-------  1 root root   20 Jun 12 15:30 .lesshst
-rw-r--r--  1 root root    0 Jun 20 11:26 ls.txt
drwxr-xr-x  2 root root 4.0K May 15  2023 .pip
-rw-r--r--  1 root root  161 Jul  9  2019 .profile
-rw-r--r--  1 root root  206 Apr 24 11:30 .pydistutils.cfg
-rw-r--r--  1 root root 2.4K Apr 30 18:58 quick_start.sh
drwxr-xr-x  2 root root 4.0K May 15  2023 .rpmdb
drwx------  3 root root 4.0K May 15  2023 snap
-rw-r--r--  1 root root  28M Apr 29 17:37 Snipaste-2.9-Beta2-x86_64.AppImage
drwx------  2 root root 4.0K May 15  2023 .ssh
-rw-------  1 root root  866 Apr 24 17:52 .viminfo
-----------输出结束-----------
root@Ubuntu:~# ls -lh > ls.txt
root@Ubuntu:~# cat ls.txt
-----------输出结果-----------
total 77M
drwxr-xr-x 2 root root 4.0K Apr 30 18:59 1panel-v1.10.6-lts-linux-amd64
-rw-r--r-- 1 root root  50M Apr 30 18:58 1panel-v1.10.6-lts-linux-amd64.tar.gz
-rw-r--r-- 1 root root    0 Jun 20 11:27 ls.txt
-rw-r--r-- 1 root root 2.4K Apr 30 18:58 quick_start.sh
drwx------ 3 root root 4.0K May 15  2023 snap
-rw-r--r-- 1 root root  28M Apr 29 17:37 Snipaste-2.9-Beta2-x86_64.AppImage
-----------输出结束-----------
```

## 重定向符>>

* 将左侧命令的结果，`追加`写入到右侧指定文件中

```bash
root@Ubuntu:~# ls -alh > ls.txt
root@Ubuntu:~# cat ls.txt
-----------输出结果-----------
total 77M
drwx------ 10 root root 4.0K Jun 20 11:01 .
drwxr-xr-x 19 root root 4.0K Apr 24 11:30 ..
drwxr-xr-x  2 root root 4.0K Apr 30 18:59 1panel-v1.10.6-lts-linux-amd64
-rw-r--r--  1 root root  50M Apr 30 18:58 1panel-v1.10.6-lts-linux-amd64.tar.gz
-rw-------  1 root root 2.7K Jun 20 11:07 .bash_history
-rw-r--r--  1 root root 3.1K Oct 15  2021 .bashrc
drwx------  3 root root 4.0K May 15  2023 .cache
drwx------  3 root root 4.0K May 15  2023 .config
drwxr-xr-x  2 root root 4.0K Jun 12 15:24 .finalshellc
-rw-------  1 root root   20 Jun 12 15:30 .lesshst
-rw-r--r--  1 root root    0 Jun 20 11:26 ls.txt
drwxr-xr-x  2 root root 4.0K May 15  2023 .pip
-rw-r--r--  1 root root  161 Jul  9  2019 .profile
-rw-r--r--  1 root root  206 Apr 24 11:30 .pydistutils.cfg
-rw-r--r--  1 root root 2.4K Apr 30 18:58 quick_start.sh
drwxr-xr-x  2 root root 4.0K May 15  2023 .rpmdb
drwx------  3 root root 4.0K May 15  2023 snap
-rw-r--r--  1 root root  28M Apr 29 17:37 Snipaste-2.9-Beta2-x86_64.AppImage
drwx------  2 root root 4.0K May 15  2023 .ssh
-rw-------  1 root root  866 Apr 24 17:52 .viminfo
-----------输出结束-----------
root@Ubuntu:~# ls -lh > ls.txt
root@Ubuntu:~# cat ls.txt
-----------输出结果-----------
total 77M
drwx------ 10 root root 4.0K Jun 20 11:01 .
drwxr-xr-x 19 root root 4.0K Apr 24 11:30 ..
drwxr-xr-x  2 root root 4.0K Apr 30 18:59 1panel-v1.10.6-lts-linux-amd64
-rw-r--r--  1 root root  50M Apr 30 18:58 1panel-v1.10.6-lts-linux-amd64.tar.gz
-rw-------  1 root root 2.7K Jun 20 11:07 .bash_history
-rw-r--r--  1 root root 3.1K Oct 15  2021 .bashrc
drwx------  3 root root 4.0K May 15  2023 .cache
drwx------  3 root root 4.0K May 15  2023 .config
drwxr-xr-x  2 root root 4.0K Jun 12 15:24 .finalshellc
-rw-------  1 root root   20 Jun 12 15:30 .lesshst
-rw-r--r--  1 root root    0 Jun 20 11:26 ls.txt
drwxr-xr-x  2 root root 4.0K May 15  2023 .pip
-rw-r--r--  1 root root  161 Jul  9  2019 .profile
-rw-r--r--  1 root root  206 Apr 24 11:30 .pydistutils.cfg
-rw-r--r--  1 root root 2.4K Apr 30 18:58 quick_start.sh
drwxr-xr-x  2 root root 4.0K May 15  2023 .rpmdb
drwx------  3 root root 4.0K May 15  2023 snap
-rw-r--r--  1 root root  28M Apr 29 17:37 Snipaste-2.9-Beta2-x86_64.AppImage
drwx------  2 root root 4.0K May 15  2023 .ssh
-rw-------  1 root root  866 Apr 24 17:52 .viminfo
total 77M
drwxr-xr-x 2 root root 4.0K Apr 30 18:59 1panel-v1.10.6-lts-linux-amd64
-rw-r--r-- 1 root root  50M Apr 30 18:58 1panel-v1.10.6-lts-linux-amd64.tar.gz
-rw-r--r-- 1 root root    0 Jun 20 11:27 ls.txt
-rw-r--r-- 1 root root 2.4K Apr 30 18:58 quick_start.sh
drwx------ 3 root root 4.0K May 15  2023 snap
-rw-r--r-- 1 root root  28M Apr 29 17:37 Snipaste-2.9-Beta2-x86_64.AppImage
-----------输出结束-----------
```
