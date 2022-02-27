# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsomrat <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 22:36:19 by lsomrat           #+#    #+#              #
#    Updated: 2022/02/28 00:49:39 by lsomrat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_strchr.c \
	  ft_strncmp.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memmove.c \
	  ft_memcpy.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_strnstr.c
OBJS	= ${SRCS:.c=.o}

COM	= gcc -Wall -Wextra -Werror

RM	= rm -f
.c.o:
	${COM} -c $< -o ${<:.c=.o}
	
$(NAME): ${OBJS}
	ar rc ${NAME} ${OBJS}

norminette:
	norminette ${SRCS}

all: ${NAME}

clean:
	${RM} ${NAME} ${OBJS}

fclean: clean
	${RM} ${NAME} ${OBJS}

re: fclean all

.PHONY: norminette all
