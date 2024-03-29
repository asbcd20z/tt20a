# etc-link
:toc:
:toclevels: 6
:numbered:
:icons: font

<font color=#00ffff size=7>color=#00ffff</font>
<font color=gray size=72>color=gray</font>

## gnu
http://www.man7.org/linux/man-pages/man2/gettimeofday.2.html  
http://www.man7.org/linux/man-pages/man7/time.7.html  
http://www.man7.org/linux/man-pages/man7/vdso.7.html  
http://man7.org/linux/man-pages/man7/futex.7.html  
http://man7.org/linux/man-pages/man3/dlopen.3.html  

## c/cpp/c++
```
https://gcc.gnu.org/onlinedocs/libstdc++/manual/
https://en.cppreference.com/w/cpp/container/vector  
https://zh.cppreference.com/w/c/io/fprintf  
https://zh.cppreference.com/w/cpp/io  
https://coliru.stacked-crooked.com/  
http://coliru.stacked-crooked.com/  
https://cppinsights.io/  
https://zh.cppreference.com/w/Cppreference:Archives  
http://www.cplusplus.com/reference/stl/  
http://www.cplusplus.com/reference/ios/  
https://www.cplusplus.com/reference/type_traits/decay/  
C++ 教程 https://cloud.tencent.com/developer/doc/1024  
apiref  https://www.apiref.com/cpp/index.html
typeid(x).name()  std::type_info  std::type_index  
boost::typeindex::type_index type=typeindex::type_id<int&>(); type.pretty_name()  
boost::msm   Boost.Msm 介绍  https://www.jianshu.com/p/6748aa7c117b  
c __packed struct, struck __attribute__((packed)),member__attribute((aligned (n))), #pragma pack(2^x)默认是2^2=4B/8double-arch64(最大对齐值)  
浅谈C语言字节对齐+位域https://blog.csdn.net/ljx_5489464/article/details/50006133  
C语言字节对齐详解##https://www.cnblogs.com/born2run/p/9581355.html  
经典C语言面试题4:字节对齐的作用https://blog.csdn.net/M_joy666/article/details/80030024  
三步解决C语言中struct字节对齐问题https://blog.csdn.net/m0_37829435/article/details/81348532  
struct 字节对齐详解##https://blog.csdn.net/zhanghow/article/details/55262988  
C语言字节对齐规则总结+位域###https://blog.csdn.net/bingyu880101/article/details/83304350  
-需要注意，pragma pack指定的对齐值，是数据类型的最大对齐值，可以小，但是不能大。(default? #pragma pack(4))  
浅谈C语言的字节对齐 #pragma pack(n)2 https://www.jb51.net/article/102433.htm  
C语言之#pragma pack或者__packed学习https://blog.csdn.net/oshan2012/article/details/83214491  
C语言字节对齐详解##https://blog.csdn.net/cclethe/article/details/79659590  
//baidu/64位机字节对齐(64位时区别pointer/long=8bytes):  
在64位系统以及64位编译器下字节对齐----阿里巴巴2015实习生笔试题 https://blog.csdn.net/chengonghao/article/details/51861493  
32位和64位系统区别及字节对齐 https://blog.csdn.net/lz20120808/article/details/49910659  
man gcc: -gstabs+编译.  i386 and x86-64 Options  -malign-double //On x86-64, -malign-double is enabled by default.  
c++filter , http://demangler.com/
/
compiler/interpreter/transpiler, lint, tidy, cpd, gcov/coverage, valgrind, sanitizer
/
C/C++打印文件名/行号/函数名的方法https://www.cnblogs.com/shirishiqi/p/5431627.html  
C语言宏高级用法https://www.cnblogs.com/shirishiqi/p/6033364.html  
gcc动态链接库so的制作和使用# https://www.cnblogs.com/oxspirt/p/7344371.html  
=Linux下gcc生成和使用静态库和动态库详解# https://blog.csdn.net/CSqingchen/article/details/51546784  
router-路由器LAN口IP地址到底是什么?https://www.cnblogs.com/oxspirt/p/12302041.html  https://www.zhihu.com/question/369737960/answer/1004809747  
```

### c++
c++ inheritance -- 继承 https://www.cnblogs.com/timssd/p/4781107.html  
C++类的大小 https://www.cnblogs.com/timssd/p/5714079.html  
C++ 虚函数表解析 https://blog.csdn.net/haoel/article/details/1948051  
C++ 对象的内存布局(上) https://blog.csdn.net/haoel/article/details/3081328  https://blog.csdn.net/haoel/article/details/3081385  

### c++/type_traits/MPL/boost/fusion
```
baidu: type_traits
C++模板元编程Type_traits     https://blog.csdn.net/zxc024000/article/details/79405869
-C++11标准库之Type Traits简介https://blog.csdn.net/garfee_guan/article/details/12234011
c++11——type_traits 类型萃取  https://www.cnblogs.com/gtarcoder/p/4807670.html
模板元编程 --- 用 MPL 解决实际问题 http://www.cppblog.com/jack-wang/archive/2010/10/04/128589.html , http://blog.csdn.net/ralph623/archive/2005/10/15/504369.aspx
//
baidu: boost::fusion::extension::struct_member_name , BOOST_FUSION_ADAPT_STRUCT
https://www.boost.org/doc/libs/  Asio,fusion,iterator,json,log,msm(Meta State Machine),move,mp11,MPL,pool,Preprocessor,Process,Program_options,Python,Range,Ref,
   Signals2,Stacktrace,Test,Thread,Timer,TTI(Type Traits Introspection),typeinfo(not typeid,std::type_index,std::type_info),type_traits,typeof,Variant,VMD(Variadic)
https://www.boost.org/doc/libs/1_78_0/libs
https://www.boost.org/doc/libs/1_78_0/libs/fusion/doc/html/fusion/extension/ext_full.html
https://www.boost.org/doc/libs/1_78_0/libs/fusion/doc/html/index.html
https://www.boost.org/doc/libs/1_78_0/libs/mpl/doc/refmanual/components.html
如何迭代boost :: fusion关联结构并以通用方式访问关键字  http://cn.voidcc.com/question/p-dhyelvne-gp.html
--(std::string(typeid(typename boost::fusion::result_of::key_of<T>::type).name()) + ": " + boost::lexical_cast<std::string>(deref(t)))
Boost Fusion：将适应的结构类型转换为文本  https://www.thinbug.com/q/39033097
--std::string member_type = boost::typeindex::type_id<typename fusion::result_of::value_at<Sequence,Index>::type >().pretty_name() ;
--std::string member_name = fusion::extension::struct_member_name<Sequence,Index::value>::call();
```


## elearning web/lang
菜鸟 https://www.runoob.com/lua , https://www.w3cschool.cn/lua  
https://www.w3cschool.cn/sublimetext/  
关于HTTP协议，一篇就够了 https://www.cnblogs.com/ranyonsue/p/5984001.html  
HTTP协议超级详解        https://www.cnblogs.com/an-wen/p/11180076.html  
HTTP 代理原理及实现（一）https://blog.csdn.net/dolphin98629/article/details/54599850/  https://imququ.com/post/web-proxy-2.html  
HTTP协议和SOCKS5协议    https://www.cnblogs.com/yinzhengjie/p/7357860.html  
https://www.ietf.org/rfc/ , https://www.rfc-editor.org/  , (socks5)https://www.rfc-editor.org/rfc/rfc1928.txt  

## //git
```
https://git-scm.com/book/zh/v2/Git-基础-查看提交历史 https://php.cn/manual/view/34971.html  
git换行符LF与CRLF转换问题 https://www.cnblogs.com/sdgf/p/6237847.html  
git config --global core.autocrlf false/input/true  
git config --global core.safecrlf true/warn/false  
https://www.cnblogs.com/fangshenghui/p/5693610.html  
Sublime Text,View->Line Endings，选Unix，保存;  
是时候把gitee仓库迁移回github了  https://blog.csdn.net/qq598535550/article/details/87870931  
//git clone https://gitee.com/liyifeng1994/study-xxx.git; git remote remove origin;  
//git remote add origin https://github.com/liyifeng1994/study-xxx.git; git push -u origin master;  
https://gitee.com/help/articles/4284  https://blog.gitee.com/2018/06/05/github_to_gitee/  
//git remote add gitee https://xxx;...   git pull origin master;  git push gitee master;  
baidu--git rebase --skip
...
github.com gitlab.com gitee.com oschina.net  
使用GitHub.io当作自己的博客网站 https://blog.csdn.net/tyyytcj/article/details/80880018  
搭建自己的github.io博客 https://blog.csdn.net/qq_34106574/article/details/82704883  
Git算不算程序员的必备技能 https://www.zhihu.com/question/41667536/answer/1297935355  
GitLab中修改项目名称 (Settings->General->Advanced settings中，有Rename repository)  http://www.360doc.com/content/19/0102/16/10058718_806055719.shtml  
GIT_DIR 10.8 Git内部原理-环境变量 https://www.git-scm.com/book/en/v2/Git-Internals-Environment-Variables  git-$Id https://git-scm.com/docs/gitattributes/  
廖雪峰-Git教程  https://www.liaoxuefeng.com/wiki/896043488029600/900002180232448  
Git常用命令速查 https://www.jianshu.com/p/38832b41143d  
rebase,merge,cherry-pick的区别详解—面试常问 https://www.cnblogs.com/NaughtyCat/p/differ-with-rebase-merge-cherry-pick.html  https://git-scm.com/book/zh/v2  
Git知识总览(五)Git中的merge、rebase、cherry-pick以及交互式rebase https://www.cnblogs.com/ludashi/p/8213550.html  
简单对比git pull和git pull --rebase的使用 https://blog.csdn.net/dake_160413/article/details/78676163  https://www.cnblogs.com/kevingrace/p/5896706.html  
==
github 'force push'
github git push -f 慎用  http://www.kuazhi.com/post/320409.html
/
git clean -n  #-n -x -X -f -d
git st -uno   #-u -unormal -uall, --untracked-files=no,normal,all
git st --ignored  #--renames
/
git help hooks  #githooks  https://www.jianshu.com/p/f3f83872a801
==
多个git账户和项目切换#  blog.csdn.net/HeatDeath/article/details/79181025 , https://blog.csdn.net/jdk137/article/details/17579837
Selenium自动化测试#  https://blog.csdn.net/HeatDeath/category_6898402.html
/
```

