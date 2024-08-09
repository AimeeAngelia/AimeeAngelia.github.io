# 输出图形字符

* 内容由`CODEGEEX`提供,请自行验证

## banner

```bash
apt install banner      //安装
```

例:

```bash
banner "Hello World"   //输出Hello World
```

```bash
printerbanner -w 50 K       //输出K字符，宽度为50
```

## figlet

```bash
apt install figlet      //安装
```

例:

```bash
figlet "Hello World"   //输出Hello World
```

```bash
figlet -f big K       //输出K字符，字体为big
```

```bash
figlet -f big K -c       //输出K字符，字体为big，并使用-c参数进行居中输出
```

```bash
figlet -f big K -c -w 50       //输出K字符，字体为big，并使用-c参数进行居中输出，宽度为50
```

```bash
figlet -f big K -c -w 50 -d       //输出K字符，字体为big，并使用-c参数进行居中输出，宽度为50，并使用-d参数进行静音输出
```

```bash
figlet -f big K -c -w 50 -d -p 50       //输出K字符，字体为big，并使用-c参数进行居中输出，宽度为50，并使用-d参数进行静音输出，并使用-p参数设置动画位置为50
```

```bash
figlet -f big K -c -w 50 -d -p 50 -t       //输出K字符，字体为big，并使用-c参数进行居中输出，宽度为50，并使用-d参数进行静音输出，并使用-p参数设置动画位置为50，并使用-t参数进行动画效果
```


## toilet

```bash
apt install toilet      //安装
```

例:

```bash
toilet "Hello World"   //输出Hello World
```

```bash
toilet -f big K       //输出K字符，字体为big
```

```bash
toilet -f big K -F gay       //输出K字符，字体为big，并使用gay颜色
```

```bash
toilet -f big K -F gay -w 50       //输出K字符，字体为big，并使用gay颜色，宽度为50
```

```bash
toilet -f big K -F gay -w 50 -t       //输出K字符，字体为big，并使用gay颜色，宽度为50，并使用-t参数进行动画效果
```

```bash
toilet -f big K -F gay -w 50 -t -a center       //输出K字符，字体为big，并使用gay颜色，宽度为50，并使用-t参数进行动画效果，并使用-a参数进行居中输出
```

```bash
toilet -f big K -F gay -w 50 -t -a center -d       //输出K字符，字体为big，并使用gay颜色，宽度为50，并使用-t参数进行动画效果，并使用-a参数进行居中输出，并使用-d参数进行静音输出
```

```bash
toilet -f big K -F gay -w 50 -t -a center -d -p 50       //输出K字符，字体为big，并使用gay颜色，宽度为50，并使用-t参数进行动画效果，并使用-a参数进行居中输出，并使用-d参数进行静音输出，并使用-p参数设置动画位置为50
```



## cowsay
```bash
apt install cowsay      //安装
```

例:

```bash
cowsay "Hello World"   //输出Hello World
```

```bash
cowsay -f big K       //输出K字符，字体为big
```

```bash
cowsay -f big K | lolcat       //输出K字符，字体为big，并使用lolcat进行彩色输出
```

```bash
cowsay -f big K | lolcat -a       //输出K字符，字体为big，并使用lolcat进行彩色输出，并使用-a参数进行动画效果
```

```bash
cowsay -f big K | lolcat -a -d 100       //输出K字符，字体为big，并使用lolcat进行彩色输出，并使用-a参数进行动画效果，并使用-d参数设置动画速度为100
```

```bash
cowsay -f big K | lolcat -a -d 100 -s       //输出K字符，字体为big，并使用lolcat进行彩色输出，并使用-a参数进行动画效果，并使用-d参数设置动画速度为100，并使用-s参数进行静音输出
```

```bash
cowsay - f big K | lolcat -a -d 100 -s -p 50       //输出K字符，字体为big，并使用lolcat进行彩色输出，并使用-a参数进行动画效果，并使用-d参数设置动画速度为100，并使用-s参数进行静音输出，并使用-p参数设置动画位置为50
```