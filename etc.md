# etc-link
:toc:
:toclevels: 6
:numbered:
:icons: font

## gnu
http://www.man7.org/linux/man-pages/man2/gettimeofday.2.html  
http://www.man7.org/linux/man-pages/man7/time.7.html  
http://www.man7.org/linux/man-pages/man7/vdso.7.html  
http://man7.org/linux/man-pages/man7/futex.7.html  

## c/cpp/c++
https://en.cppreference.com/w/cpp/container/vector  
https://zh.cppreference.com/w/c/io/fprintf  
https://zh.cppreference.com/w/cpp/io  
https://coliru.stacked-crooked.com/  
https://zh.cppreference.com/w/Cppreference:Archives  
http://www.cplusplus.com/reference/stl/  
http://www.cplusplus.com/reference/ios/  
typeid(x).name()  std::type_info  std::type_index  
boost::typeindex::type_index type=typeindex::type_id<int&>(); type.pretty_name()  
boost::msm  
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
C/C++打印文件名/行号/函数名的方法https://www.cnblogs.com/shirishiqi/p/5431627.html  
C语言宏高级用法https://www.cnblogs.com/shirishiqi/p/6033364.html  
gcc动态链接库so的制作和使用# https://www.cnblogs.com/oxspirt/p/7344371.html  
=Linux下gcc生成和使用静态库和动态库详解# https://blog.csdn.net/CSqingchen/article/details/51546784  
router-路由器LAN口IP地址到底是什么?https://www.cnblogs.com/oxspirt/p/12302041.html  https://www.zhihu.com/question/369737960/answer/1004809747  
### c++
c++ inheritance -- 继承 https://www.cnblogs.com/timssd/p/4781107.html  
C++类的大小 https://www.cnblogs.com/timssd/p/5714079.html  
C++ 虚函数表解析 https://blog.csdn.net/haoel/article/details/1948051  
C++ 对象的内存布局(上) https://blog.csdn.net/haoel/article/details/3081328  https://blog.csdn.net/haoel/article/details/3081385  

## elearning web/lang
https://www.runoob.com/lua/lua-tutorial.html  
https://www.w3cschool.cn/sublimetext/  


## //git
git换行符LF与CRLF转换问题 https://www.cnblogs.com/sdgf/p/6237847.html  
git config --global core.autocrlf false/input/true  
git config --global core.safecrlf true/warn/false  
Sublime Text,View->Line Endings，选Unix，保存;  
https://www.cnblogs.com/fangshenghui/p/5693610.html  
--  
Git算不算程序员的必备技能https://www.zhihu.com/question/41667536/answer/1297935355  
GIT_DIR 10.8 Git内部原理-环境变量https://www.git-scm.com/book/en/v2/Git-Internals-Environment-Variables  git-$Id https://git-scm.com/docs/gitattributes/  
Git常用命令速查 https://www.jianshu.com/p/38832b41143d  
rebase,merge,cherry-pick的区别详解—面试常问 https://www.cnblogs.com/NaughtyCat/p/differ-with-rebase-merge-cherry-pick.html  https://git-scm.com/book/zh/v2  
Git知识总览(五)Git中的merge、rebase、cherry-pick以及交互式rebase https://www.cnblogs.com/ludashi/p/8213550.html  
简单对比git pull和git pull --rebase的使用 https://blog.csdn.net/dake_160413/article/details/78676163  https://www.cnblogs.com/kevingrace/p/5896706.html  
git submodule 完整用法整理 https://blog.csdn.net/wkyseo/article/details/81589477  
git init --bare project.git; repack,fsck,gc  
git push -f origin master ///[f]to restore,but better to revert commitId  
git remote -v  #gitlab project项目迁移https://blog.csdn.net/lcyaiym/article/details/77678467  
git remote add mybak URL..; git remote set-url mybak URL..;  
git var -l; git config -l --local; git ls-files; git whatchanged  
git remote show; git remote -v; git ls-remote  
git branch --unset-upstream  
git show-branch; lo = log -9 --oneline #--all --graph #--decorate; loag=lo --all --graph #--decorate;  ##log --left-right --boundary --reverse bra1...bra2  
git branch -vv  
git revert/ reset++push -f [Git恢复之前版本的两种方法reset、revert] https://blog.csdn.net/yxlshk/article/details/79944535  
git apply --check my.pat; git apply -3 my.pat;  git apply --reject my.pat  
开源-GIT常用命令 https://www.cnblogs.com/kex1n/p/6141166.html  


