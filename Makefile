# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-baz <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/18 20:05:33 by zel-baz           #+#    #+#              #
#    Updated: 2024/01/01 02:08:57 by zel-baz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I libft.h
AR = ar crs
RM = rm -rf

FILES = ft_isalpha.c ft_isdigit.c \
		ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c \
		ft_toupper.c ft_tolower.c \
		ft_atoi.c ft_bzero.c \
		ft_memset.c ft_strchr.c \
		ft_strrchr.c ft_memchr.c \
		ft_memcmp.c ft_strncmp.c \
		ft_strlcpy.c ft_strlcat.c \
		ft_strnstr.c ft_calloc.c \
		ft_memcpy.c ft_strdup.c \
		ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_memmove.c \
		ft_striteri.c ft_strmapi.c \
		ft_lstnew.c ft_itoa.c

OBJ = $(FILES:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
