# find命令

## 总述

```bash
 find 起始路经 -name "被查找的文件名"
 find 起始路经 -size +|-n[kMG]
```

- `find`查找文件命令
- 可使用通配符[`*`]查找

## [-name]

- 以文件名的模式去查找
- `"被查找的文件名"`的`""`在`Ubuntu`中加或不加均可

```bash
  find / -name time*  //查找以time开头的文件
  find / -name *time  //查找以time结尾的文件
  find / -name *time*  //查找文件名含time的文件
```
## [-size]

- 按文件大小查找文件
- `+`|`-`表示大于或小于
- `n`表示大小数字
- `[kMG]`表示单位，k(小写)表示kb，M表示MB，G表示GB

```bash
find / -size -10k  //查找小于10KB的文件
find / -size +100M  //查找大于100MB的文件
find / -size +1G  //查找大于1GB的文件
```
