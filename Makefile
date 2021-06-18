# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/18 13:43:08 by jfritz            #+#    #+#              #
#    Updated: 2021/06/18 14:50:11 by jfritz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

CFLAGS = -Werror -Wall -Wextra
OBJS := $(SRCS:.c=.o)

${NAME}: *.c
	${CC} ${CFLAGS} -c *.c
	ar rc ${NAME} ${OBJS}

clean:
		rm -rvf *.o ${BINS}

re: clean all