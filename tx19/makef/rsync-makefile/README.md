rsync-makefile

${PROJECT} is a C-Plane repository dir
${REPO} is the rsync-makefile repository local checkout

Setup:
* setup linsee in bashrc on your server https://bts.inside.nsn.com/twiki/bin/view/LTEeNB/HowToSetupLinsee
* Put a symlink to ${REPO}/makefile in ${PROJECT}/
* Copy ${REPO}/myCustomMakefile to ${PROJECT}/,
            adjust build host and other options in myCustomMakefile
* 'cd $PROJECT; make -f makefile test' to verify options
* now you can use 'make -f makefile'
* if you are using git repository you may want to use common_gitignore:
            create a symlink to ${REPO}/cplane_gitignore as ${PROJECT}/.gitignore
* now you are able to build all targets remotely by adding an undescore at the beginning of target name:
            e.g. if you want to build terget CELLCexe you  make -f makefile _CELLCexe
