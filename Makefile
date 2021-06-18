# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/18 13:43:08 by jfritz            #+#    #+#              #
#    Updated: 2021/06/18 14:38:27 by jfritz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

CFLAGS = -Werror -Wall -Wextra

SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)

%: ${OBJS}
	${CC} ${CFLAGS} $< -o $@.o

${NAME}: %
	@ar rc ${NAME} ${OBJS}

clean:
		rm -rvf *.o ${BINS}

re: clean all