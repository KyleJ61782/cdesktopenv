$ $XConsortium: dtact.msg /main/3 1995/11/08 14:04:58 rswiston $
$ ******************************************************************************
$ 
$ ***** NOTE FOR MESSAGE CATALOG TRANSLATORS *****
$ 
$ There may be thre types of messages in this file:
$ 
$ 1. Messages that appear in dialogs or are displayed to the user.
$ 
$    These messages are the default, and they should ALL BE LOCALIZED.
$    Note that these messages do NOT have any identification (see the
$    comments for type 2 and 3 below).
$ 
$ 2. Messages that only appear in the DT error log file ($HOME/.dt/errorlog).
$ 
$    The localization of these messages is OPTIONAL.  These message are
$    identified by the following:
$ 
$    MESSAGES xx-yy IN SET ZZ WILL ONLY APPEAR IN THE DT ERRORLOG FILE
$ 
$ 3. Messages that should not be localized.
$ 
$    These messages are identified by the following:
$ 
$    DO NOT TRANSLATE or CHANGE or LOCALIZE MESSAGES xx-yy from set zz
$ 
$ ***** END  (NOTE FOR MESSAGE CATALOG TRANSLATORS) *****
$ 
$ ******************************************************************************


$ ******************************************************************************
$ 
$ The following are the messages for the dtaction client.  Here are 
$ instructions for displaying each dialog:
$ 
$ 1) To display the dialog prompting for a user password, run dtaction
$    with the '-user <name>' option, where <name> is a valid login name
$    on your system.
$ 
$ 2) To display the invalid password dialog, follow the steps in (1), and
$    enter a bogus password; select the 'Ok' button.
$ 
$ 3) To display the unknown user dialog, run dtaction with the
$    '-user <name>' option, but specify a bogus <name>; i.e. one which
$    is not listed in /etc/passwd.
$ 
$ ******************************************************************************

$set 1

$ This is the format string used when logging a change of user to the
$ file /usr/adm/sulog; it is written to the sulog file anytime the '-user'
$ option is used.  The fields are:
$  <appl Name> <month>/<day> <hour>:<min> <success> <tty> <old Name> <new Name>
$ The only fields which need to be customized are the date and time fields.
1 dtaction %1$，2d/%2$，2d %3$，2d：%4$，2d %5$1，1s %6$s %7$s--%8$s\n

$ This is the label for the Ok button in the dialogs which collect
$ the user's password, the invalid password dialog, and the unknown user
$ error dialog.
2 確定

$ This is the label for the error dialog which occurs when the user enters
$ and invalid password into the password dialog.
3 您鍵入的密碼與使用者的密碼不相符。%s.\n\n請重新鍵入密碼，或選擇\n"取消"鍵以結束操作。

$ This is the title for the password error dialog
4 動作調用器 -- 密碼錯誤

$ This is the label displayed in the prompt dialog, used to collect the
$ user's password.
5 請鍵入使用者密碼 %s：

$ This is the title for the prompt dialog collecting the user's password.
6 動作調用器 -- 密碼

$ This is the label for the Cancel button in the dialog which is used to
$ collect the user's password.
7 取消

$ This is the message displayed in the 'unknown user' dialog
8 使用者 '%s' 為一個不明的使用者名稱。\n\n被要求的動作將不會被執行。

$ This is the title for the 'unknown user' dialog
9 動作調用器 -- 不明的使用者

$ This is for when the user has failed to supply an action name
10 未指定動作名稱。\n
$ This is for when we are unable to open the display
11 無法開啟顯示器。


