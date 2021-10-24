#
#with regexp for asterisk wildcard. refer rsMakefile(rsync-makefile)
#eg: make -f wildcard.mk  _t3  cbt4
#https://blog.csdn.net/weixin_38391755/article/details/80380786/
#2https://blog.csdn.net/haoel/article/details/2886
#
#Makefile中的$@, $^, $< , $?, $%, $+, $*
#https://blog.csdn.net/dlf1769/article/details/78997967/
#2https://blog.csdn.net/Jeffrey0000/article/details/12421317
#$@  表示目标文件
#$^  表示所有的依赖文件
#$<  表示第一个依赖文件
#$?  表示比目标还要新的依赖文件列表
#$%  仅当目标是函数库文件中，表示规则中的目标成员名。
#    例如，如果一个目标是“foo.a(bar.o)”，那么，“$%”就是“bar.o”，“$@”就是“foo.a”
#$+  这个变量很像“$^”，也是所有依赖目标的集合。只是它不去除重复的依赖目标
#$*  这个变量表示目标模式中“%”及其之前的部分。
#$$  符号主要扩展打开makefile中定义的shell变量(如actions中for-loop..)
#Makefile的$@、$%、$?、$^ 、$+、$*自动化变量说明
#https://blog.csdn.net/qu1993/article/details/88871799
#https://blog.csdn.net/kehyuanyu/article/details/21454789
#

.PHONY: comm comm2 t1 t2
comm comm2:
	@echo -e ==$@==

t1: comm comm2
	echo ==t1;echo ==t1.more
	-rm a-nothing  # ignored error if not-exist. so return no-error, echo $?==0

t2: comm comm2 comm
	@echo ==t2;echo ==t2.more, //"1@=$@,2^=$^,2a+=$+,3<=$<,4?=$?, /1*=$*"


###
_%: comm
	echo ==X.1=$*, //"1@=$@,2^=$^,3<=$<, //1*=$*"

xx_%: _%
	echo ==XX.$*, //1=$@,2=$^,3=$<

##
cb%: b%; echo ==CB.$*
b%: comm; echo ==B.$*
db%: b%; echo ==DB.$*
eb%: _b%; echo ==EB.$*

.PHONY: clean
clean:
all: comm
test: comm; @echo ==test..; echo ==test2..

#=====
%.o: %.c* ; gcc -g $@ $<