## //gitlab/github--2git-acc
https://blog.csdn.net/px_dn/article/details/89455457 
创建github repository(仓库) https://www.cnblogs.com/siestakc/p/6862446.html  
gitlab项目仓库自动同步到github或者码云gitee https://blog.csdn.net/zjcjava/article/details/90047837  
Gitlab代码库自动同步到Github https://blog.csdn.net/kelvin_yin/article/details/86661066  
gitlab Repository mirroring https://gitlab.com/help/workflow/repository_mirroring.html  https://gitlab.com/help/user/project/repository/repository_mirroring.md  
GitLab仓库重命名以及GitHub仓库的删除https://www.jianshu.com/p/d6f7da6bd275  (new-setting\project-name,Advanced\Change-path)  


## git17-hi-memo1
https://github.com/asbcd17z/hi1/blob/master/memo1.txt  
###Google Chrome版本 72.0.3626.119（正式版本）（64 位）, firefox 65.0.1 (64 位)  
https://github.com/TheAlgorithms/Python  
https://github.com/libfuse/  
用Python写一个FUSE（用户态文件系统）文件系统 http://blog.jobbole.com/51268/
https://github.com/qianyubl/WATCH_dojo  
https://github.com/search?l=C&p=5&q=timer+c&type=Repositories  


## tools/markdown/asciidoc/graphviz/plantuml/planttext.com
方便好用的在线UML制作工具：PlantUML https://www.jianshu.com/p/c006dcb1493b  
如何在线编辑显示markdown/plantuml/graphiz? https://segmentfault.com/q/1010000002802979  
http://www.plantuml.com/plantuml/ , https://stackedit.io/ , https://github.com/mikitex70/plantuml-markdown  
https://www.planttext.com/  
https://plantuml.com/zh/  
uml par/UML序列图总结(Loop,Opt,Par和Alt) https://www.cnblogs.com/cy568searchx/p/6227238.html  
eg:程序员绘图工具-Plantuml https://www.jianshu.com/p/30f6a9c06083  https://zhuanlan.zhihu.com/p/76948461  
eg:plantuml使用教程 https://www.cnblogs.com/ningskyer/articles/5397750.html  http://archive.3zso.com/archives/plantuml-quickstart.html  
markdown-stackedit使用 https://www.cnblogs.com/mfmdaoyou/p/6709491.html  
https://www.w3cschool.cn/asciidoc_guide/  
Markdown基本语法 https://www.jianshu.com/p/191d1e21f7ed/  
印象笔记Markdown入门指南 https://yinxiang.com/new/hc/articles/%E5%8D%B0%E8%B1%A1%E7%AC%94%E8%AE%B0-markdown-%E5%85%A5%E9%97%A8%E6%8C%87%E5%8D%97/  
https://github.com/stanzgy/wiki/blob/master/markup/markdown-guide.md  
https://github.com/stanzgy/wiki/blob/master/markup/asciidoc-guide.asciidoc  
baidu-asciidoc https://asciidoctor.cn/docs/asciidoc-syntax-quick-reference/  
在线工具 https://tool.lu/asciidoc/  https://tool.lu/markdown/  
AsciidocFX_Windows1.6.6.exe(maybe+Graphviz2.44-2019) https://github.com/asciidocfx/AsciidocFX  
asciidoctor  AsciidocFX支持的元数据 https://blog.csdn.net/wiborgite/article/details/88648802  
Asciidoc简介#  http://asciidoctor.org/docs/asciidoc-syntax-quick-reference/  

### more1a
在线工具 https://tool.lu/asciidoc/  https://tool.lu/markdown/  
json在线 https://www.sojson.com/runjs.html  
ietf-json https://tools.ietf.org/html/rfc7159.html  https://www.ietf.org/rfc/  
TIPC  https://blog.csdn.net/yunlong34574/article/details/42460803  http://blog.chinaunix.net/uid-8048969-id-4107394.html  https://www.jianshu.com/p/7fb89e3d19af  
bash-prompt-Linux命令行提示符修改【全攻略】 https://vimsky.com/article/4284.html  

