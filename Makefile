# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnysten <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/31 20:50:24 by cnysten           #+#    #+#              #
#    Updated: 2021/11/01 15:08:33 by cnysten          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS):
	gcc -Wall -Wextra -Werror -c $(SRCS)

clean:
	/bin/rm $(OBJS)

fclean: clean
	/bin/rm $(NAME)

re: fclean all
