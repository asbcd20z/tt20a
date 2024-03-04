'##
'vtKeyboard
'alias tk='wscript /c/xd/_nr/bin/ggg/vtKeyboard.vbs'
Dim c
c=5*10
Set objArgs = WScript.Arguments
if objArgs.count then c=objArgs(0) end if
'msgbox objArgs.count & objArgs(0) & int(c)
'在vbs文件中传递参数  https://www.cnblogs.com/mq0036/p/16077256.html
'Msgbox(Inputbox("val=", "input:"))
'msgbox Now&Time
'==
Set objShell = CreateObject("WScript.Shell")
WScript.Sleep 200
objShell.SendKeys Time & "T"

'==
Set WshShell = WScript.CreateObject("WScript.Shell")
'WshShell.Run "mouse.exe m,200,50"
'WshShell.Run "taskkill -f -t -im WScript.exe", 0, true
'bat: tasklist |findstr -i wscript; taskkill -f -t -im wscript.exe; tasklist |findstr wscript
'shell: alias tk=" wscript ./vtKeyboard.vbs "  (cankill, ctrl-c)
'
for i=1 to 5*10 *01
WScript.Sleep 6000*2  '//6s*2per,  *5=1m, *10===10m
'
WshShell.SendKeys i&"s=="
'WshShell.SendKeys "{F1}";  WshShell.SendKeys "{Fn}{F1}"; 
'WshShell.SendKeys "{CAPSLOCK}"; 
'WshShell.SendKeys "^V" & "%s"   'SHIFT +, CTRL ^, 'ALT %
'WshShell.SendKeys 1
next
'vbs模拟键盘和鼠标输入 https://blog.csdn.net/qq_42662283/article/details/106537827


'
'==
sub myfoo(a)
	msgbox a
end sub

'
'==
sendMouse()
sub sendMouse()
'WScript.Sleep 3000
Set mouse= New SetMouse
mouse.getpos x,y  'get
MsgBox x & "," & y
end sub



