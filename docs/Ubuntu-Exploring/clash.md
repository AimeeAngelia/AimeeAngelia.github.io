# Clash(VPN)配置

**由chatGPT-3.5生成,个人笔记,未实践(😴😴😴)

## **安装Clash**

首先，您需要安装Clash软件。可以从Clash的GitHub页面下载适用于Linux的二进制文件，或者通过包管理器安装。以下是通过包管理器安装的步骤。

## **下载Clash二进制文件**

在终端中执行以下命令，下载Clash的Linux二进制文件。

``````bash
wget -O clash-linux-amd64.tar.gz https://github.com/Dreamacro/clash/releases/download/v1.7.0/clash-linux-amd64-v1.7.0.gz
``````

## **解压文件**

解压下载的压缩包。

``````bash
tar -xzvf clash-linux-amd64.tar.gz
``````

## **将Clash二进制文件移动到合适的位置**

解压后，将Clash二进制文件移动到一个适当的位置，例如 `/usr/local/bin`。

``````bash
sudo mv clash-linux-amd64 /usr/local/bin/clash
``````

## **配置Clash**

创建配置文件 `config.yaml`，并将其放置在合适的位置。您可以从Clash的GitHub页面中找到示例配置文件，并进行相应的修改以符合您的需求。

## **启动Clash**

 使用终端进入配置文件所在的目录，并执行以下命令启动Clash。

``````bash
clash -d /path/to/config/directory
``````

请将 `/path/to/config/directory` 替换为您保存 `config.yaml` 文件的目录路径。

## **设置系统代理**

在系统设置中，将代理设置为 `127.0.0.1:7890`，这是Clash默认的代理地址和端口。

## **测试代理**

打开浏览器或其他网络应用程序，并确保它们已经开始通过Clash代理进行网络连接。

