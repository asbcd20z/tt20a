<img src="bash下快捷键移动光标示意图.jpg" width="46%" align="right" />


# tt20a
tt20a-test20200511-first

https://git-scm.com/book/zh/v2/Git-基础-查看提交历史 https://php.cn/manual/view/34971.html
## //started
https://github.com/join/get-started  
https://github.com/new  
https://github.com/organizations/plan  
https://lab.github.com/  
actions  
https://github.com/asbcd20z  
https://github.com/asbcd20z?tab=repositories  
https://github.com/features/codespaces  
https://github.com/asbcd20z?tab=projects  
https://github.com/asbcd20z?tab=stars  
https://gist.github.com/mine  
https://help.github.com/en/packages/publishing-and-managing-packages/about-github-packages#supported-clients-and-formats  
https://help.github.com/en/github/collaborating-with-issues-and-pull-requests/about-pull-requests  
https://gitlab.com/help/topics/autodevops/index.md  
//authentication  
https://github.com/microsoft/Git-Credential-Manager-Core/blob/master/docs/github-apideprecation.md  
https://docs.github.com/en/rest/overview/other-authentication-methods#basic-authentication  
https://docs.github.com/en/github/authenticating-to-github/creating-a-personal-access-token  
## //Quick setup
```
…or create a new repository on the command line
echo "# test20210207b" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin git@github.com:asbcd20z/test20210207b.git
git push -u origin main
==git branch -u origin/main main;  git push  origin main
…or push an existing repository from the command line
git remote add origin git@github.com:asbcd20z/test20210207b.git
git branch -M main
git push -u origin main
…or import code from another repository
You can initialize this repository with code from a Subversion, Mercurial, or TFS project.
```

```
bash下快捷键移动光标示意图:
ctr-A, ctr-E  移动行首，行尾
alt-B, alt-F  移动词前，词后 //or: ctr-<, ctr->
ctr-B, ctr-F  移动字前，字后
ctr-U, ctr-K  删去至行首，行尾
ctr-W, alt-D  删去至词前，词后
===
-echo -e 'aa-join-lines\nbbb\nc'| for i in `cat -` ; do echo -n "$i, "; done
-echo aa |sed 'i\\' |hexdump.exe  -C
-echo -e '1aa\n2bb\n3c' |sed -e'\=bb= i\\nXX-\n' -e'$ aY-' -e'$ iZ-'
-echo -e '1aa\n2bb\n3c' |sed -e'\=bb= s/^/\n/'   -e'$ aY-' -e'$ iZ-'
===
```

//  
sublime Text中的workspace和project什么关系?  https://www.zhihu.com/question/22681628  //Ctrl+Shift+N  
//http://www.sublimetext.com/docs/3/projects.html  
https://docs.github.com/en , https://github.com/settings/profile  
?tab=repositories , tab=projects , tab=stars ,   
ip查询地址 https://tool.lu/ip/  
gitee自动同步github  
`1` aa
```
https://gitee.com/giteemirror/free-programming-books-zh_CN
https://github.com/EbookFoundation/free-programming-books/blob/master/CONTRIBUTING-zh.md
bb
ccc
```

## //GNU/linux/c
```
https://www.gnu.org/ , https://www.fsf.org/resources/ , http://directory.fsf.org/
GNU Manuals Online  https://gnu.huihoo.org/
https://www.gnu.org/software/
https://www.gnu.org/software/libc/manual/
https://gcc.gnu.org/onlinedocs/
https://www.gnu.org/software/gdb/documentation/
--
Linux C/C++编程手册查阅方法  https://www.cnblogs.com/findumars/p/6653704.html
The Linux man-pages project https://www.kernel.org/doc/man-pages/  https://man7.org/linux/man-pages/
https://www.runoob.com/cprogramming/c-standard-library.html
https://man7.org/linux/man-pages/man1/bash.1.html#EXPANSION
https://man7.org/linux/man-pages/man1/bash.1.html#REDIRECTION
https://linux.die.net/man/5/ssh_config (vscode ssh remote: IdentityFile ~/.ssh/id_rsa)
https://www.cnblogs.com/liyufeia/p/11405779.html (cat id_rsa.pub >> authorized_keys //ssh-copy-id)
lexical/syntax/semantically
```
