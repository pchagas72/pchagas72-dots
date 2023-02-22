PROMPT=$(echo -e "shutdown                 \nreboot\nlogout\nlock-screen" | dmenu -p "powermenu")

if [ $PROMPT  == "shutdown" ]; then
	shutdown now

elif [ $PROMPT == "reboot" ]; then
	reboot

elif [ $PROMPT == "logout" ]; then
	loginctl kill-session self

elif [ $PROMPT == "lock-screen" ]; then
	slock

fi