### more1
https://asn1.io/asn1playground/  
CI/CD devops  git/gerrit/zuul/jenkins/  
Gerrit 笔记 https://www.cnblogs.com/milton/p/12576792.html  
proxy.pac https://wenku.baidu.com/view/1d29739ea2161479171128a6.html  
通过socks tunnel设置http代理 https://www.cnblogs.com/milton/p/7777590.html  
Docker安装和常用命令 https://www.cnblogs.com/milton/p/9866963.html  
迁移Git项目到Gitlab https://www.cnblogs.com/milton/p/11053007.html  OpenSSL的证书, 私钥和签名请求(CSRs)www.cnblogs.com/milton/p/11076925.html  
github仓库迁移到gitlab以及gitlab仓库迁移到另一个gitlab服务器# https://www.cnblogs.com/saysmy/p/10942814.html  
typeset; man bash |grep PROMPT_DIRTRIM=3  PS1==https://www.cnblogs.com/wi100sh/p/4814745.html  
Bootloader之uBoot简介##https://www.cnblogs.com/wi100sh/p/4255081.html  
endian如何判断CPU是大端还是小端模式 https://www.cnblogs.com/wi100sh/p/4899466.html  
重载(overload)，覆盖(override),隐藏(hide)的区别 https://www.cnblogs.com/wi100sh/p/4325397.html https://www.cnblogs.com/wi100sh/p/4325336.html  
gof设计模式简介#https://www.yuque.com/happyhusky/wdbj/uwupyw  plantuml#https://www.yuque.com/happyhusky/wdbj/ogdbl4  
高质量C++/C编程指南 https://www.jianshu.com/p/654fea4bfd4f  
https://docs.gitlab.com/ee/api/markdown.html  

### more2
在语雀绘制PlantUML图 https://www.yuque.com/barretlee/yuque/aabh67  
糙读《如何高效记忆》后的读后感 https://www.yuque.com/sulirc/virtue/wrbp4i  
gitbook https://www.jianshu.com/p/421cc442f06c  
Linux常用操作# https://blankj.com/gitbook/linux/ https://github.com/Blankj/AndroidOfferKiller  
http://www.ruanyifeng.com/blog/2019/09/curl-reference.html  
深入ProtoBuf-简介 https://www.jianshu.com/p/a24c88c0526a  
python c struct/python之struct详解https://blog.csdn.net/qq_30638831/article/details/80421019  
PYTHON C/C++结构体 ctypes.Structure https://www.cnblogs.com/yang220/p/12091863.html   https://www.programcreek.com/python/example/1122/ctypes.Structure  
date +%FT%T.%Nz -u  
VI模式中上下左右键和回退键出现字母 set nocompatible backspace=2 hlsearch https://www.cnblogs.com/wangshuyi/p/6078678.html  

### python
python collections.namedtuple dataclasses.@dataclass __slots__  
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
 python ctypes库中动态链接库加载方式https://www.cnblogs.com/bigship/archive/2011/11/24/2262348.html  
 python ctypes探究----python与c的交互https://www.cnblogs.com/night-ride-depart/p/4907613.html  
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
sys._current_frames(), sys._getframe(), traceback.print_stack(), inspect.currentframe(),inspect.isbuiltin(),  logging, str(datetime.datetime.now())  
collections.OrderedDict/namedtuple(), Callable, callable()  
method-wrapper  https://stackoverflow.com/questions/53130485/how-to-import-method-wrapper-type  
Python 调试器之pdb https://www.cnblogs.com/xiaohai2003ly/p/8529472.html  
//  
3.5.2chm-Python » 3.5.2 Documentation » Python HOWTOs » Descriptor HowTo Guide // https://docs.python.org/2/howto/descriptor.html#descriptor-protocol
3.5.2chm-Python Language Reference/3. Data model/3.3. Special method names(__new__)/3.3.3. Customizing class creation(metaclass)/3.3.2. Customizing attribute access(__getattr__)  
data descriptor, property  
python logging详解及自动添加上下文信息 https://www.cnblogs.com/xybaby/p/9197032.html  
关于metaclass，我原以为我是懂的# https://www.cnblogs.com/xybaby/p/7927407.html  //mixin  
https://stackoverflow.com/questions/100003/what-are-metaclasses-in-python  深刻理解Python中的元类(metaclass) https://www.jianshu.com/p/e017bc810702  
python属性查找 深入理解（attribute lookup）https://www.cnblogs.com/xybaby/p/6270551.html  python descriptor详解 https://www.cnblogs.com/xybaby/p/6266686.html  
python __getattr__ 巧妙应用 https://www.cnblogs.com/xybaby/p/6280313.html  
python decorator 基础 https://www.cnblogs.com/xybaby/p/6274187.html  https://www.cnblogs.com/xybaby/p/6274283.html  
由一个简单需求到Linux环境下的syslog、unix domain socket https://www.cnblogs.com/xybaby/p/6596431.html  
python装饰器的诞生过程 https://blog.csdn.net/a315612852/article/details/102040124  
Python thread local https://www.cnblogs.com/xybaby/p/6420873.html  
python 编程风格术语说明 EAFP: Easier to ask for forgiveness than permission. / LBYL: Look before you leap.  https://blog.csdn.net/zhouguoqionghai/article/details/57089859  
猴子补丁(monkey patch) JSONEncoder https://www.jianshu.com/p/f1060b22aab8  

