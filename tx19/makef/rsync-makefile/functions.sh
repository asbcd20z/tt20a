function make()
{
    myMakefile=$HOME/utils/rsync-workspace/makefile
    realmake=`which make`
    prefix=
    while [[ `readlink -ef ./$prefix` != '/' ]]; do
        if [ -e ${prefix}.config ]; then
            dir=`readlink -ef ./$prefix`
            args=
            while [[ "$1" ]]; do
                case $1 in
                    _* )
                        args="$args $1"
                        ;;
                    *exe | *GT | *UT | *UnitTest | lib* | pt* | symlinks | clean | *_clean | targetslist | morax | pch )
                        args="$args _$1"
                        ;;
                    * )
                        args="$args $1"
                        ;;
                esac
                shift
            done
            [[ "$*" ]] && args="$args $*"
            echo -e "Calling ${Green}make$Color_Off $BGreen$args$Color_Off ${Green}-f $myMakefile -C $BGreen${dir}$Color_Off"
            $realmake $args -f $myMakefile -C $dir
            return
        else
            prefix=../$prefix
        fi
    done
    $realmake $*
}

