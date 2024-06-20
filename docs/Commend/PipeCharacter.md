# 管道符|

* 将管道符左边命令的结果，作为右边命令的输入

```bash
ls -l /usr/bin | wc -l  //统计/usr/bin文件夹下的文件和文件夹的数量
cat /cat.txt | grep "cat"  //过滤cat.txt中含cat的行
cat /cat/.txt | grep "cat" | grep "dog"  //过滤cat.txt中同时含cat&&dog的行
```

* 管道符可以叠加使用，如上文`cat /cat/.txt | grep "cat" | grep "dog"`