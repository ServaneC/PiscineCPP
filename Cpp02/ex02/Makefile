# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schene <schene@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/08 16:26:16 by schene            #+#    #+#              #
#    Updated: 2020/11/13 21:34:35 by schene           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	srcs/Fixed.cpp srcs/main.cpp

OBJS		= ${SRCS:.cpp=.o}

RM			= rm -f

NAME		= ex02

CC			= clang++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

all:		${NAME}

${NAME}:	${OBJS}
			@${CC} ${CFLAGS} -o ${NAME} ${OBJS}
			@echo "✅ \033[32mCompilation Done, ./ex02 created.\033[0m"

%.o: %.cpp
			@${CC} ${CFLAGS} -c $< -o $@

clean:		
			@${RM} ${OBJS}
			@echo "✅ \033[32m.o files deleted.\033[0m"


fclean:		clean
			@${RM} ${NAME}
			@echo "✅ \033[32mExecutable file deleted.\033[0m"

re:			clean all

.PHONY:		all clean fclean re
