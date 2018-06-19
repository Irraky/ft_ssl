# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drecours <drecours@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/19 19:08:34 by drecours          #+#    #+#              #
#    Updated: 2018/06/19 19:49:08 by drecours         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_ssl
CC		=	gcc
FLAGS	=	-Wall -Werror -Wextra

SRCS	=	\
src/main.c \
src/ft_strlen.c \
src/ft_putstr_fd.c \
src/error.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $(SRCS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all
