#!/bin/zsh

function addfunc() {
	echo "Adding" $1 "to Makefile and libft.h..."
	sed -i'' -e '/SRCS =/s/$/ '$1'.c/' Makefile
}