## //git.submodue
```
git submodule 完整用法整理 https://blog.csdn.net/wkyseo/article/details/81589477  
git init --bare project.git; repack,fsck,gc  
git push -vv -f  origin master  #--force ///careful!!!, to restore,but better to revert commitId  
git remote -vv  #gitlab project项目迁移https://blog.csdn.net/lcyaiym/article/details/77678467  
git remote add mybak URL..; git remote set-url mybak URL..;  
git var -l; git config -l --local; git ls-files; git whatchanged  
git remote show; git remote -vv; git ls-remote  
git branch --unset-upstream  
git show-branch; lo = log -9 --oneline #--all --graph #--decorate; loag=lo --all --graph #--decorate;  ##log --left-right --boundary --reverse bra1...bra2  
git branch -vv  
git br ## -D -d -f -m -c  
git revert/ reset++push -f [Git恢复之前版本的两种方法reset、revert] https://blog.csdn.net/yxlshk/article/details/79944535  
git apply --check my.pat; git apply -3 my.pat;  git apply --reject my.pat  
开源-GIT常用命令 https://www.cnblogs.com/kex1n/p/6141166.html  
git config配置  https://www.cnblogs.com/fireporsche/p/9359130.html  
git-常用的搜索命令 https://www.cnblogs.com/daowangzhizhu-pt/p/12778478.html
==
Git Submodule //baidu
git submodule 完整用法整理 https://blog.csdn.net/wkyseo/article/details/81589477 ，https://www.cnblogs.com/zhoug2020/p/13544721.html
Git Submodule管理项目子模块# https://www.cnblogs.com/nicksheng/p/6201711.html
Git Submodule使用完整教程 https://www.cnblogs.com/lsgxeva/p/8540758.html , https://recomm.cnblogs.com/blogpost/8540758
1.先来个官方的API
git submodule [--quiet] add [<options>] [--] <repository> [<path>]       #add new (and in cached**)
git submodule [--quiet] status [--cached] [--recursive] [--] [<path>…​]
git submodule [--quiet] init [--] [<path>…​]                              #init exsting to be registered in .git/config
git submodule [--quiet] deinit [-f|--force] (--all|[--] <path>…​)         #.............to deregister
git submodule [--quiet] update [<options>] [--] [<path>…​]                #update exsting to clone(1st) or update
git submodule [--quiet] summary [<options>] [--] [<path>…​]
git submodule [--quiet] foreach [--recursive] <command>
git submodule [--quiet] sync [--recursive] [--] [<path>…​]
git submodule [--quiet] absorbgitdirs [--] [<path>…​]
//.gitmodules, .git/config[submodule]
2.解析git命令
常用命令如下
#cat .git/config;ll .git/modules/; ll moduleA -R
#//rm moduleA/* -fr              //ok,only del module/*
#//git submodule deinit moduleA  //ok,only del module/*,vs-init
#//git rm moduleA  -r            //del moduleA-dir and change .gitmodule to commit
git clone <repository> --recursive  //递归的方式克隆整个项目
git submodule add <repository> <path> //添加子模块
git submodule init //初始化子模块
git submodule update //更新子模块
git submodule foreach git pull  //拉取所有子模块
```

## //git remote ,pull/push/branch
```
baidu: git fetch push不同路径
==
git push 到不同的 地址库  https://www.cnblogs.com/woshixiaozhu/p/13439913.html
	git push 到不同的 url
	1、增加库地址
	git remote add origin(可以自己命名) URL
	2、修改
	git remote origin set-url URL
	3、先删后加
	git remote rm origin
	git remote add origin URL
	4、提交
	git push origin //提交默认分支
	git push myorigin dev //提交指定的地址，指定的分支
	5、git pull
	git pull  #拉取默认分支
	git push aliyun dev #拉取指定地址的指定分支
==
git fetch和push的区别  http://t.zoukankan.com/jeremylee-p-5564776.html
	git remote add origin git@github.com:schacon/simplegit-progit.git
	git fetch /home/bob/myrepo master:bobworks ：用于从bob的工作目录的master分支下载objects和refs到本地的bobworks分支中。
	git pull是git fetch和git merge命令的一个组合
	git push origin master 把本地仓库提交到远程仓库的master分支中
	$ git push origin test:master         // 提交本地test分支作为远程的master分支
	$ git push origin test:test              // 提交本地test分支作为远程的test分支
	git push origin :test              // 刚提交到远程的test将被删除，但是本地还会保存的，不用担心
==
Git 设置不同的 fetch 和 push 地址  https://www.awaimai.com/2971.html
	方法一：多个 origin
	第一种方法是，在原 origin 远程仓库地址的基础上，再加一个地址，也就是主仓库地址，例如加一个origin_mian，如下
	git remote add origin_main git@github.com:yeszao/dnmp.git
	git remote -vv
	origin git@github.com:MY_REPOSITY/dnmp.git (fetch)
	origin git@github.com:MY_REPOSITY/dnmp.git (push)
	origin_main git@github.com:yeszao/dnmp.git (fetch)
	origin_main git@github.com:yeszao/dnmp.git (push)
	git push origin master
	git pull origin_main master
	方法二：一个 origin（推荐）
	另外一种办法就是，我们只用一个 origin，设置主仓库为 fetch 地址，个人仓库为 push 地址：
	git remote set-url origin git@github.com:yeszao/dnmp.git                    #pull remote.url=
	git remote set-url --add --push origin git@github.com:MY_REPOSITY/dnmp.git  #push remote.pushurl=
	git remote -vv
	origin git@github.com:MY_REPOSITY/dnmp.git (push)
	origin git@github.com:yeszao/dnmp.git (fetch)
	git push origin master
	git pull origin master
==
git fetch, pull, push --prune --mirror --all --dry-run  --porcelain  --delete -f -u
/
>git pull -r
error: some local refs could not be updated: try running
 'git remote prune origin' to remove any old, conflicting branches
/
git remote prune -n origin  #--dry-run
git remote prune origin    #https://blog.csdn.net/BryantLmm/article/details/85130091
git remote show origin
/
git remote prune origin删除本地分支存但是远程分支已经不存在的分支（必须之前存在追踪关系）
https://mingyang.blog.csdn.net/article/details/80927979
git br -D br1; git push origin :br1; git remote prune origin
/
```


## //gitlab/github--2git-acc/gitee
https://blog.csdn.net/px_dn/article/details/89455457 
创建github repository(仓库) https://www.cnblogs.com/siestakc/p/6862446.html  
gitlab项目仓库自动同步到github或者码云gitee https://blog.csdn.net/zjcjava/article/details/90047837  
github博客自动同步到gitee（保姆级教程） https://www.icode9.com/content-4-916162.html , https://blog.csdn.net/outman_1921/article/details/115454572  
Gitlab代码库自动同步到Github https://blog.csdn.net/kelvin_yin/article/details/86661066  
gitlab Repository mirroring https://gitlab.com/help/workflow/repository_mirroring.html  https://gitlab.com/help/user/project/repository/repository_mirroring.md  
Repository mirroring        https://docs.gitlab.com/ee/user/project/repository/mirror/index.html  
-Bidirectional mirroring    https://docs.gitlab.com/ee/user/project/repository/mirror/bidirectional.html  
GitLab仓库重命名以及GitHub仓库的删除https://www.jianshu.com/p/d6f7da6bd275  (new-setting\project-name,Advanced\Change-path)  
```
baidu-github 'force push'
#git push origin features/my_branch -f //push -f --force  //master分支上github默认允许force, gitlab默认不允许, gitee收费设置?
github->Setting->Branches->...  //github git push -f 慎用 (请指定分支，默认对所有分支)  http://www.kuazhi.com/post/320409.html
gitlab->Setting->Repository->Protected branches->...(master..Unpretect)
---
remote: Support for password authentication was removed on August 13, 2021. Please use a personal access token instead.
remote: Please see https://github.blog/2020-12-15-token-authentication-requirements-for-git-operations/ for more information.
Push上传出错：Support for password authentication was removed on August 13, 2021.git did not exit cleanly
--https://blog.csdn.net/m0_46332820/article/details/119708248
--https://docs.github.com/en/github/authenticating-to-github/keeping-your-account-and-data-secure/creating-a-personal-access-token
--https://github.com/settings/tokens
--https://xiazemin.github.io/MyBlog/web/2021/08/14/github_token.html
--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21a
docker 查看镜像 https://blog.csdn.net/weixin_39892309/article/details/113067230
https://docs.gitlab.com/ee/user/profile/account/two_factor_authentication.html
```

