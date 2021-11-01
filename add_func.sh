#!/bin/zsh

function addfunc() {
	echo "Adding" $1 "to Makefile..."
	name=$(echo $1 | cut -d. -f1)
	sed -i'' -e '/SRCS =/s/$/ '$1'/' Makefile
	fname=$1
	echo "Getting prototype from "$fname
	proto=$(sed -n '/'$name'(/p' < $fname)';'
	echo "Prototype: "$proto
	echo "Adding to libft.h..."
	sed -i'' -e '/function prototypes/a\
		'$proto'
	' libft.h
	rm Makefile-e libft.h-e
}
