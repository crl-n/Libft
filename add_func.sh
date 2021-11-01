#!/bin/zsh

function addfunc() {
	# Get filename without extension
	name=$(echo $1 | cut -d. -f1)

	# Add filename to Makefile if it's not already there
	if ! grep -q $1 Makefile
	then
		sed -i'' -e '/SRCS =/s/$/ '$1'/' Makefile
		echo "Adding" $1 "to Makefile..."
		rm Makefile-e
	fi
	
	# Add prototype to libft.h if it's not already there
	echo "Getting prototype from "$1
	proto=$(sed -n '/'$name'(/p' < $1)';'
	echo "Prototype: "$proto
	if ! grep -q $name libft.h
	then
		echo "Adding to libft.h..."
		sed -i'' -e '/function prototypes/a\
			'$proto'
			' libft.h
		rm libft.h-e
	fi
}
