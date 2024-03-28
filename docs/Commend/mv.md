# mv命令

## 总述

```bash
mv 参数1 参数2
```

* `mv`移动命令

## 参数

* `参数1`Linux路径,被移动的文件或文件夹
* `参数2`Linux路径,要移动到的地方

## 拓展

* mv来自英文move
* `mv text.txt /ct/`将`text.txt`移动到`/ct`目录下
* 写成`mv text.txt /ct`也可以成功移动
* 但在最后加上`/`指明移动到文件夹,若有该文件夹则移动,若没有则返回`Not a directory`;若不加`/`且该文件夹不存在时则将文件移动到`/`目录下并改名为`ct`)
* `mv text.txt text.1.txt`将`text.txt`更名为`text.1.txt`