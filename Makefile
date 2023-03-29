# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 10:46:58 by aalamino          #+#    #+#              #
#    Updated: 2023/03/22 18:33:27 by aalamino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
COMMAND = gcc -Wall -Wextra -Werror -I. -c
FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcpy.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUSFILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back ft_lstdelone.c ft_lstclear ft_lstiter.c ft_lstmap.c

OBJ = $(FILES:%.c=%.o)

OBJBONUS = $(BONUSFILES:%.c=%.o)

all:$(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

bonus: $(OBJBONUS)
	ar rcs $(LIB) $(NAME) $(OBJBONUS) $(OBJ)

$(OBJ): $(FILES)
	$(COMMAND) $(FILES)

clean:
	rm $(OBJ) $(OBJBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: clean fclean all bonus re cleanbonus
