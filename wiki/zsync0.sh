#!/bin/bash
#
#sh -x ../zsync
##lz,v2020.10.21a-git
#function: sync checkout-source-code from one trunk on local windows-pc to another trunk on linux(but shared by samba)
#attention: 1.trunk with same release version; 2.the file should be newer on local windows-pc if it needs updated by this script
#precondition: 'pwd(./)' is the checkout-trunk on local windows-pc(by tortoiseSVN), and $rpath is checkout-trunk with same release version on linux(linsee,so it can be compiled on linux),and $rpath is shared mapping by samba(linux's smbd service). so we can cp files from 'pwd' to $rpath easilly
#work-steps: 1.edit files on trunk of local windows-pc with source-insight quickly. 2.sync svn-diff files(only newer) to $rpath trunk. 3.then compile on linux
#attention: if files in local 'pwd' is reverted, do it on remote manual. (svn diff can find the files without changes)
rpath="z:/tw/trunk/"
#f=Makefile.local

fcp()
{
v=$1
echo -e "\n====  $v"
#rpath=lzhao019@hzling525.china.nsn-net.net:/var/fpwork/lzhao019/tw/trunk/; rsync -a $v $rpath/$v
#rpath=lzhao019@hzling525.china.nsn-net.net:/var/fpwork/lzhao019/tw/trunk/; scp -p $v $rpath/$v
rpath=cplanesh09.eecloud.dynamic.nsn-net.net:/var/fpwork/lzhao019/tw/trunk/;  rsync -a $v $rpath/$v
#if [ "$v" -nt "$rpath/$v" ] ;then bash -x -c "  cp  $v $rpath/$v"; fi
#ls -l $v $rpath/$v
}
#fcp Makefile.local; exit 0;

#C_Test/cplane_k3/src/TestTargets/RROM/testcases/LBT5458_DynamicShaperControl.ttcn3
catzz()
{
cat<<eot
C_Application/SC_RROM/CP_LomManagement/Source/RromLomMgmtSessionFsm.cpp-
C_Application/SC_Common/Scripts/gencode/gencode_settings.py-
C_Test/cplane_k3/src/TestTargets/RROM/templates/npf/CDNL_BTS_XCells.ttcn3
C_Test/cplane_k3/src/TestTargets/RROM/templates/NpfConfigValues.ttcn3
C_Test/cplane_k3/src/TestTargets/RROM/testcases/LTE4738_GSMLTEDynamicSpectrumSharing.ttcn3-

eot
}

main()
{
#C_Application/SC_UEC/CP_Utilities/CP_RrcMsgBuilder/Test_modules/UecOtherConfigR9ExtensionAdditionFillerTestSuite.cpp
for f in `svn diff|grep 'Index:'|cut -d' ' -f2`  `catzz`;  #it's better to save the differrence filename into a file,then can edit the file.such as add '#' to remove filename from the list in the file
#for f in `cat ../zz`;
do
  fcp $f
 #sleep 1
done
}

main2()
{
echo >ylist.txt
#svn diff|grep 'Index:'|cut -d' ' -f2 >ylist.txt
catzz >>ylist.txt
sed -i -e'/cplaneLogger/s|$|-|'  ylist.txt
bash -xc 'cat ylist.txt'
echo

#rpath=cplanesh09.eecloud.dynamic.nsn-net.net:/var/fpwork/lzhao019/tw/trunk/;
rpath=cplanesh02.eecloud.dynamic.nsn-net.net:/var/fpwork/lzhao019/tw/trunk/;
#echo rsync -a --include-from= $v $rpath/$v
#echo rsync -nrvCtaz --stats `cat ylist.txt` $rpath/$v
 rsync -rvCtaz --stats --files-from=ylist.txt . $rpath/
}

#alias svn='/cygdrive/c/Program\\x20Files/TortoiseSVN/bin/svn'
#svn h




catzz3()
{
cat<<eot |egrep -v '\-$'
cplane/CP-RT/CP-RT/SCT/Ttcn3/messages/F1APControlMessages.ttcn3--
cplane/CP-RT/CP-RT/src/services/ue_mgmt/ue_procedures/ue_modify/src/modify/Init.cpp--
aaa--
itf/l2/ps/cell/CellSetupReq.mt-
itf/l2/ps/cell/DlInterferenceAvoidance.mt-
cplane/CP-RT/CP-RT/src/services/ue_mgmt/ue_procedures/du_initiated_reconfig--
eot
}


