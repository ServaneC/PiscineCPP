# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schene <schene@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/08 16:26:16 by schene            #+#    #+#              #
#    Updated: 2020/11/10 17:09:26 by schene           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	srcs/Weapon.cpp srcs/HumanA.cpp \
				srcs/HumanB.cpp srcs/main.cpp

OBJS		= ${SRCS:.cpp=.o}

RM			= rm -f

NAME		= UnnecessaryViolence

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
