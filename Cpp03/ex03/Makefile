# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schene <schene@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/08 16:26:16 by schene            #+#    #+#              #
#    Updated: 2020/11/22 01:14:17 by schene           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= srcs/main.cpp srcs/FragTrap.cpp srcs/ScavTrap.cpp srcs/ClapTrap.cpp \
				srcs/NinjaTrap.cpp

OBJS		= ${SRCS:.cpp=.o}

RM			= rm -f

NAME		= NinjaTrap

CC			= clang++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

all:		${NAME}

${NAME}:	${OBJS}
			@${CC} ${CFLAGS} -o ${NAME} ${OBJS}
			@echo "✅ \033[32mCompilation Done, ./$(NAME) created.\033[0m"

%.o: %.cpp
			@${CC} ${CFLAGS} -c $< -o $@

clean:		
			@${RM} ${OBJS}
			@echo "✅ \033[32mObjects files deleted.\033[0m"


fclean:		clean
			@${RM} ${NAME}
			@echo "✅ \033[32mExecutable file deleted.\033[0m"

re:			clean all

.PHONY:		all clean fclean re
