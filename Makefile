# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/18 13:43:08 by jfritz            #+#    #+#              #
#    Updated: 2021/06/18 14:13:01 by jfritz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc                        # compiler to use

CFLAGS = -Werror -Wall -Wextra -c

SRCS := $(wildcard *.c)
BINS := $(SRCS:%.c=%.o)

all: ${BINS}

%: %.o
		${CC} ${CFLAGS} $< -o $@.o

$(NAME)/%.o: %.c
		${CC} -c $<$.o

clean:
		rm -rvf *.o ${BINS}