# Vim

## Vim的三种工作模式

1. 命令模式(Command mode)
	所敲按键，编辑器均会理解为命令，以命令驱动执行不同功能。
2. 输入模式(Insert mode)
	又名编辑模式、插入模式。
	可以对文件内容进行自由编辑。
3. 底线命令模式(Last line mode)
	以`:`为起始，通常用于文件的保存，退出。

![1.png](https://aimeeangelia.github.io/Pictures/software/vim/1.png)

## 命令模式

![2.png](https://aimeeangelia.github.io/Pictures/software/vim/2.png)

![3.png](https://aimeeangelia.github.io/Pictures/software/vim/3.png)

![4.png](https://aimeeangelia.github.io/Pictures/software/vim/4.png)

`P.S.` :鄙人认为`i`比较有用 

* `:set nu` 显示行号

* 表格总结如下

|   模式   |      命令      |               描述                |
| :------: | :------------: | :-------------------------------: |
| 命令模式 |       i        |    在当前光标位置进入输入模式     |
| 命令模式 |       a        |  在当前光标位置之后进入输入模式   |
| 命令模式 |       I        |   在当前行的开头，进入输入模式    |
| 命令模式 |       A        |   在当前行的结尾，进入输入模式    |
| 命令模式 |       o        |   在当前光标下一行进入输入模式    |
| 命令模式 |       O        |   在当前光标上一行进入输入模式    |
| 输入模式 |      esc       | 任何情况下输入esc都能回到命令模式 |
| 命令模式 | 键盘上、键盘k  |           向上移动光标            |
| 命令模式 | 键盘下、键盘j  |           向下移动光标            |
| 命令模式 | 键盘左、键盘h  |           向左移动光标            |
| 命令模式 | 键盘右、键盘l  |           向后移动光标            |
| 命令模式 |       0        |      移动光标到当前行的开头       |
| 命令模式 |       $        |      移动光标到当前行的结尾       |
| 命令模式 |  pageup(PgUp)  |             向上翻页              |
| 命令模式 | pangdown(PgDn) |             向下翻页              |
| 命令模式 |       /        |           进入搜索模式            |
| 命令模式 |       n        |           向下继续搜索            |
| 命令模式 |       N        |           向上继续搜索            |
| 命令模式 |       dd       |       删除光标所在行的内容        |
| 命令模式 |      ndd       | n是数字，表示删除当前光标向下n行  |
| 命令模式 |       yy       |            复制当前行             |
| 命令模式 |      nyy       |  n是数字，复制当前行和下面的n行   |
| 命令模式 |       p        |          粘贴复制的内容           |
| 命令模式 |       u        |             撤销修改              |
| 命令模式 |    ctrl + r    |           反向撤销修改            |
| 命令模式 |       gg       |             跳到首行              |
| 命令模式 |       G        |             跳到行尾              |
| 命令模式 |       dG       |    从当前行开始，向下全部删除     |
| 命令模式 |      dgg       |    从当前行开始，向上全部删除     |
| 命令模式 |       d$       | 从当前光标开始，删除到本行的结尾  |
| 命令模式 |       d0       | 从当前光标开始，删除到本行的开头  |
