# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnysten <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/31 20:50:24 by cnysten           #+#    #+#              #
#    Updated: 2022/07/28 22:37:16 by carlnysten       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

CC := gcc
CFLAGS := -Wall -Wextra -Werror

NAME = libft.a
INC = -I.

SRCS = ft_atoi.c \
	   ft_intlen.c \
	   ft_strndup.c \
	   ft_islower.c \
	   ft_isupper.c \
	   ft_bzero.c \
	   ft_intlen_base.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_itoa.c \
	   ft_itoa_base.c \
	   ft_lstadd.c \
	   ft_lstadd_back.c \
	   ft_lstdel.c \
	   ft_lstdelone.c \
	   ft_lstget.c \
	   ft_lstiter.c \
	   ft_lstmap.c \
	   ft_lstnew.c \
	   ft_lstpop.c \
	   ft_lstpop_left.c \
	   ft_lstsize.c \
	   ft_memalloc.c \
	   ft_memccpy.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memcpy.c \
	   ft_memdel.c \
	   ft_memmove.c \
	   ft_memset.c \
	   ft_putchar.c \
	   ft_putchar_fd.c \
	   ft_putendl.c \
	   ft_putendl_fd.c \
	   ft_putnbr.c \
	   ft_putnbr_fd.c \
	   ft_putstr.c \
	   ft_putstr_fd.c \
	   ft_strcat.c \
	   ft_strchr.c \
	   ft_strclr.c \
	   ft_strcmp.c \
	   ft_strcpy.c \
	   ft_strdel.c \
	   ft_strdup.c \
	   ft_strequ.c\
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strjoin.c \
	   ft_strlcat.c \
	   ft_strlen.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strncat.c \
	   ft_strncmp.c \
	   ft_strncpy.c \
	   ft_strnequ.c \
	   ft_strnew.c \
	   ft_strnstr.c \
	   ft_strrchr.c \
	   ft_strsplit.c \
	   ft_strstr.c \
	   ft_strsub.c \
	   ft_strtrim.c \
	   ft_tolower.c \
	   ft_toupper.c \
	   array2d.c \
	   vec_new.c \
	   vec_free.c \
	   vec_get.c \
	   vec_rev.c \
	   vec_iter.c \
	   vec_reduce.c

OBJ_DIR = ./objs
OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS) 
	ar rc $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: %.c
	$(CC) -c $(CFLAGS) $(INC) $< -o $@

$(OBJ_DIR):
	mkdir $@

clean:
	-/bin/rm -rf $(OBJ_DIR)

fclean: clean
	-/bin/rm -f $(NAME)

re: fclean all
