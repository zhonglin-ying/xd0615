#######################################
#学习笔记#
#17040110010应忠林#
#GitHub配置SSHkey,以及使用Git Bash远程连接#
首先我们需要安装Git Bash
创建SSH Key
在git bash中输入

ssh-keygen -t rsa -C "注解"     //-t为密钥类型，一般默认为rsa,-C后面的注解可省略
然后连续输入三个空格，再回车即可。此时用户文件夹下会生成密钥。

Your identification has been saved in /c/Users/…/.ssh/id_rsa
Your public key has been saved in /c/Users/…/.ssh/id_rsa.pub


将SSH Key添加到GitHub
进入GitHub页面，点击setting
找到SSH and GPK Keys，添加ssh key

接下来在自己的GitHub中创建一个库，并使用git bash进行推送

首先使用clone下载文件，然后使用vim进行编辑。
再进行相关的注释，最后通过push将更新内容推送到GitHub项目库中




