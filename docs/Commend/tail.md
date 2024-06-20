# tail命令
## 总述
```bash
tail [ -f -num] [linux路径]
```

* 查看文件末尾内容，并可持续追踪。

*  显示当前位置文件夹内的文件和文件夹
*  默认加载/home/aimee

## [-f]

* 可选参数，表示持续追踪文件内容

```bash
tail -f ls.txt
```

## [-num]

* 可选参数，查看文件末尾多少行(默认为10行)。

```bash
tail -5 ls.txt
```
