BOOKMARKS=$(cat $HOME/.config/system-scripts/bookmarks.txt)
PROMPT_TEXT="a\na\na\n"
PROMPT=$(
	echo -e "add bookmark\nremove bookmark\n$BOOKMARKS" | dmenu;
)
if [ -z "$PROMPT" ]; then
	echo "Null input"
elif [ $PROMPT == "add bookmark" ]; then
	echo "Add bookmark function is yet to be created"
elif [ $PROMPT == "remove bookmark" ]; then
	echo "Remove bookmark function is yet to be created"
else
	firefox $PROMPT
fi