## //gitlab.CI/CD
```
GitLab CI/CD 基础教程（一） https://blog.csdn.net/bingfeilongxin/article/details/88326984 , https://blog.stdioa.com/2018/06/gitlab-cicd-fundmental/
gitlab中CI/CD自动化部署使用 https://pibigstar.blog.csdn.net/article/details/82762413
GitLab CI/CD (cube6)  https://www.cnblogs.com/cjsblog/p/12256843.html
-gitlab image
GitLab-CI 来自动创建 Docker 镜像  https://www.cnblogs.com/jingtyu/p/6993763.html
-ci.yaml
https://gitlabe2.ext.net.nokia.com/help/ci/yaml/README.md#needs
https://docs.gitlab.com/ee/ci/yaml/index.html
https://docs.gitlab.com/ee/ci/docker/using_docker_build.html
gitlab>prj>CI/CD configuration>Browse templates
-https://gitlab.com/gitlab-org/gitlab-foss/tree/master/lib/gitlab/ci/templates
-ci.gitlab.image
#
# see https://hub.docker.com/_/gcc/ , hub.docker.com/_/busybox/?tab=tags , hub.docker.com/_/hello-world/
# AlpineLinux hub.docker.com/_/alpine
# docker search busybox  ===https://index.docker.io/v1/search?q=busybox&n=25
https://www.runoob.com/docker/windows-docker-install.html
docker 查看镜像_Docker容器部署及使用 https://blog.csdn.net/weixin_39892309/article/details/113067230
-(可选加速image镜像库 /etc/docker/daemon.json)  https://hub.docker.com/explore
# docker  // LXC(Linux Container, namespace,cgroups), AUFS
Docker安装和常用命令 https://www.cnblogs.com/milton/p/9866963.html  
https://www.runoob.com/docker/docker-tutorial.html
https://www.runoob.com/docker/docker-dockerfile.html
https://docs.docker.com/get-started/ , https://docs.docker.com/reference/ , forums.docker.com
https://docs.docker.com/engine/reference/builder/
https://docs.docker.com/compose/gettingstarted/
https://docs.docker.com/compose/wordpress/ ,=https://docs.docker.com/samples/wordpress/
https://docs.docker.com/compose/compose-file/compose-file-v3/#compose-file-structure-and-examples
https://docs.docker.com/get-started/swarm-deploy/
https://docs.docker.com/engine/swarm/how-swarm-mode-works/nodes/
https://docs.docker.com/config/containers/logging/
docker image存储路径_Docker架构与基本操作  https://blog.csdn.net/weixin_39548606/article/details/111214747
baidu:docker image存储路径(/var/lib/docker/)
深刻理解Docker镜像大小  https://blog.csdn.net/shlazww/article/details/47375009
Dockerfile文件详解  https://www.cnblogs.com/panwenbin-logs/p/8007348.html
dumb-init：一个Docker容器初始化系统  https://www.zybuluo.com/babydragon/note/262116
(docker网络互通) Docker之四种网络模式 、容器的互通与隔离  https://blog.csdn.net/lilygg/article/details/88616218
                Docker网络详解——原理篇  https://blog.csdn.net/meltsnow/article/details/94490994
veth-pair, opnenstack,ovs(Open VSwitch)
#baidu: docker架构图
https://gitee.com/kuangstudy/kuang_livenote
[狂神说Java]Docker最新超详细版教程通俗易懂  https://www.bilibili.com/video/BV1og4y1q7M4?p=2
[狂神说Java]Docker进阶篇超详细版教程通俗易懂  https://www.bilibili.com/video/BV1kv411q7Qc
Docker 10分钟快速入门 https://www.bilibili.com/video/BV1s54y1n7Ev , yeasy.gitbook.io/docker_practice
[编程不良人]2021年最新Docker容器技术&Docker-Compose实战教程  https://www.bilibili.com/video/BV1ZT4y1K75K
2020年最新 docker+k8s技术全解 #老男孩教育  https://www.bilibili.com/video/BV1PJ411h7Sw
Docker Compose(yaml), Docker Swarm, CI/CD Jenkins
k8s Kubernetes(assemble编排), openstack/vm
LXC的介绍(LXC与KVM技术的比较)  https://www.cnblogs.com/xidongyu/p/5767020.html
Docker学习（一）：如何Docker化任意一个应用 https://blog.csdn.net/liao392781/article/details/85992207
                                        https://blog.csdn.net/liao392781/category_8591111.html
golang
从0开始学习微服务框架(go)  https://www.bilibili.com/video/BV137411H7t9
##
GitHub Actions 入门教程  http://www.ruanyifeng.com/blog/2019/09/getting-started-with-github-actions.html
YAML 语言教程            https://www.ruanyifeng.com/blog/2016/07/yaml.html
```

## git17-hi-memo1
https://github.com/asbcd17z/hi1/blob/master/memo1.txt  
###Google Chrome版本 72.0.3626.119（正式版本）（64 位）, firefox 65.0.1 (64 位)  
https://github.com/TheAlgorithms/Python  
https://github.com/libfuse/  
用Python写一个FUSE（用户态文件系统）文件系统 http://blog.jobbole.com/51268/  
https://github.com/qianyubl/WATCH_dojo  
https://github.com/search?l=C&p=5&q=timer+c&type=Repositories  


## tools/coding/online
```
https://en.cppreference.com/w/
http://coliru.stacked-crooked.com/
https://cppinsights.io/ , https://godbolt.org/
推荐几款实用的C++ 在线工具 https://www.jb51.net/article/197290.htm
https://wandbox.org/
https://quick-bench.com/q/eP40RY6zDK-eJFdSSPBINa0apTM
https://gcc.godbolt.org/ -https://github.com/compiler-explorer/compiler-explorer
https://cppinsights.io/  -https://github.com/andreasfertig/cppinsights
https://build-bench.com/b/47ciR2_jQ0RuAt2fy1Pnk66b3yM
推荐几个好用的在线编译器  https://zhuanlan.zhihu.com/p/58294969
C++在线编译器 http://t.zoukankan.com/abc-begin-p-7765532.html
https://www.onlinegdb.com/
https://wandbox.org/
https://godbolt.org/
geeksforgeeks https://ide.geeksforgeeks.org/index.php
codechef https://www.codechef.com/ide
菜鸟工具　https://c.runoob.com/compile/12
ideone https://www.ideone.com/
https://www.tutorialspoint.com/compile_cpp_online.php
Code::Blocks https://www.codeblocks.org/
https://www.cplusplus.com/reference/type_traits/decay/
http://cpp.sh/
=
https://wandbox.org/
// GCC reference:
//   https://gcc.gnu.org/

// C++ language references:
//   https://cppreference.com/
//   https://isocpp.org/
//   http://www.open-std.org/jtc1/sc22/wg21/

// Boost libraries references:
//   https://www.boost.org/doc/
=
C++ Online Compilers  https://arne-mertz.de/2017/05/online-compilers/
-http://melpon.org/wandbox , http://godbolt.org/ , https://ideone.com/ 
-http://coliru.stacked-crooked.com/ , http://rextester.com/ , http://cpp.sh/ 
-https://www.tutorialspoint.com/compile_cpp11_online.php , http://codepad.org/
-http://fiddle.jyt.io/
推荐几个好用的在线编译器  https://zhuanlan.zhihu.com/p/58294969
-https://www.onlinegdb.com/ , https://wandbox.org/ , https://godbolt.org/ ,...
最全盘点：18款在线C/C++/Py/Java编译器  https://www.eet-china.com/mp/a7826.html
=
=online-code-review (linux)
https://code.woboq.org/
https://code.woboq.org/linux/linux/init/main.c.html#start_kernel
https://code.woboq.org/linux/linux/include/linux/compiler_attributes.h.html#194
http://lxr.free-electrons.com/ , https://elixir.bootlin.com/linux/latest/source
https://elixir.bootlin.com/busybox/1.34.0/source
https://elixir.bootlin.com/barebox/latest/source
https://elixir.bootlin.com/linux/v2.6.39.4/source/init/main.c#L456 //init_post
https://elixir.bootlin.com/linux/v3.19.8/source/Documentation/initrd.txt
https://elixir.bootlin.com/linux/2.0.40/source/Documentation/initrd.txt
https://elixir.bootlin.com/linux/2.0.40/source/Documentation/nfsroot.txt
https://elixir.bootlin.com/linux/v3.19.8/source/Documentation/early-userspace
https://elixir.bootlin.com/linux/v5.6.19/source/Documentation/filesystems/ramfs-rootfs-initramfs.txt
https://github.com/torvalds/linux/blob/master/Documentation/filesystems/ramfs-rootfs-initramfs.rst
Initramfs 原理和实践 https://www.cnblogs.com/wipan/p/9269505.html
关于initramfs https://blog.csdn.net/laohuang1122/article/details/8243271
```


