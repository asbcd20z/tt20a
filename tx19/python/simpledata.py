#!/usr/bin/env python3
##-*- coding:utf-8 -*-
#pyy -i
#pyy -mpdb

def lg():import inspect;return '--'+str(inspect.stack()[1][1:4])
print(lg())

## fixed length array
t=range(4)
t4=list(range(3))
t2=[0 for i in range(3)]
t3=[0]*4
#python352.chm -4.6.3. Mutable Sequence Types //s *= n
# range(0, 4) [0, 1, 2] [0, 0, 0] [0, 0, 0, 0]
print(lg(),t,t4,t2,t3)

#copy.deepcopy(x)

