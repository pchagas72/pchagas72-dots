PROMPT=$(echo -e "alacritty                 \nst" | dmenu -p "select default terminal")

if [ $PROMPT  == "st" ]; then
	echo "st" > $HOME/.local/utilities/system-vars/default_term

elif [ $PROMPT == "alacritty" ]; then
	echo "alacritty" > $HOME/.local/utilities/system-vars/default_term

fi