## tools/markdown/asciidoc/graphviz/plantuml/planttext.com/svg
方便好用的在线UML制作工具：PlantUML https://www.jianshu.com/p/c006dcb1493b  
如何在线编辑显示markdown/plantuml/graphiz? https://segmentfault.com/q/1010000002802979  
http://www.plantuml.com/plantuml/ , https://stackedit.io/ , https://github.com/mikitex70/plantuml-markdown  
https://www.planttext.com/  
https://plantuml.com/zh/  
https://www.w3cschool.cn/ , https://www.w3school.com.cn/?  
菜鸟 https://www.runoob.com/svg/svg-tutorial.html  
uml par/UML序列图总结(Loop,Opt,Par和Alt) https://www.cnblogs.com/cy568searchx/p/6227238.html  
eg:程序员绘图工具-Plantuml https://www.jianshu.com/p/30f6a9c06083  https://zhuanlan.zhihu.com/p/76948461  
eg:plantuml使用教程 https://www.cnblogs.com/ningskyer/articles/5397750.html  http://archive.3zso.com/archives/plantuml-quickstart.html  
markdown-stackedit使用 https://www.cnblogs.com/mfmdaoyou/p/6709491.html  
https://www.w3cschool.cn/asciidoc_guide/  
markdown,typora,http://www.gtalkabout.cn/tools/minidown.html  
typora + q七牛(qq截图),Snipaste + PicGo  
文章编写实用工具——Typora+PicGo+Gitee  https://www.jianshu.com/p/1152941beaa7  
Markdown基本语法 https://www.jianshu.com/p/191d1e21f7ed/  
印象笔记Markdown入门指南 https://yinxiang.com/new/hc/articles/%E5%8D%B0%E8%B1%A1%E7%AC%94%E8%AE%B0-markdown-%E5%85%A5%E9%97%A8%E6%8C%87%E5%8D%97/  
https://github.com/stanzgy/wiki/blob/master/markup/markdown-guide.md  
https://github.com/stanzgy/wiki/blob/master/markup/asciidoc-guide.asciidoc  
baidu-asciidoc https://asciidoctor.cn/docs/asciidoc-syntax-quick-reference/  
在线工具 https://tool.lu/asciidoc/  https://tool.lu/markdown/  
chrome装Asciidoctor.js Live Preview插件，ADOC直接拖入  
AsciidocFX_Windows1.6.6.exe(maybe+Graphviz2.44-2019) https://github.com/asciidocfx/AsciidocFX  
asciidoctor  AsciidocFX支持的元数据 https://blog.csdn.net/wiborgite/article/details/88648802  
Asciidoc简介#  http://asciidoctor.org/docs/asciidoc-syntax-quick-reference/  

### tools/more1a
```
在线工具 https://c.runoob.com/  http://tools.jb51.net/  www.iloveimg.com/zh-cn  
在线工具 https://tool.lu/asciidoc/  https://tool.lu/markdown/  
json在线 https://www.sojson.com/runjs.html  
ietf-json https://tools.ietf.org/html/rfc7159.html  https://www.ietf.org/rfc/  
https://www.ietf.org/rfc/ , https://www.rfc-editor.org/  , (socks5)https://www.rfc-editor.org/rfc/rfc1928.txt  
TIPC  https://blog.csdn.net/yunlong34574/article/details/42460803  http://blog.chinaunix.net/uid-8048969-id-4107394.html  https://www.jianshu.com/p/7fb89e3d19af  
http://tipc.sourceforge.net/protocol.html (tipc can over some media for transport,such as:ethernet,tcp,udp,...  eg:torvalds/linux/net/tipc/udp_media.c)
bash-prompt-Linux命令行提示符修改【全攻略】 https://vimsky.com/article/4284.html  
测速网 https://www.speedtest.cn/ , http://www.dglxx.com/ , https://ping.chinaz.com/
==
intelliJ IDEA , vscode+ssh-remote, sublime
notepad++v7.7.1, UltraEdit17.10.0.1015, beyondcompare, MobaXterm_Personal_9.0, AsciidocFX_Windows1.6.6
```


### more1
```
https://asn1.io/asn1playground/  
baidu:asn.1编码规则  ASN.1编码方式详解 https://www.cnblogs.com/NathanYang/p/9951282.html  
ASN.1笔记——标准编码规则BER https://blog.csdn.net/sever2012/article/details/7698297/  
ASN1编码规则详解.doc https://max.book118.com/html/2018/1030/6031242001001225.shtm  
python第三方库asn1tools  https://github.com/eerimoq/asn1tools  
CI/CD devops  git/gerrit/zuul/jenkins/  
Gerrit 笔记 https://www.cnblogs.com/milton/p/12576792.html  
proxy.pac https://wenku.baidu.com/view/1d29739ea2161479171128a6.html  
通过socks tunnel设置http代理 (ssh tunnel, 或putty-socks5代理Connection -> SSH -> Tunnels) https://www.cnblogs.com/milton/p/7777590.html  
用Python写socks5服务器端             https://www.cnblogs.com/lexus/archive/2012/03/04/2379103.html  
python怎么走socks5代理？    (PySocks) https://blog.csdn.net/qiya2007/article/details/107291233  https://github.com/Anorov/PySocks  
python3给socket模块设置代理 (PySocks-socks.set_default_proxy) https://www.cnblogs.com/woaixuexi9999/p/9360581.html  
使用frp进行内网穿透(frp V0.35.1)  http://www.awccc.com/3107
-FrpProxy。frp是什么，简单地说，frp就是一个反向代理软件，它体积轻量但功能很强大，可以使处于内网或防火墙后的设备对外界提供服务，它支持HTTP、TCP、UDP等众多协议。
十分钟教你配置frp实现内网穿透  https://blog.csdn.net/u013144287/article/details/78589643
https://www.cnblogs.com/lsgxeva/p/8540758.html
FrpProxy - tcp://frpgz1.idcfengye.com:10000
ChromeURLs - chrome://chrome-urls/
ProxyDownload - https://d.serctl.com/
nand2tetris - https://www.nand2tetris.org/
fuchsia - https://cs.opensource.google/fuchsia/fuchsia
firefox - https://www.mozilla.org/zh-CN/firefox
--
Docker安装和常用命令 https://www.cnblogs.com/milton/p/9866963.html  
迁移Git项目到Gitlab https://www.cnblogs.com/milton/p/11053007.html  OpenSSL的证书, 私钥和签名请求(CSRs)www.cnblogs.com/milton/p/11076925.html  
github仓库迁移到gitlab以及gitlab仓库迁移到另一个gitlab服务器# https://www.cnblogs.com/saysmy/p/10942814.html  
typeset; man bash |grep PROMPT_DIRTRIM=3  PS1==https://www.cnblogs.com/wi100sh/p/4814745.html  
export PS1='\[\e[1m\]\w\[\e[0m\] [\u@\h \W]\$ '  
PROMPT_COMMAND=/etc/sysconfig/bash-prompt-screen
PROMPT_COMMAND='printf "\033k%s@%s:%s\033\\" "${USER}" "${HOSTNAME%%.*}" "${PWD/#$HOME/~}"'
/etc/profile.d/bash_completion.sh
linux系统用户登陆时脚本执行顺序, https://www.cnblogs.com/yzwone/p/12527603.html
linux切换用户后执行脚本,Linux 用户登录后执行的脚本, https://blog.csdn.net/weixin_34163588/article/details/116772209
--/etc/profile(/etc/profile.d)->.bash_profile->.bashrc(/etc/bashrc)-->.bash_logout
Bootloader之uBoot简介##https://www.cnblogs.com/wi100sh/p/4255081.html  
endian如何判断CPU是大端还是小端模式 https://www.cnblogs.com/wi100sh/p/4899466.html  
重载(overload)，覆盖(override),隐藏(hide)的区别 https://www.cnblogs.com/wi100sh/p/4325397.html https://www.cnblogs.com/wi100sh/p/4325336.html  
gof设计模式简介#https://www.yuque.com/happyhusky/wdbj/uwupyw  plantuml#https://www.yuque.com/happyhusky/wdbj/ogdbl4  
高质量C++/C编程指南 https://www.jianshu.com/p/654fea4bfd4f  
https://docs.gitlab.com/ee/api/markdown.html  
关于第三方登录,你应该知道的 https://blog.csdn.net/baidu_37464759/article/details/54906622  
第三方登录原理及实现       https://blog.csdn.net/xihua1244914259/article/details/79000813  
了解一下第三方登录         https://blog.csdn.net/y4x5m0nivsrjay3x92c/article/details/89369466  
第三方账号登录功能接入全流程浅析  http://www.woshipm.com/pd/727011.html  
```

