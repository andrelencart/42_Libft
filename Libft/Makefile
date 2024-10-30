# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/24 14:34:40 by andcarva          #+#    #+#              #
#    Updated: 2024/10/30 18:48:06 by andcarva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME="libft.a"
CC=cc
CFLAGS=-Wall -Wextra -Werror -g 
SRC= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isascii.c ft_isalpha.c \
		ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_strtrim.c \
		ft_split.c \
		
OBJ= $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	echo "Creating library $(NAME)"
	ar rcs $(NAME) $(OBJ)

clean:
	echo "Removing $(OBJ)"
	rm -rf $(OBJ)

fclean: clean
	echo "Removing $(NAME)"
	rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean all