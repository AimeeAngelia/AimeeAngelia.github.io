# Sudo 简史

## 早期岁月

Sudo 最初由 Bob Coggeshall 和 Cliff Spencer 于1980年左右在SUNY/Buffalo的计算机科学系构思并实现。它运行在运行4.1BSD的VAX-11/750上。1985年12月，Phil Betchel、Cliff Spencer、Gretchen Phillips、John LoVerso 和 Don Gworek 更新了该版本，并发布到 net.sources Usenet 新闻组。

## CU-Boulder 的 Sudo

1986年夏天，Garth Snyder 发布了增强版本的 sudo。在接下来的5年里，CU-Boulder 的 Bob Coggeshall、Bob Manchek 和 Trent Hein 等几个人继续维护和改进 sudo。

## Root Group 的 Sudo

1991年，Dave Hieb 和 Jeff Nieusma 在与一家名为“Root Group”的咨询公司签订合同后，编写了一个具有增强 sudoers 格式的新版本 sudo。这个版本后来以 GNU 公共许可证发布。

## CU 的 Sudo

1994年，在非正式维护 sudo 一段时间后，Todd C. Miller 公开发布了“CU sudo” (版本 1.3)，修复了错误并支持更多操作系统。添加了“CU”前缀以区别于“Root Group”的“官方”版本。

1995年，Chris Jepeway 贡献了一个新的 sudoers 文件解析器。这个新的解析器是一个真正的语法（与旧的不同），可以同时用于 sudo 和 visudo（以前它们有稍微不同的解析器）。

1996年，Todd 在 CU-Boulder 的 ftp 站点上维护 sudo 多年后，将 sudo 的发布迁移到他自己的域名 courtesan.com。

## 仅仅是 Sudo

1999年，由于自1991年以来“Root Group”没有正式发布 sudo，因此删除了名称中的“CU”前缀。从版本1.6开始，Sudo 不再包含任何原始“Root Group”代码，并以 ISC 风格的许可证发布。

2001年，sudo 的网站、ftp 站点和邮件列表从 courtesan.com 迁移到 sudo.ws 域（sudo.org 已被占用）。

## LDAP 集成

2003年，全国互助保险公司贡献了 Aaron Spangler 编写的代码，用于将 sudoers 数据存储在 LDAP 中。这些更改已合并到 Sudo 1.6.8 中。

## 新解析器

2005年，Todd 重写了 sudoers 解析器，以更好地支持过去十年中添加的功能。这个新的解析器消除了以前的一些限制，取消了顺序约束，并增加了对包含多个 sudoers 文件的支持。

## Quest 赞助

2010年，Quest Software 开始赞助 Sudo 开发，聘请 Todd 全职从事 Sudo 的工作。这使得添加了 I/O 日志记录、插件 API、日志服务器、额外的回归和模糊测试、支持二进制包和更常规的发布成为可能。

## 现今

目前，Sudo 由以下人员维护：

Todd C. Miller <Todd.Miller@sudo.ws>

Todd 继续增强 sudo 并修复错误。
