# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schene <schene@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/23 15:00:16 by schene            #+#    #+#              #
#    Updated: 2020/11/27 14:21:09 by schene           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= srcs/main.cpp srcs/Sorcerer.cpp srcs/Victim.cpp srcs/Peon.cpp \
				srcs/Witch.cpp srcs/Toad.cpp

OBJS		= ${SRCS:.cpp=.o}

RM			= rm -f

NAME		= Polymorphism

CC			= clang++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}
			@echo "✅ \033[32mCompilation Done, ./$(NAME) created.\033[0m"

%.o: %.cpp
			${CC} ${CFLAGS} -c $< -o $@

clean:		
			@${RM} ${OBJS}
			@echo "✅ \033[32mObjects files deleted.\033[0m"


fclean:		clean
			@${RM} ${NAME}
			@echo "✅ \033[32mExecutable file deleted.\033[0m"

re:			clean all

.PHONY:		all clean fclean re