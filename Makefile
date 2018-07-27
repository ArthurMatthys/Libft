# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/06/07 14:26:55 by amatthys     #+#   ##    ##    #+#        #
#    Updated: 2018/07/22 09:54:08 by amatthys    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

RELATIVE = .

SRC_PATH = src

SRC_NAME = 	ft_addmatrix.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_commatrix.c \
		ft_countwords.c \
		ft_creatematrix.c \
		ft_detmatrix.c \
		ft_dvpdet.c \
		ft_dvpmatrix.c \
		ft_freetab.c \
		ft_idmatrix.c \
		ft_initmatrix.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_lstadd.c \
		ft_lstdel.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_memalloc.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memdel.c \
		ft_memmove.c \
		ft_memset.c \
		ft_pow_int.c \
		ft_powmatrix.c \
		ft_printmatrix.c \
		ft_prodmatrix.c \
		ft_prodmatrix_int.c \
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
		ft_strequ.c \
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
		ft_tablen.c \
		ft_tmatrix.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_tracematrix.c \
		get_next_line.c \
		get_next_line_freaddon.c \
		is_in.c

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -g -Wall -Werror -Wextra
INC = includes
CPPFLAGS = -I $(INC)
NAME = libft.a

.PHONY: clean fclean all re

all : $(NAME)

$(NAME) : $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

%.o: %.c
		$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re : fclean all
