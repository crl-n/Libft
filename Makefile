# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnysten <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/31 20:50:24 by cnysten           #+#    #+#              #
#    Updated: 2021/11/02 12:52:24 by cnysten          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_isdigt.c ft_toupper.c ft_tolower.c ft_memset.c ft_bzero.c ft_atoi.c ft_memcpy.c ft_strlen.c

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	gcc -Wall -Wextra -Werror -c $(SRCS)

clean:
	/bin/rm $(OBJS)

fclean: clean
	/bin/rm $(NAME)

re: fclean all
