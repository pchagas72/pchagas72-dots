STATE_LOCATION=$HOME/.local/utilities/system-vars/mic_return_state
STATE=$(cat $HOME/.local/utilities/system-vars/mic_return_state)
if [[ "$STATE" == "0" ]] ; then
	pactl load-module module-loopback latency_msec=1
	echo "1" > $STATE_LOCATION
else
	pactl unload-module module-loopback
	echo "0" > $STATE_LOCATION
fi

