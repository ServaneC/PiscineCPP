# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schene <schene@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/08 16:26:16 by schene            #+#    #+#              #
#    Updated: 2020/11/10 15:02:20 by schene           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	srcs/Zombie.cpp srcs/main.cpp srcs/ZombieHorde.cpp

OBJS		= ${SRCS:.cpp=.o}

RM			= rm -f

NAME		= ZombieHorde

CC			= clang++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			clean all

.PHONY:		all clean fclean re
