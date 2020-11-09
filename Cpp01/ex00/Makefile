# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schene <schene@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/08 16:26:16 by schene            #+#    #+#              #
#    Updated: 2020/11/09 14:17:37 by schene           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=  Pony.cpp main.cpp

OBJS		= ${SRCS:.c=.o}

RM			= rm -f

NAME		= Pony

CC			= clang++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${FLAGS} ${OBJS}

clean:		
			${RM} ${NAME}

re:			clean all

.PHONY:		all clean re