### python-https
Python3+ssl实现加密通信 https://www.cnblogs.com/lsdb/p/9397530.html  
在python使用SSL(HTTPS) http://blog.sina.com.cn/s/blog_5d18f85f0102xg3e.html  
Python抓需要输入用户名密码的https网页 https://blog.csdn.net/liumengcheng/article/details/9627437  
Python实现网站自动登录---傻瓜教程chromedriver https://blog.csdn.net/qiudechao1/article/details/89234582  
Python 爬虫的工具列表 附Github代码下载链接 https://www.cnblogs.com/arxive/p/6291709.html  
python模拟自动登录网站（urllib2）https://blog.csdn.net/xgocn/article/details/85130734  https://www.cnblogs.com/dreamer-fish/p/5484767.html  

### gdb/gdb python脚本
用 Python 拓展 GDB（一） https://blog.csdn.net/weixin_33947521/article/details/89377701  
用 Python 拓展 GDB（一） https://segmentfault.com/a/1190000005718889  GDB 自动化操作的技术 https://segmentfault.com/a/1190000005367875  
用 Python 拓展 GDB（二） https://blog.csdn.net/weixin_33819479/article/details/89369809  
https://blog.csdn.net/weixin_34405557/article/details/89370109  
用 Python 拓展 GDB（三） gdb调试脚本 https://blog.csdn.net/cnsword/article/details/16337031  
用户自定义gdb命令的Python实现 https://blog.csdn.net/nirendao/article/details/105942335  
GDB 自动化操作的技术  https://blog.csdn.net/weixin_34075551/article/details/89408018  

### linux/c
常见 core dump 原因分析signal 11 - SIGSEGV (signal 6-SIGABRT/11-SIGSEGV) https://www.cnblogs.com/kex1n/p/6972046.html  
Linux信号列表详解 (kill -l, gdb/i signal,i handle) https://blog.csdn.net/liushuimpc/article/details/51611354  
应用 Valgrind 发现 Linux 程序的内存问题 https://www.cnblogs.com/kex1n/p/11573606.html  https://www.cnblogs.com/kex1n/p/11573526.html  
gcc g++支持C++11 标准编译及其区别 https://www.cnblogs.com/kex1n/p/7072092.html  
Google开源C++单元测试框架Google Test-gtest https://www.cnblogs.com/kex1n/p/5524653.html  
Google C++单元测试 GTest https://www.cnblogs.com/kex1n/p/8981552.html  http://www.cnblogs.com/jycboy/p/6057677.html  
开源-GIT常用命令 https://www.cnblogs.com/kex1n/p/6141166.html  
Linux命令中：rsync和cp之间的区别 https://www.cnblogs.com/kex1n/p/7008178.html  
如何在socket编程的Tcp连接中实现心跳协议 https://www.cnblogs.com/kex1n/p/7448552.html  http://blog.csdn.net/nyist327/article/details/39586203  
thread_name-pthread--linux编程 - 给线程起名字_落尘纷扰的专栏-CSDN博客(prctl()/pthread_setname_np()) https://blog.csdn.net/jasonchen_gbd/article/details/51308638  


### linux/bash
bash-substitution(Parameter Expansion)-shell中的参数扩展, 特殊变量 https://www.cnblogs.com/xkfz007/archive/2012/02/02/2336318.html  
$ cat <<EOT|cut -c2-  
> 12345  
> EOT  
c++ 理解虚函数，多重继承，虚基类和RTTI所需的代价 https://www.cnblogs.com/xkfz007/archive/2012/08/19/2646356.html  
c++ 虚继承与虚函数表 https://www.cnblogs.com/xkfz007/archive/2012/07/15/2592565.html  
google关于ssh key的解释（转）转的google的wiki的 https://www.cnblogs.com/likui360/p/6012075.html  


## end==
