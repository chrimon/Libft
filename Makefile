# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chmondev <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/11 19:07:30 by chmondev          #+#    #+#              #
#    Updated: 2018/09/21 16:56:08 by chmondev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

GCC = gcc

REMO = rm -f

CFLAGS = -Wall -Wextra -Werror -c -I

SRC = ft_isdigit.c ft_strchr.c ft_strcpy.c ft_strncpy.c\
ft_toupper.c ft_memset.c ft_strcmp.c ft_strlen.c ft_tolower.c

OBJ = $(SRC:.c=.o) 

all: $(NAME)

$(NAME): $(OBJ)
	$(GCC) $(CFLAGS) $(SRC)
	ar rcs $(NAME) $(OBJ)
	
clean:
	$(REMO) $(OBJ)

fclean: clean
	$(REMO) $(NAME)

re: fclean all
