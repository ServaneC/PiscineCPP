# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schene <schene@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/29 13:53:44 by schene            #+#    #+#              #
#    Updated: 2020/12/14 16:33:46 by schene           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp

OBJS		= ${SRCS:.cpp=.o}

RM			= rm -f

NAME		= easyfind

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