### more2
```
在语雀绘制PlantUML图 https://www.yuque.com/barretlee/yuque/aabh67  
糙读《如何高效记忆》后的读后感 https://www.yuque.com/sulirc/virtue/wrbp4i  
gitbook https://www.jianshu.com/p/421cc442f06c  
sudo, chroot, fakeroot
Linux常用操作# https://blankj.com/gitbook/linux/ https://github.com/Blankj/AndroidOfferKiller  
//curl 的用法指南 http://www.ruanyifeng.com/blog/2019/09/curl-reference.html  
//JavaScript 有多灵活？ http://www.ruanyifeng.com/blog/2015/02/flexible-javascript.html  
//《SSH 入门教程》发布了   http://www.ruanyifeng.com/blog/2020/12/ssh-tutorial.html  https://wangdoc.com/ssh/  
//man screen (-dr) (DEFAULT KEY BINDINGS): C-a C-a, C-a C-c,  C-a ", C-a C-d,  C-a a, //-dr -ls -wipe //$DISPLAY无法继承
//nohup screen tmux  byobu         http://www.ruanyifeng.com/blog/2019/10/tmux.html  
https://stackoverflow.com/questions/41830936/mobaxterm-follow-terminal-folder-stfp-and-byobu  
深入ProtoBuf-简介 https://www.jianshu.com/p/a24c88c0526a  
google ProtoBuf开发者指南 https://linuxstyle.blog.csdn.net/article/details/6594036  
深入理解 ProtoBuf 原理与工程实践（概述） https://mp.weixin.qq.com/s/fKzZ49YmKawsudGUlbOL3g  
Protobuf3语法详解 https://www.cnblogs.com/tohxyblog/p/8974763.html  
python c struct/python之struct详解  https://blog.csdn.net/qq_30638831/article/details/80421019  
PYTHON C/C++结构体 ctypes.Structure https://www.cnblogs.com/yang220/p/12091863.html   https://www.programcreek.com/python/example/1122/ctypes.Structure  
```

### more3a.sublime-text
```
sublime3-text:
#strings sublime_text.exe| grep www.sublimetext.co|grep https://www.sublimetext.coo/upgrade
#grep www.sublimetext.com sublime_text.exe -a;  sed -bi 's/www.sublimetext.com/www.sublimetext.coo/g' sublime_text.exe
//Disable “A new version of Sublime Text is available, download now?” in Sublime 3 (stable channel)
https://forum.sublimetext.com/t/disable-a-new-version-of-sublime-text-is-available-download-now-in-sublime-3-stable-channel/19961
https://github.com/sublimehq/sublime_text/issues/1206  (merge 127.0.0.1/0.0.0.0 www.sublimetext.com into /etc/hosts)
{//sublime3 settings
	"font_size": 9,
	"highlight_line": true,
	//"trim_trailing_white_space_on_save": false, //Sublime自动去除代码行尾多余的空格-否
	"ignored_packages": ["Sublimerge Pro","Vintage"]
	///"highlight_line": true,
	"word_wrap": false,
	"update_check": false
}
sublime - sublimerge 文本比较插件  https://blog.csdn.net/qq250782929/article/details/78983119
sublime--[ctrl]+[alt]+[d]                      - display Quick Panel with commands available for current view //or文件标签上右点击
设置sublime自动换行的两种方法:
1.   方法一，通过菜单栏的View----> Word Wrap进行勾选设置
2.   方法二， Preferences--->Settings--->Preferences.sublime-settings-User，添加 "word_wrap":true
Sublime Text 2 设置文件详解  https://blog.csdn.net/xlh1991/article/details/39099833
//view->word_wrap
sublime 快捷键设置 (word_wrap) https://www.jianshu.com/p/04ef6fe437b7
https://sublime-text-unofficial-documentation.readthedocs.io/en/latest/reference/commands.html#cmd-list
Sublime Text3—自带快捷键介绍  https://www.cnblogs.com/easy-blue/p/5809760.html
Sublime 注册, https://www.cnblogs.com/lingzhii/p/10543437.html, https://www.jianshu.com/p/1dc6ca5b9175
sublime text--你所不知道的12个秘密  https://blog.csdn.net/weixin_42108494/article/details/80312343
/
sublime-shortcut-key:
goto>Jump-Back(alt+-)
goto>Switch-File>Next-File-in-Stack(ctr+tab)
/
```

### more3b.sublime-text/vscode
```
//http://www.sublimetext.com/docs/ , http://www.sublimetext.com/docs/3/projects.html, https://packagecontrol.io/
//
vscode-workspace: xx/.vscode/launch.json, or ~/workspace/myxxDirs.code-workspace //delete:file>new-Window>Recent>More>x
sublimetext: xx.sublime-project(++xx.sublime-workspace), app\\Data\Local\Session.sublime_session??--"recent_workspaces"
/in ggg.sublime-workspace{"project": "ggg.sublime-project","folders":} / ggg.sublime-project{"folders":[...]}
/in ggg3.sublime-workspace{"project": "","folders":[...]}
/
sublime Text中的workspace和project什么关系?  https://www.zhihu.com/question/22681628  //Ctrl+Shift+N
Sublime text开发工具快捷键整理？##  https://www.zhihu.com/question/37342465
/
//sublime, python-cmd
dir();dir(window); dir(); window.is_minimap_visible();window.set_minimap_visible(True); window.folders()
import os; os.system("/ephereral/workplace/lzhao019/nr8")
/
#sublimetext #plugin: https://packagecontrol.io/
#plugin: recent, File History, Blame Explorer, Git blame, Diffy,Modific(change-line),FileDiffsgoto, View-Bookmarks
#plugin: FoldFunctions, HyperClick, Class-Navigator, 
#plugin: MarkdownPreview,sublimerge,CompareSbS,BracketHighlighter,TrailingSpacer,SideBarEnhancements,SyncedSideBar
#Sublime 快速插入当前日期时间plugin/  https://www.jianshu.com/p/b592853177b1
#grep www.sublimetext.com sublime_text.exe -a;  sed -bi 's/www.sublimetext.com/www.sublimetext.coo/g' sublime_text.exe
#/c/Windows/System32/drivers/etc/hosts  #45.55.41.223 www.sublimetext.com
Sublime Text 摘要  https://www.w3cschool.cn/sublimetext/vgj4cozt.html
sublimetext register issue, to modify dns ip for hostname in local 'hosts' file
MINGW64 /c/xd/ (master)$ cat /c/Windows/System32/drivers/etc/hosts
# Copyright (c) 1993-2009 Microsoft Corp.
#
# This is a sample HOSTS file used by Microsoft TCP/IP for Windows.
#
# This file contains the mappings of IP addresses to host names. Each
# entry should be kept on an individual line. The IP address should
# be placed in the first column followed by the corresponding host name.
# The IP address and the host name should be separated by at least one
# space.
#
# Additionally, comments (such as these) may be inserted on individual
# lines or following the machine name denoted by a '#' symbol.
#
# For example:
#
#      102.54.94.97     rhino.acme.com          # source server
#       38.25.63.10     x.acme.com              # x client host

# localhost name resolution is handled within DNS itself.
#       127.0.0.1       localhost
#       ::1             localhost
#
#sublimetext
#/c/Windows/System32/drivers/etc/hosts  #45.55.41.223 www.sublimetext.com
#45.55.41.223 forum.sublimetext.com
#45.55.41.223 www.sublimetext.com
127.0.0.1 www.sublimetext.com
127.0.0.1 sublimetext.com
127.0.0.1 sublimehq.com
127.0.0.1 telemetry.sublimehq.com
127.0.0.1 license.sublimehq.com
127.0.0.1 45.55.255.55
127.0.0.1 45.55.41.223
#
```


