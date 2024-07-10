# touch命令

## 总述
```bash
touch linux路径
```

* `touch`创建文件

## linux路径

* 必填,表示要创建的文件的路径,相对路径或绝对路径均可
* `touch ~/Desktop/Net/net.txt`在`/home/aimee/Desktop/Net`下创建`net.txt`文件
* `touch net.txt`在当前目录创建`net.txt`文件

## 拓展


* `touch`命令除了创建文件外,还可以修改文件的时间戳,包括访问时间、修改时间、状态改变时间
* `touch -a`修改访问时间
* `touch -m`修改修改时间
* `touch -c`如果文件不存在则不创建文件
* `touch -r`将指定文件的时间戳设置为参考文件的时间戳
* `touch -t`将指定文件的时间戳设置为指定的时间
* `touch -d`将指定文件的时间戳设置为指定的时间
* `touch -h`只修改文件的时间戳,不修改文件本身
* `touch -f`强制修改文件的时间戳,即使文件不存在也不报错
* `touch -v`显示详细信息
* `touch -V`显示版本信息

## 示例

```bash
touch love-{1..10}.txt
```
* 创建`love-1.txt`到`love-10.txt`的文件
```bash
touch -t 202009011200.00 love.txt
```
* 将`love.txt`的修改时间设置为`2020-09-01 12:00:00`
```bash
touch -r love.txt love1.txt
```
* 将`love1.txt`的修改时间设置为`love.txt`的修改时间
```bash
touch -d 202009011200.00 love.txt
```
* 将`love.txt`的修改时间设置为`2020-09-01 12:00:00`
```bash
touch -f love.txt
```
* 强制修改`love.txt`的时间戳,即使文件不存在也不报错
```bash
touch -v love.txt
```
* 显示详细信息
```bash
touch -V
```
* 显示版本信息
```bash
touch -h love.txt
```
* 只修改文件的时间戳,不修改文件本身
```bash
touch -c love.txt
```
* 如果文件不存在则不创建文件
```bash
touch -m love.txt
```
* 修改修改时间
```bash
touch -a love.txt
```
* 修改访问时间



