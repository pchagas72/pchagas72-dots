TERM_LOCATION=$HOME/.local/utilities/system-vars/default_term
TERM=$(cat $HOME/.local/utilities/system-vars/default_term)
if [[ "$TERM" == "" ]] ; then
	$(select_term)
fi
$($TERM)

