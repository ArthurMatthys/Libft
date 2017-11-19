# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amatthys <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/18 17:40:49 by amatthys          #+#    #+#              #
#    Updated: 2017/11/18 18:22:58 by amatthys         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
.PHONY: clean
NAME = libft.a
SRC = *.c
HEADER = *.h
CC = gcc 
FLAG = -Wall -Wextra  -Werror

all : $(NAME)

$(NAME) :
	$(CC) -c $(FLAG) $(SRC)
	ar rc $(NAME) *.o
	ranlib $(NAME)
clean :
	rm -rf *.o *.gch
fclean : clean
	rm -rf $(NAME)
re : fclean all
