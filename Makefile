# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 10:46:58 by aalamino          #+#    #+#              #
#    Updated: 2023/03/11 11:01:48 by aalamino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
COMMAND = cc -Wall -Wextra -Werror -I, -c
FILES = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcpy.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c
OBJ = $(FILES:%.c=%.o)

all:$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	echo "Compilando libft"

$(OBJ): $(FILES)
	$(COMMAND) $(FILES)
	echo "Compilando libft"

clean:
	rm $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re