### python
```
help(),x.__class__==type,id,dir/locals/vars,super(),getattr(),Xattr(..)  //py核心编程v2-13.11  
python collections.namedtuple dataclasses.@dataclass __slots__  
x=eval('1+2'); exec('y=1+2')  # eval('expression'); exec('statement')  
python c struct/python之struct详解https://blog.csdn.net/qq_30638831/article/details/80421019  
PYTHON C/C++结构体 ctypes.Structure https://www.cnblogs.com/yang220/p/12091863.html  
Python ctypes.Structure() Examples  https://www.programcreek.com/python/example/1122/ctypes.Structure  
最全ctypes用法总结 https://blog.csdn.net/mfq1219/article/details/81945448  
Python ctypes.Structure() Examples https://www.programcreek.com/python/example/1122/ctypes.Structure  
Python struct 模块 https://www.jianshu.com/p/7d2576efdac2  
_ctypes.CField ctypes中的bitfield怎么老不对啊 https://exp.newsmth.net/topic/article/df4e21662be7baaa1307eea24a237047  
Python ctypes bitfields https://stackoverflow.com/questions/20380451/python-ctypes-bitfields  
python中运用ctypes库实现c风格变量的定义和调用 https://blog.csdn.net/runner668/article/details/80340683  
Python 在 ctypes 中为我们提供了类似C语言的数据类型# https://www.cnblogs.com/adylee/p/10299157.html  https://www.cnblogs.com/rainduck/archive/2011/09/02/2163230.html  
https://www.cnblogs.com/gaowengang/p/7919219.html   (linux+windows)使用ctypes进行Python和C的混合编程#https://blog.csdn.net/weixin_30614109/article/details/98999904  
Python的学习（三十二）---- ctypes库的使用整理 https://blog.csdn.net/linda1000/article/details/12623527  
调用c的so库https://blog.csdn.net/claroja/article/details/79237887  使用ctypes进行Python和C的混合编程#https://blog.csdn.net/weixin_30614109/article/details/98999904  
Python ctypes介绍——非常详尽https://blog.csdn.net/Brouce__Lee/article/details/88869234  ctypes##http://blog.timd.cn/python-ctypes/  
 python和C语言互相调用的几种方式https://www.cnblogs.com/mq0036/p/8492621.html  
 python与C互相调用的方法详解http://www.cppcns.com/jiaoben/python/196662.html  
Python调用windows下DLL详解 - ctypes库的使用##### https://www.cnblogs.com/timssd/p/9732380.html  
python中hasattr()、getattr()、setattr()函数的使用 https://www.cnblogs.com/timssd/p/11168127.html  
cpu个数、核数、线程数、Java多线程关系的理解 https://www.cnblogs.com/timssd/p/9507316.html  
ctypes##http://blog.timd.cn/python-ctypes/  
 -python ctypes库中动态链接库加载方式https://www.cnblogs.com/bigship/archive/2011/11/24/2262348.html  
 -python ctypes探究----python与c的交互https://www.cnblogs.com/night-ride-depart/p/4907613.html  
python352.chm/Python » 3.5.2 Documentation » Extending and Embedding the Python Interpreter »  
python352.chm/Python » 3.5.2 Documentation » The Python Standard Library » 16. Generic Operating System Services »  
 -ctypes/16.16.1.6. Calling functions with your own custom data types /16.16.1.10. Structures and unions /16.16.1.13. Arrays  
 -ctypes.Structure(*args, **kw) ctypes.BigEndianStructure(*args, **kw) class ctypes.LittleEndianStructure(*args, **kw)  
python352.chm/Python » 3.5.2 Documentation » Python/C API Reference Manual  Utilities/Data marshalling support  
python-document文档###https://docs.python.org/zh-cn/3/library/ctypes.html  
bitfield in ctypes @Python-cytes-str-#getattr#### https://zhuanlan.zhihu.com/p/20182674  
type(int().__str__),<type 'method-wrapper'>, help(int().__str__),  https://www.cnblogs.com/wancy86/p/descriptor.html  
装饰器的完整实现及原理https://www.cnblogs.com/reklen/p/9534941.html  
用C语言扩展Python的功能https://www.cnblogs.com/zengkefu/p/5562946.html  https://www.ibm.com/developerworks/cn/linux/l-pythc/  
python – 如何正确实现__str__和__repr__ #### https://www.icode9.com/content-1-359907.html  
baidu:str repr 区别.  pyton中repr函数将一个对象转成类似源代码的字符串，只用于显示。repr的输出对python友好，适合eval函数得到原来的对象。  
sys._current_frames(), sys._getframe(), traceback.print_stack(), inspect.currentframe(),inspect.isbuiltin(),  logging, str(datetime.datetime.now())  
collections.OrderedDict/namedtuple(), Callable, callable()  
method-wrapper  https://stackoverflow.com/questions/53130485/how-to-import-method-wrapper-type  
Python 调试器之pdb https://www.cnblogs.com/xiaohai2003ly/p/8529472.html  
//  
3.5.2chm-Python » 3.5.2 Documentation » Python HOWTOs » Descriptor HowTo Guide // https://docs.python.org/2/howto/descriptor.html#descriptor-protocol  
3.5.2chm-Python Language Reference/3. Data model/3.3. Special method names(__new__)/3.3.3. Customizing class creation(metaclass)/3.3.2. Customizing attribute access(__getattr__)  
data descriptor, property  
Python Hacking: “高级”偏函数 https://blog.stdioa.com/2018/12/python-hacking-advanced-partial/  
Python学习之logging https://blog.stdioa.com/2015/10/learning-python-logging/  
python logging详解及自动添加上下文信息 https://www.cnblogs.com/xybaby/p/9197032.html  
关于metaclass，我原以为我是懂的# https://www.cnblogs.com/xybaby/p/7927407.html  //mixin  
https://stackoverflow.com/questions/100003/what-are-metaclasses-in-python  深刻理解Python中的元类(metaclass) https://www.jianshu.com/p/e017bc810702  
python属性查找 深入理解（attribute lookup）https://www.cnblogs.com/xybaby/p/6270551.html  python descriptor详解 https://www.cnblogs.com/xybaby/p/6266686.html  
python __getattr__ 巧妙应用 https://www.cnblogs.com/xybaby/p/6280313.html  
python decorator 基础 https://www.cnblogs.com/xybaby/p/6274187.html  https://www.cnblogs.com/xybaby/p/6274283.html  
由一个简单需求到Linux环境下的syslog、unix domain socket https://www.cnblogs.com/xybaby/p/6596431.html  
Python Syslog Server 开发实例 (syslogd, socketserver.UDPServer) https://cloud.tencent.com/developer/article/1050984  
python装饰器的诞生过程 https://blog.csdn.net/a315612852/article/details/102040124  
Python thread local https://www.cnblogs.com/xybaby/p/6420873.html  
python 编程风格术语说明 EAFP: Easier to ask for forgiveness than permission. / LBYL: Look before you leap.  https://blog.csdn.net/zhouguoqionghai/article/details/57089859  
猴子补丁(monkey patch) JSONEncoder https://www.jianshu.com/p/f1060b22aab8  
Python MRO方法解析顺序详解 (c3算法) http://c.biancheng.net/view/5450.html  
Python拼接字符串的7种方法总结 https://www.jb51.net/article/149991.htm  
//python3 -m json.tool  
bytes.hex(), bytearray.hex(), binascii.hexlify(data) 
```


### python-https
Python3+ssl实现加密通信 https://www.cnblogs.com/lsdb/p/9397530.html  
在python使用SSL(HTTPS) http://blog.sina.com.cn/s/blog_5d18f85f0102xg3e.html  
Python抓需要输入用户名密码的https网页 https://blog.csdn.net/liumengcheng/article/details/9627437  
Python实现网站自动登录---傻瓜教程chromedriver https://blog.csdn.net/qiudechao1/article/details/89234582  
Python 爬虫的工具列表 附Github代码下载链接 https://www.cnblogs.com/arxive/p/6291709.html  
python模拟自动登录网站（urllib2）https://blog.csdn.net/xgocn/article/details/85130734  https://www.cnblogs.com/dreamer-fish/p/5484767.html  
pytest 
python behave --BDD(Behavior Driven Development)[BDD in Python]使用behave框架在Python中实践行为驱动开发 https://cloud.tencent.com/developer/article/1157391 
python behave学习笔记 https://danteyu.github.io/2016/10/13/behave-tutorial/ 


### gdb/gdb python脚本
```
用 Python 拓展 GDB（一） https://blog.csdn.net/weixin_33947521/article/details/89377701  
用 Python 拓展 GDB（一） https://segmentfault.com/a/1190000005718889  GDB 自动化操作的技术 https://segmentfault.com/a/1190000005367875  
用 Python 拓展 GDB（二） https://blog.csdn.net/weixin_33819479/article/details/89369809  
https://blog.csdn.net/weixin_34405557/article/details/89370109  
用 Python 拓展 GDB（三） gdb调试脚本 https://blog.csdn.net/cnsword/article/details/16337031  
用户自定义gdb命令的Python实现 https://blog.csdn.net/nirendao/article/details/105942335  
GDB 自动化操作的技术  https://blog.csdn.net/weixin_34075551/article/details/89408018  
gdb firewall-tunnel-proxy: iptables, tcp-socket-forward(app,ssh-tunnel,socks5,extend-gdb-target-remote(httpCONNECT-alike)?)  
gdb+gdbserver远程调试技术（一）——调试环境搭建  https://blog.csdn.net/zhaoxd200808501/article/details/77838933  
GDBserver远程调试(汇总)                       https://blog.csdn.net/water_cow/article/details/7393125  
  //gdb: target remote 192.168.x.x:9000; symbol-file xxelf; set solib-absolute-prefix xxsysso; set solib-search-path xxso  
GDB基本命令(整合) https://blog.csdn.net/wangwenwen/article/details/9259687  
//100个gdb小技巧（v1.0）.pdf  https://www.cnblogs.com/LiuYanYGZ/p/14247052.html  摘自https://github.com/hellogcc/100-gdb-tips  
gdb: https://sourceware.org/bugzilla/  
gdb> apropos tbreak
```


## makefile/cmake
```
Makefile常用模板  https://blog.csdn.net/barry1020441722/article/details/107642024
-Makefile常用模板  https://blog.csdn.net/shaosunrise/article/details/79968921
//
cmakefile target_link_libraries   add_library add_subdirectory
#Cmake#__target_link_libraries函数的使用说明 https://blog.csdn.net/sinat_37231928/article/details/121684722
target_link_libraries 和link_libraries区别  https://blog.csdn.net/u012483097/article/details/109066405

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
```

