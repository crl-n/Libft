# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnysten <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/31 20:50:24 by cnysten           #+#    #+#              #
#    Updated: 2021/11/22 13:31:34 by cnysten          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c \
	   ft_lstmap.c \
	   ft_strstr.c \
	   ft_strncat.c \
	   ft_putendl.c \
	   ft_strnequ.c \
	   ft_strmap.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strclr.c \
	   ft_strdel.c \
	   ft_strnew.c \
	   ft_memdel.c \
	   ft_lstiter.c \
	   ft_lstadd.c \
	   ft_lstdelone.c \
	   ft_lstdel.c \
	   ft_lstnew.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_isdigit.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_atoi.c \
	   ft_memcpy.c \
	   ft_strlen.c \
	   ft_putchar.c \
	   ft_putstr.c \
	   ft_putchar_fd.c \
	   ft_putnbr.c \
	   ft_putstr_fd.c \
	   ft_memalloc.c \
	   ft_strdup.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strncmp.c \
	   ft_strlcat.c \
	   ft_strnstr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_strmapi.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_strcat.c \
	   ft_strcpy.c \
	   ft_itoa.c \
	   ft_strsplit.c \
	   ft_strncpy.c \
	   ft_strcmp.c \
	   ft_strequ.c\
	   ft_strsub.c

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	gcc -Wall -Wextra -Werror -c $(SRCS)
	ar rc $(NAME) $(OBJS)

clean:
	-/bin/rm $(OBJS)

fclean: clean
	-/bin/rm $(NAME)

re: fclean all
