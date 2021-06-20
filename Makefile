# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/18 13:43:08 by jfritz            #+#    #+#              #
#    Updated: 2021/06/20 19:59:55 by jfritz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

CFLAGS = -Werror -Wall -Wextra
OBJS := $(*.o)

all: $(NAME)

${NAME}: *.c
	${CC} ${CFLAGS} -c *.c
	ar rc ${NAME} *.o
clean:
		rm -rvf *.o

fclean: clean
	/bin/rm -f $(NAME)
re: clean ${NAME}