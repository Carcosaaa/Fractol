# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoaljayo <aoaljayo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/16 18:12:19 by aoaljayo          #+#    #+#              #
#    Updated: 2017/08/09 22:21:24 by aoaljayo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC =	ft_swap.c \
		ft_atoi.c \
		ft_putchar_fd.c \
		ft_strlcat.c \
		ft_bzero.c \
		ft_putendl.c \
		ft_strlen.c \
		ft_isalnum.c \
		ft_putendl_fd.c \
		ft_strmap.c \
		ft_isalpha.c \
		ft_putnbr.c \
		ft_strmapi.c \
		ft_isascii.c \
		ft_putnbr_fd.c \
		ft_strncat.c \
		ft_isdigit.c \
		ft_putstr.c \
		ft_strncmp.c \
		ft_isprint.c \
		ft_putstr_fd.c \
		ft_strncpy.c \
		ft_itoa.c \
		ft_strcat.c \
		ft_strnequ.c \
		ft_memalloc.c \
		ft_strchr.c \
		ft_strnew.c \
		ft_strclr.c \
		ft_strnstr.c \
		ft_memccpy.c \
		ft_strcmp.c \
		ft_strrchr.c \
		ft_memchr.c \
		ft_strcpy.c \
		ft_strsplit.c \
		ft_memcmp.c \
		ft_strdel.c \
		ft_strstr.c \
		ft_memcpy.c \
		ft_strdup.c \
		ft_strsub.c \
		ft_memdel.c \
		ft_strequ.c \
		ft_strtrim.c \
		ft_memmove.c \
		ft_striter.c \
		ft_tolower.c \
		ft_memset.c \
		ft_striteri.c \
		ft_toupper.c \
		ft_putchar.c \
		ft_strjoin.c\
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_strndup.c \
		ft_lstputendl.c \
		ft_print_tab.c \
		ft_ishexa.c \
		ft_strjoin_free.c \
		get_next_line.c

OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	rm -rf $(OBJ)

all : $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