main3()
{
local x=`dirname $0`; local y=$x/ylist.txt
echo >$y
#svn diff|grep 'Index:'|cut -d' ' -f2 >$y
#git diff --name-only HEAD >$y
#bash -xc "git diff --name-only HEAD >$y"
#bash -xc "git diff --name-only origin/master >$y"
#
#bash -xc "git diff --name-only origin/master cplane/  itf/l2/ps/cell/ >$y"
#bash -xc "git diff --name-only origin/master cplane/  itf/l2/ps/ >$y"
bash -xc "git diff --name-only origin/master cplane/CP-RT/  itf/l2/ps/ >$y"
#bash -xc "git diff --name-only origin/master cplane/CP-RT/CP-RT/SCT/  itf/l2/ps/ >$y"
#
catzz3 >>$y
sed -i -e'/cplaneLogger/s|$|-|'  $y
sed -i -e'/CPRT_Design_Document_20B.adoc/ s|$|-|'  $y
sed -i -e'\!cplane/CP-RT/CP-RT/src/services/ue_mgmt/ue_procedures/ue_modify/src/modify/Init.cpp! s|$|-|'  $y
sed -i -e'!cplane/CP-RT/CP-RT/src/services/ue_mgmt/ue_procedures/common/include/common/msg_builders/UeBearer.hpp! s|$|-|'  $y
sed -i -e'/UeBearer.hpp/ s|$|-|'  $y
#sed -i -e'/NiddConfig.cpp/ s|$|-|'  $y
#sed -i -e'/NiddConfigTests.cpp/ s|$|-|'  $y
#sed -i -e'/CsiRsTrackingResource.cpp/ s|$|-|'  $y
#
#bash -xc "cat $y"
bash -xc "nl $y"
cat $y|xargs ls -lrt|tail -1  ##show the latest file modifed
date
echo

#rpath=cplanesh09.eecloud.dynamic.nsn-net.net:/var/fpwork/lzhao019/tw/trunk/;
#rpath=cplanesh02.eecloud.dynamic.nsn-net.net:/var/fpwork/lzhao019/tw/trunk/;
#rpath=hzlinb47.china.nsn-net.net:/var/fpwork/lzhao019/t/nr/gnb/
#rpath=10.183.68.25:/var/fpwork/lzhao019/nr4/gnb/
rpath=10.183.68.25:/var/fpwork/lzhao019/t/nr/gnb/
rpath=10.183.68.25:/ephemeral/workspace/lzhao019/nr5/gnb/
rpath=10.183.67.66:/ephemeral/workspace/lzhao019/nr6/gnb
rpath=10.182.65.71:/ephemeral/workspace/lzhao019/nr71/gnb/
rpath=10.182.67.77:/ephemeral/workspace/lzhao019/nr7/gnb
#rpath=10.182.68.88:/ephemeral/workspace/lzhao019/nr7/gnb
rpath=10.182.67.77:/ephemeral/workspace/lzhao019/nr8/gnb
#rpath=10.182.67.77:/ephemeral/workspace/lzhao019/nr7/gnb
#rpath=10.182.65.71:/ephemeral/workspace/lzhao019/nr71/gnb/

#pwd
# //log location for download
#echo rsync -rvCtaz --stats $rpath/cplane/b2cu/sctworkingdir/cp_ue/logs ./
#echo ==scp -pr $rpath/cplane/b2cu/sctworkingdir/cp_ue/logs ./
#echo  scp -pr 10.182.67.77:/ephemeral/workspace/lzhao019/nr8/gnb//build/cprt_sct  ./
echo 'date; scp -pr 10.182.65.71:/ephemeral/workspace/lzhao019/nr71/gnb///cplane/b1rt/sctworkingdir/cp_rt/logs/*-1  ./logs/'
echo ==scp -pr $rpath//build/native/cprt/sct/sctworkingdir/cp_rt/logs ./
echo =="date; scp -pr $rpath//build/cprt_sct ./ ; date"
# //sync source-code
echo ==pwd:$PWD ==$rpath//cplane/b1rt
#echo rsync -a --include-from= $v $rpath/$v
##echo rsync -nrvCtaz --stats `cat ylist.txt` $rpath/$v
#pwd
echo  rsync -rvCtaz --stats --exclude=build/cprt_sct/cp_rt-*  --files-from=$y  .  $rpath/
echo;  rsync -rvCtaz --stats --exclude=build/cprt_sct/cp_rt-*  --files-from=$y  .  $rpath/



#== run
echo -e "\n\n\n==ssh.exec==[$#,$*]" `date`
echo $* ///$#,!$#,!$1
echo sleep...; sleep 3; #pause.yes?
#//exit
if [ $1 ]; then exit; fi
##
##
#ssh 10.182.65.71 'cd /ephemeral/workspace/lzhao019/nr71/gnb; pwd; time ./gnb_build/build.py --icecc cplane cprt sct build'
#ssh 10.182.65.77 'cd /ephemeral/workspace/lzhao019/nr71/gnb; pwd; time ./gnb_build/build.py --icecc cplane cprt sct -b stable -p TestSaCa4CCTddAnyFr1.rt_  run --no-config'
#ssh 10.182.67.77 'cd /ephemeral/workspace/lzhao019/nr7/gnb; pwd; time ./gnb_build/build.py --icecc cplane cprt sct -b stable -p TestSaCarrierAggregationInterL2PcellTdd3cc.rtx  run --no-config'
#
#exit 0
#ssh 10.182.67.77 'cd /ephemeral/workspace/lzhao019/nr8/gnb; pwd; gbuild cprt sct rt_1Tx2Rx'
#ssh 10.182.67.77 'cd /ephemeral/workspace/lzhao019/nr8/gnb; pwd; gbuild cprt sct rty4'
#gbuild cprt ut ue_mgmt_ue_procedures_ue_setup_msg_builders_2_tests
#
# set -x; pwd; export HOSTNAME=rhel-7;  time gbuild cprt sct --repeat-count 3  enhancement_subband_SRSbeamforming_with_MMSE$ --docker
#--repeat-count=199  --docker ##or, -fail -r 199
#gbuild cprt sct -fail -m 300 --docker ###
#retry for failure, gbuild cprt sct -retry / gbuild cpue sct casename -retry
#usage: build.py cplane cprt sct [-h] [-f TC_FILE] [-p SCT_PATTERN] [-b TEST_BASKET] [-r REPEAT_COUNT] [-R] [-m MAX_FAIL] [--mfa] [--mariposa] [--mariposa_base] [--k3DeepDecoder] [--ctags] [-L]
#                                [--last-failed] [--profile-callgrind]
#
#./gnb_build/build.py cplane cprt ut -t  msg_builders_UT -f  *testPucchConfigDss*   -s run
#gbuild cprt ut/sct
#gbuild cprt ut  PsUserUserSetupReqBuilderTests.cpp  --docker
#ggbuild cprt ut systemInfoConfig_UT  LongPucchCalculatorParametersTests.cGType2NotSupportedByNSA
#--- docker-compose run --rm hz-bash bash -c "source ~/.bashrc;/home/lzhao019/wa5g/bin/gbuild cprt sct rt_sa_ca_2cc_TddFdd_tasSwitch_from_wideBand_to_AperiodicSrs_with_drx_UeCsirsToCellCsirs" ---
#ssh 10.182.67.77 'cd /ephemeral/workspace/lzhao019/nr8/gnb; set -x; pwd; export xHOSTNAME=rhel-7;env >~/tmp/env.ssh;  time gbuild cpue  sct ue_testSaIntraGnbInterDuHo_with5QI80$  --docker'
#time gbuild cpue  sct ue_testSaIntraGnbInterDuHo_with5QI80  --docker
#
#ssh 10.182.67.77 'cd /ephemeral/workspace/lzhao019/nr8/gnb; set -x; pwd; export HOSTNAME=rhel-7;env >~/tmp/env.ssh;  time gbuild cpue  sct ue_xx8  --docker'
#ssh 10.182.67.77 'cd /ephemeral/workspace/lzhao019/nr8/gnb; set -x; pwd; export HOSTNAME=rhel-7;env >~/tmp/env.ssh;  time gbuild cprt  sct rt_xx8   --docker; rm build/cprt_sct/cp_rt-*'


#sct
#ssh 10.182.67.77 'cd /ephemeral/workspace/lzhao019/nr8/gnb; set -x; pwd; export HOSTNAME=rhel-7;env >~/tmp/env.ssh;  time gbuild cprt  sct TestSrsBasedDlRealtimeBeamforming.rt_sa_interworking_tasSrsResource_wideBand_to_subBand_aperiodicSrs_UeCsiRsToCellCsiRs_aperiodicCSIReportExisted  --docker; rm build/cprt_sct/cp_rt-*'
##
#TestCsiRsAllocationOptimization
#ssh 10.182.67.77 'cd /ephemeral/workspace/lzhao019/nr8/gnb; set -x; pwd; export HOSTNAME=rhel-7;env >~/tmp/env.ssh;  time gbuild cprt  sct    --docker; rm build/cprt_sct/cp_rt-*'


#ut
#ssh 10.182.67.77 'cd /ephemeral/workspace/lzhao019/nr8/gnb; set -x; pwd; export HOSTNAME=rhel-7;env >~/tmp/env.ssh;  time gbuild cprt  ut cell_group_config_builder_UT   --docker; rm build/cprt_sct/cp_rt-*'
ssh 10.182.67.77 'cd /ephemeral/workspace/lzhao019/nr8/gnb; set -x; pwd; export HOSTNAME=rhel-7;env >~/tmp/env.ssh;  time gbuild cprt  ut    --docker; rm build/cprt_sct/cp_rt-*'




#??
#rt_sa_drx_activate,rt_sa_fr1TddFdd_SCellAdditionRelease_With_ACSIStatusChanged_ByPcellDegrade$
#ssh 10.182.67.77 'cd /ephemeral/workspace/lzhao019/nr8/gnb; set -x; pwd; export HOSTNAME=rhel-7;env >~/tmp/env.ssh;  time gbuild cprt  sct   --docker; rm build/cprt_sct/cp_rt-*'
#
#ssh 10.182.67.77 'cd /ephemeral/workspace/lzhao019/nr8/gnb; set -x; pwd; export HOSTNAME=rhel-7;env >~/tmp/env.ssh;  time gbuild cprt  ut  --docker'
#ssh 10.182.67.77 'cd /ephemeral/workspace/lzhao019/nr8/gnb; set -x; pwd; export HOSTNAME=rhel-7;env >~/tmp/env.ssh;  time gbuild cprt  ut  makeSrsConfigWbCLPC  --docker'
#ssh 10.182.67.77 'cd /ephemeral/workspace/lzhao019/nr8/gnb; set -x; pwd; export HOSTNAME=rhel-7;env >~/tmp/env.ssh;  time gbuild cprt  ut  srsTasWideBandforCLPC  --docker'



#cpue
#ssh 10.182.65.71 'cd /ephemeral/workspace/lzhao019/nr71/gnb; set -x; pwd; export HOSTNAME=rhel-7;env >~/tmp/env.ssh;  time gbuild cpue  sct ue_xx1  --docker'



#scp -pr 10.182.67.77:/ephemeral/workspace/lzhao019/nr8/gnb//build/cprt_sct/  /cygdrive/c/xd/_nr/_log0aa/220530a/./
date
}


date
main3 "$*"
echo
exit 0;

#scp -pr  /c/temp/20190412.diff 10.183.68.25:tmp/
#scp -pr 10.182.67.77:/ephemeral/workspace/lzhao019/nr8/gnb//build/native/cprt/sct/sctworkingdir/cp_rt/logs ./
#scp -pr 10.182.67.77:/ephemeral/workspace/lzhao019/nr8/gnb//build/cprt_sct/  ./

##https://www.cnblogs.com/konrad/p/6901273.html
##for-cygwin:install rsync+ssh; ssh-setup-rlogin-without-pw[1.ssh-keygen(create id_rsa+id_rsa.pub), 2.ssh-copy-id remote-ip(local"known_hosts" yes simultaneously)(or:cat id_rsa.pub, then ssh remote-ip, and append id_rsa.pub text to remote"authorized_keys" manually.)]
#

