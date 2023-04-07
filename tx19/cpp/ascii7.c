#if 0
#set -x
gcc -std=c99 -m32 -g -gstabs+ $0 -o $0.ell || exit -1
ls -l $0*
#objdump $0.ell -G -g
./$0.ell |hexdump -C
./$0.ell |tr -c '[:graph:][:blank:]\n' '-' |hexdump -C
./$0.ell |tr -c '[:print:][:blank:]\n' '-' |hexdump -C
python3 -B -c "for i in range(128): print('%c' %i, end='');" |hexdump -C
#
#sed
#col -b
#echo -e 'xx\byy' |hexdump -C
exit 0;
#
#
https://www.runoob.com/linux/linux-comm-tr.html
https://code.woboq.org/userspace/glibc/ctype/ctype.c.html#31
https://github.com/kraj/uClibc/blob/ca1c74d67dd115d059a875150e10b8560a9c35a8/libc/sysdeps/linux/common/bits/uClibc_ctype.h
https://github.com/kraj/uClibc/blob/ca1c74d67dd115d059a875150e10b8560a9c35a8/include/ctype.h
//ASCII码一览表，ASCII码对照表,  http://c.biancheng.net/c/ascii/
baidu:sublime search <binary>  //https://blog.csdn.net/run068/article/details/119870732
-sublime Ctrl+H, replace [^[:print:]\t\n]
-https://stackoverflow.com/questions/40861372/sublime-3-find-in-files-function-shows-no-details
#endif


int
main(int argc, const char *argv[])
{
for(int i=0; i<128; i++){
printf("%c",i);
}

return 0;
}

