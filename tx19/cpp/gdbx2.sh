#!bin/gdb
##source mygdb.sh
#gdb gdbx_python.c.ell  -x gdbx2.sh  --batch  #-ex run  #//why pause at break?
#--batch -x -ex
#alias
#start

echo ===sh.start\n
set output-radix 16
#set radix
#set endian
#apropos
#man gdbserver
#(gdb) target remote | ssh -T hostname gdbserver - hello
#help target exec/extended-remote/remote //19.0,20.1.3
#set remote exec-file
#//4.2,18.1 file filename
#help signal/handle
#info signals
#handle SIGNAL pass
#handle SIGUSR1 pass
#set no-stop #off
#set pagination off
#set print pretty on
#p/x


define myadd
	print $arg0+$arg1
end
myadd 1 2
show user


##//===============
b foo2
#
commands
echo ===\n
bt
echo ==\n
bt full 1
i args
i locals
#i variables  #global and static
#i threads
#ptype __func__
#p/x gVar
#p/x *q
c
end

i b
#c
#run
#start
r
