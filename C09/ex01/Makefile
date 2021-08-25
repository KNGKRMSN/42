# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mprud-ho <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 16:23:18 by mprud-ho          #+#    #+#              #
#    Updated: 2021/08/24 12:50:15 by mprud-ho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= libft.a
SRCS	= ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_swap.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}
HEADER	= ./includes/ft.h
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ./includes/
${NAME}:	${OBJS}
	ar rc ${NAME} ${OBJS}
all: ${NAME}
clean:
			${RM} ${OBJS}
fclean:			clean
			${RM} ${NAME}
re: fclean all
.PHONY: all clean fclean re
