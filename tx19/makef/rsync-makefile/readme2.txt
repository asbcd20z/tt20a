//=

//=proxy
To access web pages from a server, add the following to your ~/.bash_profile:

export http_proxy=http://10.158.100.2:8080
export https_proxy=http://10.158.100.2:8080
export ftp_proxy=http://10.158.100.2:8080
export no_proxy="127.0.0.1,localhost,.nsnnet.net,.nsn.com"

# Other proxy servers:
#   • Helsinki
#       http://fihel1d-proxy.emea.nsn-net.net:8080
#   • Frankfurt
#       http://defra1c-proxy.emea.nsn-net.net:8080
#   • Espoo
#       http://fiesprx000.nsn-net.net:8080


//=target
test:
rsync:
sct_%: rsync
run_sct_%: rsync
run_ut_%: _%
_%: rsync
logs:
console:
//=
eg:
make -f rsMakefile _CELLCexe
make -f rsMakefile run_ut_setupcell

