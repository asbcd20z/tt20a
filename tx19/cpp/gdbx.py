#!/bin/python
# -*- coding=UTF-8 -*-
#(gdb) source gdbx.py
#gdb gdbx_python.c.ell  -q -x gdbx.py  #--batch
#gdb gdbx_python.c.ell  -q -ex 'so gdbx.py'

import gdb

print("==start py")
import sys; print(sys.version, sys.version_info);


##//===================================
#method.1
def myfoo(): print("myfoo");gdb.execute("echo myfoo-by-echo-from-py\n");

myfoo();

b=gdb.Breakpoint("b foo")  #but its pending??
#b.stop()
#b.enabled=False
b.enabled=False

b2=gdb.Breakpoint("b foo2")
#b2.commands="bt"  #//is not writable?
#gdb.Breakpoint.commands="bt"
print("b2=", b2)
print("b2.number=", b2.number)
print("b2.condition=", b2.condition)
print("b2.commands=", b2.commands)
print("==")


print(gdb.breakpoints())
gdb.execute("i b")  #but show as pending??



#set non-stop
#Breakpoint.silent
##//===================================
#method.2.ok
class MyBreakpoint(gdb.Breakpoint):
    def __init__(self, location):
        super(MyBreakpoint, self).__init__(location)
        #self.silent = True  # Prevent GDB from printing the breakpoint hit message

    def stop(self):
        # Commands to execute when the breakpoint is hit
        gdb.execute('print 11')
        gdb.execute('echo ===\n')
        gdb.execute('bt')
        gdb.execute('echo ==\n')
        gdb.execute('bt full 1')
        gdb.execute('i args')
        gdb.execute('i locals')
        #gdb.execute('continue')
        return False  # Continue execution automatically

# Set the breakpoint at the specified location
MyBreakpoint('foo2');

gdb.execute("disable 2")
gdb.execute("i b")
gdb.execute('r')



##//===================================
#method.3.fail
class MyBreakpoint2(gdb.Breakpoint):
    def __init__(self, location):
        super(MyBreakpoint2, self).__init__(location)
        #self.silent = True  # Prevent GDB from printing the breakpoint hit message

    def stop(self):
        # Commands to execute when the breakpoint is hit
        gdb.execute('print 11')
        #gdb.execute('continue')
        return False  # Continue execution automatically
"""
#bp2=MyBreakpoint2('foo2')
#AttributeError: attribute 'commands' of 'gdb.Breakpoint' objects is not writable
bp2.commands='''
echo ===\n
bt
ehco ==\n
bt full 1
c
'''

gdb.execute("disable 3")
gdb.execute("i b")
#gdb.execute('r')
"""