### linux/c
```
Linux、Windows、Mac换行符相互转换方法  https://blog.csdn.net/Hehuyi_In/article/details/89735510  
批量换行符mac转unix  sed -bi 's:\r:\n:g' files*   ///sed 's,a/b/i'  ///tr "\r" "\n" <macfile >unixfile
-echo -e 'ab\rc\n' |hexdump -C
VI模式中上下左右键和回退键出现字母 set nocompatible backspace=2 hlsearch https://www.cnblogs.com/wangshuyi/p/6078678.html  
vim set nu=number hl=hlsearch ic=ignorecase ai=autoindex ruler showmode  :q noxx  #export EXINIT='set nu' 
date +%FT%T.%Nz -u
/
__PRETTY_FUNCTION__，__FUNCTION__，__func__之间有什么区别？  https://m.656463.com/wenda/__PRETTY_FUNCTION____FUNCTION____173
常见 core dump 原因分析signal 11 - SIGSEGV (signal 6-SIGABRT释放多次/11-SIGSEGV空指针) https://www.cnblogs.com/kex1n/p/6972046.html  
Linux信号列表详解 (kill -l, gdb/i signal,i handle) https://blog.csdn.net/liushuimpc/article/details/51611354  
应用 Valgrind 发现 Linux 程序的内存问题 https://www.cnblogs.com/kex1n/p/11573606.html  https://www.cnblogs.com/kex1n/p/11573526.html  
gcc g++支持C++11 标准编译及其区别 https://www.cnblogs.com/kex1n/p/7072092.html  
Google开源C++单元测试框架Google Test-gtest https://www.cnblogs.com/kex1n/p/5524653.html  
Google C++单元测试 GTest https://www.cnblogs.com/kex1n/p/8981552.html  http://www.cnblogs.com/jycboy/p/6057677.html  
开源-GIT常用命令 https://www.cnblogs.com/kex1n/p/6141166.html  
Linux命令中：rsync和cp之间的区别 https://www.cnblogs.com/kex1n/p/7008178.html  
python 有 rsync 库吗？ https://pypi.python.org/pypi/rsync.py  
pyrsync https://pypi.org/project/pyrsync/0.1.0/  
在python中寻找类似rsync的跨平台功能，例如rsync.py https://www.orcode.com/question/1048465_k67553.html  
https://www.cnpython.com/pypi/rsync4python  
在Windows中配置Rsync同步 https://www.cnblogs.com/janas/p/3321087.html  
rsync windows/https://www.itefix.net/cwrsync  
rsync putty/https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html  
如何在socket编程的Tcp连接中实现心跳协议 https://www.cnblogs.com/kex1n/p/7448552.html  http://blog.csdn.net/nyist327/article/details/39586203  
Python学习之Socket通信的实现  https://blog.csdn.net/m0_37717595/article/details/81101895  
thread_name-pthread--linux编程 - 给线程起名字_落尘纷扰的专栏-CSDN博客(prctl()/pthread_setname_np()) https://blog.csdn.net/jasonchen_gbd/article/details/51308638  
```

### linux/c/lib.so ,//gcc+gdb ,//llvm,icecc
```
https://www.gnu.org/software/software.html
https://directory.fsf.org/ , https://www.gnu.org/software/libc/ , https://www.gnu.org/software/libc/manual/
https://www.kernel.org/doc/man-pages/
https://www.man7.org/linux/man-pages/man1/ldd.1.html  , ldconfig和ldd用法-https://www.cnblogs.com/foohack/p/4105847.html  
https://www.man7.org/linux/man-pages/man8/ld.so.8.html  
gdb调试解决找不到源代码的问题###   https://blog.csdn.net/albertsh/article/details/107437084
GDB调试指北-启动GDB并查看说明信息  https://blog.csdn.net/albertsh/article/details/107873029
GDB调试指北大全                   https://blog.csdn.net/albertsh/article/details/107587859
推荐一个C++枚举转字符串的开源项目magic_enum  https://blog.csdn.net/albertsh/article/details/125955230
-https://en.cppreference.com/w/cpp/types/underlying_type , https://en.cppreference.com/w/cpp/language/enum
通过vscode进行嵌入式linux arm开发板gdb调试  https://blog.csdn.net/weixin_43398250/article/details/127088065
LIBRARY_PATH(静态链接库lib.a),  LD_LIBRARY_PATH,LD_PRELOAD  //dlopen  
Linux环境变量设置方法总结PATH,LD_LIBRARY_PATH  (LD_LIBRARY_PATH, ld.so.conf+ldconfig)  https://blog.csdn.net/qq_19004627/article/details/79090052  
Linux C/C++调试之一：利用LD_PRELOAD机制监控程序IO操作 (readp=dlsym(RTLD_NEXT, "read"))  https://blog.csdn.net/imred/article/details/81106792  
 .CSAPP第三版运行时打桩Segmentation fault (mallocp=dlsym(RTLD_NEXT, "malloc"))         https://blog.csdn.net/imred/article/details/77418323  
//(man dlopen)  
//https://baike.baidu.com/item/dlopen/1967576  // -rdynamic (man gcc,This instructs the linker to add all symbols)  
//dlopen, DT_RPATH 和 DT_RUNPATH      https://blog.csdn.net/icbm/article/details/64128052  
//动态库加载路径之RPATH与RUNPATH(小记)  https://blog.csdn.net/dbzhang800/article/details/6918413  
//-  
gcc选项-g与-rdynamic的异同 ### https://www.cnblogs.com/LiuYanYGZ/p/5550544.html  摘自http://www.tuicool.com/articles/EvIzUn  
//可执行文件（ELF）格式的理解  https://www.cnblogs.com/LiuYanYGZ/p/5574602.html  摘自http://www.cnblogs.com/xmphoenix/archive/2011/10/23/2221879.html  
//gcc编译选项 https://www.cnblogs.com/LiuYanYGZ/p/5548855.html  摘自http://blog.csdn.net/liuchao1986105/article/details/6674822  
//100个gdb小技巧（v1.0）.pdf  https://www.cnblogs.com/LiuYanYGZ/p/14247052.html  摘自https://github.com/hellogcc/100-gdb-tips  
//浅谈C语言中的强符号、弱符号、强引用和弱引用 (weakref) https://www.cnblogs.com/LiuYanYGZ/p/5605511.html  摘自http://www.jb51.net/article/56924.htm  
//iptables四个表五条链  https://www.cnblogs.com/LiuYanYGZ/p/12735528.html  摘自https://blog.csdn.net/longbei9029/article/details/53056744  
//linux syslog详解  https://www.cnblogs.com/LiuYanYGZ/p/12425234.html  摘自https://blog.csdn.net/know9163/article/details/81901207  
关于weakref的用法  https://blog.csdn.net/wang1902568721/article/details/71159699  
// https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#Common-Function-Attributes  
///weakref https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-weak-function-attribute  
__attribute__ 机制详解  https://www.cnblogs.com/tureno/articles/12236495.html  https://blog.csdn.net/weaiken/article/details/88085360  
https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-finstrument-functions-1
///(__cyg_profile_func_enter) 调试技巧之 gcc/g++ -instrument-functions 参数 https://blog.csdn.net/tycoon1988/article/details/38924241
uclibc,eglibc,glibc,Musl-libc之间的区别和联系  https://www.sohu.com/a/164202127_424963
//-
https://github.com/icecc/icecream
使用 icecream 进行分布式编译  https://blog.csdn.net/yuwen_dai/article/details/17223309
深入浅出让你理解什么是LLVM   https://www.jianshu.com/p/1367dad95445
```



### linux/syslog/syslogd
https://www.gnu.org/software/  https://busybox.net/  https://buildroot.org/  
/usr/include/sys/syslog.h  
glibc   https://github.com/lattera/glibc/blob/master/misc/syslog.c  https://github.com/lattera/glibc/blob/master/stdio-common/dprintf.c  
uClibc  https://github.com/kraj/uClibc/blob/master/libc/misc/syslog/syslog.c  https://github.com/kraj/uClibc/blob/master/libc/stdio/dprintf.c  
syslogd https://github.com/kulasama/syslog-ng-3.4  https://github.com/oasislinux/syslogd/blob/master/syslogd.c  
//https://github.com/mirror/busybox/tree/master/sysklogd  https://git.busybox.net/busybox/tree/sysklogd/syslogd.c  https://git.busybox.net/buildroot/  
//linux syslog详解  https://www.cnblogs.com/LiuYanYGZ/p/12425234.html  摘自https://blog.csdn.net/know9163/article/details/81901207  

### linux/network/socket
//port 
(sdk) $ less /etc/services |grep -esocks -etipc -e'syslog ' -ebootpc -e^rsync -edaytime -etcpmux  
tcpmux          1/tcp                           # TCP port service multiplexer  
tcpmux          1/udp                           # TCP port service multiplexer  
daytime         13/tcp  
daytime         13/udp  
bootpc          68/tcp          dhcpc           # BOOTP client  
bootpc          68/udp          dhcpc  
rsync           873/tcp                         # rsync  
rsync           873/udp                         # rsync  
syslog          514/udp  
socks           1080/tcp                        # socks proxy server  
socks           1080/udp                        # socks proxy server  
tipc            6118/udp                # Transparent Inter Process Communication  
```
TCP粘包分析与处理 (Negle/TCP_NODELAY,PUSH) https://www.cnblogs.com/findumars/p/5638828.html  https://www.cnblogs.com/liyux/p/5594423.html
web-http-server (embedding)  https://gitee.com/louisyou/mongoose  https://github.com/cesanta/mongoose
```


