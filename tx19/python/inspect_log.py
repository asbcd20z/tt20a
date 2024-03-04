#!/usr/bin/env python3
##-*- coding:utf-8 -*-

#python -Bi  //inspect interactively
#python3 -m pdb myscript.py  //standard library> https://docs.python.org/zh-cn/3/library/pdb.html
#python -m timeit  //timeit.timeit,timeit.repeat https://docs.python.org/zh-cn/3/library/timeit.html
#python -m timeit "f=('ff',22,'tt');t=f[0]+':'+str(f[1])+'@'+f[2];"
#python -m timeit "f=('ff',22,'tt');t='{}:{}@{}'.format(f[0],f[1],f[2]);"
#python -m timeit "f=('ff',22,'tt');t='{}:{}@{}'.format(*f);"
#python -c'import timeit; t=timeit.timeit("1+2", number=10); print(t)'
#>>> timeit.timeit('"-".join(map(str, range(100)))', number=10000)
#>>> timeit.timeit(lambda: "-".join(map(str, range(100))), number=10000)
# pyy -c'import timeit;t=timeit.timeit(lambda: "-".join(map(str, range(100))), number=1000); print(t)'

x=11
x
print(x);

#baidu:python象c一样打印__FILE__,__LINE__,__FUNCTION__
#python 中如何实现类似C语言中 __FILE__, __LINE__, __FUNC__  https://blog.csdn.net/zdcs/article/details/53389371

import inspect
import timeit

#'''
def get_file_line_function():
    frame = inspect.currentframe()
    frame=inspect.stack()[1][0];
    try:
        file_name = inspect.getframeinfo(frame).filename
        line_number = inspect.getframeinfo(frame).lineno
        function_name = inspect.getframeinfo(frame).function

        # 如果你想要完整的路径，可以使用os.path.abspath来获取
        # import os
        # file_name = os.path.abspath(file_name)

        return file_name, line_number, function_name
    finally:
        del frame

# 使用示例
print(get_file_line_function())

flf=get_file_line_function;
#'''


#text = "Number is: {}".format(123)
t1=get_file_line_function();
t1s="{}+{}:{}".format(t1[0],t1[1],t1[2]);
t1s2="{}+{}:{}".format(*t1);
t1s3=t1[0]+":"+str(t1[1]), t1[0]+":%s"%t1[1]
#t1s4=str.join()
#https://blog.csdn.net/wangbadan121/article/details/139911374
# f"{t1[0]}:{t1[1]}"


def foo(): print(flf());  t=flf(); s=t[0]+"+"+str(t[1])+":"+t[2];print(s);
foo();


class AA():
	#def __init__(self): pass;
	def foo2(self): print(flf());  t=flf(); s=t[0]+"+"+str(t[1])+":"+t[2];print(s);
	def foo3(): print(flf());  t=flf(); s=t[0]+"+"+str(t[1])+":"+t[2];print(s);  #error-to-called-by-obj
	@staticmethod
	def foo4(): print(flf());  t=flf(); s=t[0]+"+"+str(t[1])+":"+t[2];print(s);  #ok-for-both-obj/class
## 
aa=AA()

