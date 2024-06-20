# echo命令

## 总述

```bash
echo 输出的内容[content]
```

- `echo`在命令行输出指定内容[content]

## [输出的内容[content]]

- 输出的内容较复杂用`""`包围(安利👍)

- ```bash
  root@Ubuntu:~# echo 我爱你(˘³˘)
  -bash: syntax error near unexpected token `('  //报错❗
  root@Ubuntu:~# echo "我爱你(˘³˘)"
  我爱你(˘³˘)  //正常运行
  ```