### linux/bash
```
https://www.runoob.com/linux/linux-command-manual.html
https://www.runoob.com/w3cnote/linux-common-command-2.html
bash参考文档.html https://yiyibooks.cn/Phiix/bash_reference_manual/bash参考文档.html#Shell-Expansions  
.. https://yiyibooks.cn/Phiix/bash_reference_manual/bash%E5%8F%82%E8%80%83%E6%96%87%E6%A1%A3.html#Shell-Expansions  
Bash中文手册  https://gitee.com/ccnuacm/bash-manual-zh  
bash-substitution(Parameter Expansion)-shell中的参数扩展, 特殊变量 https://www.cnblogs.com/xkfz007/archive/2012/02/02/2336318.html  
$ cat <<EOT|cut -c2-  
> 12345  
> EOT  
c++ 理解虚函数，多重继承，虚基类和RTTI所需的代价 https://www.cnblogs.com/xkfz007/archive/2012/08/19/2646356.html  
c++ 虚继承与虚函数表 https://www.cnblogs.com/xkfz007/archive/2012/07/15/2592565.html  
google关于ssh key的解释（转）转的google的wiki的 https://www.cnblogs.com/likui360/p/6012075.html  
pidof, lsof -i:80, htop, strace/ltrace, chmod, lsattr -a/chattr  
lsattr命令: 显示文件属性介绍 https://blog.csdn.net/weixin_34021089/article/details/92872999  
hexdump, xxd  
//dirname,basename
-
json.tool.py
mkdir -p
which, whereis, whatis
mount -o remount r,w /
console-tset-reset, dirname, basename
mobadifffiles v0route.txt vpnroute.txt
grep -s --exclude-dir=tests/ --include=GLOB
find . -type l  ##symbolic link
find . -type d  #dir
echo aa |& tee afile  #https://www.runoob.com/linux/linux-comm-tee.html  www.cnblogs.com/nanruosen/p/16317025.html
ps -aux -ef, pgrep, pidof, killall,pkill
ifconfig, ip, ping6, traceroute,route,arp -a, dhcpconfig, netstat,ss, netsh-w
https://deepinout.com/linux-cmd/linux-terminal-related-cmd/linux-cmd-reset.html
ssh -T git@github.com
-
for i in *.c ;do echo $i ==; done
for ((i=0; i<10; i++)); do touch t$i.txt; done
ls *.c |xargs -tn1 -i true {} == {}
find ./ -name '*c' -exec echo {} == \;
if ! [[ $x =~ ^(startup|runtime)_cp_.*\.log ]]; then echo 111; fi  #bash正则匹配
if [[ 'aa' == 'ab' ]] ;then echo 111;else echo 222; fi
echo -e 'aa\nbbb\nc'| for i in `cat -`;do echo -n "$i, ";done
foo(){ echo $1-xyz-$*;}
typeset -f foo //declare
htail(){ head -3 $*; echo ...; tail --line=3 $*;}
a xztail='xzcat|cat -n|grep Cprt|htail'
a sort.k77='sort -k7,7'  ##for syslog,better for cu
#echo -e 'AA\r\nBB\rC' |sed -b -e's/\r$/-/g' -e's/\r/\n/g' | hexdump -C  ##can't match \n or $
a lsed="sed -bi 's:\r:\n:g'"  #files*
a pyy='python3 -B' #-Bi
-
ip+ifconfig+busybox //Linux下IP命令使用详解  https://www.cnblogs.com/liunaixu/p/12808936.html
试试Linux下的ip命令，ifconfig已经过时了  https://linux.cn/article-3144-1.html
linux命令总结之ip命令 (ip addr)  https://www.cnblogs.com/ginvip/p/6367803.html
配置IP别名 https://blog.51cto.com/dianel/1921129 https://blog.51cto.com/sharan/726600
Linux系统使用ss命令查看端口状态  https://my.oschina.net/u/4413564/blog/3550024
/
baidu-linux上发邮件
linux中使用mail命令发送邮件详解##  https://blog.csdn.net/m0_49562857/article/details/128518590
--echo test|mail -s test 12121@qq.com;  mail -s test 1212@qq.com </etc/hosts
linux发送邮件mail详解             https://blog.csdn.net/whandgdh/article/details/127425496
linux mail命令用法浅析 https://www.cnblogs.com/wordless/p/16208865.html http://www.jb51.net/LINUXjishu/183047.html
baidu-Python mail()
https://www.sendcloud.net/doc/email_v2/  ??
Python之Mail编程（电子邮件编程） https://blog.csdn.net/ydw_ydw/article/details/81914326
/
bash--SHELL BUILTIN COMMANDS, REDIRECTION
grep默认显示color--grep配置颜色显示  export GREP_OPTIONS='--color=auto'; GREP_COLOR='4;41'  https://www.bbsmax.com/A/1O5Ev693d7/
/
在linux中的sort命令,技术|Linux 的 ‘sort’命令的14个有用的范例  https://blog.csdn.net/weixin_35648264/article/details/116575875
Linux Bash之正则表达式  https://www.cnblogs.com/phillee/p/10949796.html
bash 自带正则匹配功能 - BASH_REMATCH 介绍  =~ http://bbs.chinaunix.net/thread-4125147-1-1.html
awk and sed 饭醉团伙 高清版 修订第三版  http://bbs.chinaunix.net/thread-1743038-1-1.html
https://man.linuxde.net/docs/shell_regex.html
/
vim-vi上下左右键异常(set nocompatible,backspace=2) https://wenku.baidu.com/view/5971023668d97f192279168884868762caaebbf7.html

```

### lang/script
```
lua/(wireshark plugin)  https://www.runoob.com/lua  http://www.lua.org/docs.html  
Lua中调用C函数(lua-5.2.3)    https://www.w3cschool.cn/lua/gxj31te8.html  
//Step By Step(Lua调用C函数) https://www.cnblogs.com/orangeform/archive/2012/07/23/2469902.html  
//Step By Step(C调用Lua)     https://www.cnblogs.com/orangeform/archive/2012/07/20/2460634.html  
//Step By Step(Lua-C API简介)https://www.cnblogs.com/orangeform/archive/2012/07/18/2433428.html  
Lua编写wireshark插件基础 https://blog.csdn.net/chen_jianjian/article/details/81502840  
脚本之家51jb首页 >> 脚本专栏 >> Lua  https://www.jb51.net/list/list_245_1.htm  
Duktape：在C/C++项目中嵌入JavaScript  http://www.cppblog.com/tx7do/archive/2016/04/13/213263.html  
Rust 专注于安全，尤其是并发安全  https://www.runoob.com/rust
```


### gawk/gawkinet
```
使用一下gawk的socket功能 http://blog.chinaunix.net/uid-22270773-id-1778335.html  
  http://www.gnu.org/software/gawk/manual/html_node/TCP_002fIP-Networking.html  
  Gawkinet: TCP/IP Internetworking with Gawk ## https://www.gnu.org/software/gawk/manual/gawkinet/  
                                                https://www.gnu.org/software/gawk/manual/gawkinet/gawkinet.html  
```

## HarmonyOS
https://gitee.com/openharmony/docs?hmsr=aladdin1e6  



##  Alpine Linux
```
hub.docker.com/_/alpine
http://dl-cdn.alpinelinux.org/alpine/v3.6/releases/x86_64/alpine-standard-3.6.2-x86_64.iso
Alpine Linux 使用简介  https://blog.csdn.net/freeking101/article/details/80795752
Alpine linux硬盘安装  https://blog.csdn.net/csdn_duomaomao/article/details/76053229
Alpine Linux详解  https://blog.csdn.net/weixin_34355715/article/details/89536087
tinycore?
```


## bat
```
bat批处理, https://baike.baidu.com/item/批处理/1448600
//
regedit添加文件或文件夹右键菜单项  https://blog.csdn.net/qq_44705203/article/details/119966938
[HKEY_CLASSES_ROOT\Directory\shell\cmd\command]
@="cmd.exe /s /k pushd \"%V\""
--
[HKEY_CLASSES_ROOT\Directory\shell\git_shell\command]
@="\"C:\\appc\\Git\\git-bash.exe\" \"--cd=%1\""
--
[HKEY_CLASSES_ROOT\Directory\shell\Powershell\command]
@="powershell.exe -noexit -command Set-Location -literalPath '%V'"
--
[HKEY_CLASSES_ROOT\Directory\shell\zz\command]
@="cmd.exe"
//
```


## etc
```
github/gitlab-web-acc-nopw-authentication win10\控制面板\用户帐户\凭据管理器(管理Windows凭据)
https://shjg.nongtianlang.com/  https://gitee.com/yinshuwei
日历精灵 http://www.5adanci.com/excel/2022.html
//
https://m.pp.cn/home.html
http://www.timebie.com/cn/timezonesearch.php
https://www.kylc.com/stats/global/yearly_overview/g_gdp.html
//
MSC-Generator 的语法  https://blog.csdn.net/weixin_40643581/article/details/78242664
脚本绘图工具总结       https://blog.csdn.net/dfe30001/article/details/102154644
//
网盘 https://ufile.io/
//
年终工作总结/技术工作年度总结/软件工程师年度总结
投资回报率/溢价
baidu-厨房防油贴纸怎么去除
爱立敷粘性敷料  https://www.jianshu.com/p/0bf2204e57a1
tiny-teeny
异星歧途（1985）——八十亿疯狗出笼  https://www.bilibili.com/read/cv5876825
//
freemind-vscode
hysteresis
//
http://www.zaixian-fanyi.com/, http://win.mail.ru(asbcd17x/m6x17a..d), https://mail.yandex.com/lite(20z)
```



## end00
```
//ctrp/Credential Manager
w.hub:okgit/nokcyg, git version 2.21.0.windows.1
w.lab:okall
hm.hub:okgit,  Git-2.10.0-32-bit.exe(32xp)
hm.lab:okgit/nokcyg(no/dev/tty)
--
eg:push usage,
ignore failure for github,such as: Logon failed, use ctrl+c to cancel basic credential prompt.
then cmd prompt, Username for 'https://github.com': <id-input>
and then prompt a (tk)window for <pw>.  (seems they goto Credential)
```
## end==
