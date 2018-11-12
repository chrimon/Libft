# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chmondev <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/11 19:07:30 by chmondev          #+#    #+#              #
#    Updated: 2018/11/12 15:12:17 by chmondev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

REMO = rm -f

CFLAGS = -Wall -Wextra -Werror -c -I

SRC = ft_memalloc.c ft_putendl.c ft_strcpy.c ft_strmapi.c ft_strsub.c ft_memccpy.c \
ft_putendl_fd.c ft_strdel.c ft_strncat.c \
ft_strtrim.c ft_atoi.c ft_memchr.c ft_putnbr.c ft_strdup.c ft_strncmp.c ft_tolower.c \
ft_bzero.c ft_memcmp.c ft_putnbr_fd.c ft_strequ.c ft_strncpy.c ft_toupper.c \
ft_isalnum.c ft_memcpy.c ft_putstr.c ft_striter.c ft_strnequ.c \
ft_isalpha.c ft_memdel.c ft_putstr_fd.c ft_striteri.c ft_strnew.c \
ft_isascii.c ft_memmove.c ft_strcat.c ft_strjoin.c ft_strnstr.c \
ft_isdigit.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strrchr.c \
ft_isprint.c ft_putchar.c ft_strclr.c ft_strlen.c ft_strsplit.c \
ft_itoa.c ft_putchar_fd.c ft_strcmp.c ft_strmap.c ft_strstr.c \
ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c \

OBJ = $(SRC:.c=.o) 

all: $(NAME) 

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(REMO) $(OBJ)

fclean: clean
	$(REMO) $(NAME)

re: fclean all
