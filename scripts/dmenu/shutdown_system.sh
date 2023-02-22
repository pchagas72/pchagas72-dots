PROMPT=$(echo -e "Shutdown\nReboot\nLogout" | dmenu -p "Choose")

if [ $PROMPT  == "shutdown" ]; then
	shutdown now

elif [ $PROMPT == "reboot" ]; then
	reboot

elif [ $PROMPT == "logout" ]; then
	logout

fi
