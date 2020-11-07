# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schene <schene@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/06 15:41:23 by schene            #+#    #+#              #
#    Updated: 2020/11/06 18:22:45 by schene           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= megaphone.cpp

OBJS		= ${SRCS:.c=.o}

RM			= rm -f

NAME		= megaphone

CC			= clang++

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${FLAGS} ${OBJS}

clean:		
			${RM} ${NAME}

re:			clean all

.PHONY:		all clean fclean re