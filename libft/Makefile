# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/04 12:58:49 by imoro-sa          #+#    #+#              #
#    Updated: 2023/01/04 12:50:26 by imoro-sa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_atoi.c					ft_bzero.c				ft_calloc.c				ft_isalnum.c			ft_isalpha.c			\
		ft_isascii.c				ft_isdigit.c			ft_isprint.c			ft_itoa.c				ft_lstadd_back_bonus.c	\
		ft_lstadd_front_bonus.c		ft_lstclear_bonus.c		ft_lstdelone_bonus.c	ft_lstiter_bonus.c		ft_lstlast_bonus.c		\
		ft_lstmap_bonus.c			ft_lstnew_bonus.c		ft_lstsize_bonus.c		ft_memchr.c ft_memcmp.c ft_memcpy.c				\
		ft_memmove.c				ft_memset.c				ft_putchar_fd.c			ft_putendl_fd.c			ft_putnbr_fd.c			\
		ft_putstr_fd.c				ft_split.c				ft_strchr.c				ft_strdup.c				ft_striteri.c			\
		ft_strjoin.c				ft_strlcat.c			ft_strlcpy.c			ft_strlen.c				ft_strmapi.c			\
		ft_strncmp.c				ft_strnstr.c			ft_strrchr.c			ft_strtrim.c			ft_substr.c				\
		ft_tolower.c				ft_toupper.c			ft_substr.c				ft_tolower.c			ft_toupper.c			\
		ft_call.c					ft_cap_hex.c			ft_char.c				ft_decimal.c			ft_integer.c			\
		ft_lower_case_hex.c			ft_pointer.c			ft_printf.c				ft_string.c				ft_unsigned.c			\
		get_next_line.c				get_next_line_utils.c

OBJT = $(SRC:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

MAKEFLAGS += --quiet

all: $(NAME)

$(NAME): $(OBJT)
	$(CC) $(CFLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJT)

clean:
	$(RM) $(OBJT)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean bonus re
