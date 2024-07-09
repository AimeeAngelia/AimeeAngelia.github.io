# 压缩&解压

## gzip

### 压缩

* `.tar` 称之为`tarball`,归档文件--->文件的简单封装,体积未明显减少

* `.gz` 也常为`.tar.gz` ,`gzip`格式的压缩文件--->可将文件体积极大减少

```bash
tar [-c -v -x -f -z -C] 参数1,参数2,...,参数n
```

| 选项 | 解释                               |
| :--: | :--------------------------------- |
|  -c  | 创建压缩文件,用于压缩模式          |
|  -v  | 显示压缩/解压过程,查看进度         |
|  -x  | 解压模式                           |
|  -f  | 指定文件名称,必需位于末尾          |
|  -z  | gzip,不使用-z就是普通的tarball格式 |
|  -C  | 选择解压目的地,用于解压模式        |

* 常用组合

```bash
tar -cvf KK.tar K1.txt K2.txt K3.txt
//`将K1.txt K2.txt K3.txt`打包成`KK.tar`
tar -zcvf KK.tar.gz K1.txt K2.txt K3.txt
//`将K1.txt K2.txt K3.txt`打包成`KK.tar.gz`
```

### 解压

* 常用组合

```bash
tar -xvf KK.tar
//解压到当前目录
tar -zxvf KK.tar.gz
//解压.gzip到当前目录
tar -xvf KK.tar -C /root/KKKKA
//解压到指定目录(/root/KKKKA)
```

* `-C` 建议单独使用

## zip

### 压缩

```bash
zip 文件名 [-r] 参数1,参数2,...,参数n
```

* `-r` 压缩文件中包含文件夹📂,需要使用

例:

```bash
zip KA.zip -r KKKKA
```

### 解压

```bash
unzip 文件名 [-d] 位置
```

* `-d` 指定要解压的位置

例:

```bash
unzip KA.zip -d ./KA		//解压KA.zip到KA文件夹
```