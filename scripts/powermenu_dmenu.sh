PROMPT=$(echo -e "lock-screen                 \nlogout\nreboot\nshutdown" | dmenu -p "powermenu")

if [ $PROMPT  == "shutdown" ]; then
	shutdown now

elif [ $PROMPT == "reboot" ]; then
	reboot

elif [ $PROMPT == "logout" ]; then
	loginctl kill-session self

elif [ $PROMPT == "lock-screen" ]; then
	slock -m "$(cowsay 'The screen is locked')"

fi
