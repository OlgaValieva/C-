# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carys <carys@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/08 17:10:45 by carys             #+#    #+#              #
#    Updated: 2023/04/10 15:21:50 by carys            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	btc

HEADER	=	BitcoinExchange.hpp

SRCS	=	main.cpp BitcoinExchange.cpp Date.cpp

OBJS	=	${SRCS:%.cpp=%.o} 

CC		=	c++

RM		=	rm -rf

CLR		=	\001\033[1;92m\002
RST		=	\001\033[0m\002

CPPFLAGS	=	-Wall -Wextra -Werror -g3 -std=c++98 

.PHONY:		all clean fclean re leaks fsanitize

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CPPFLAGS} -o ${NAME} ${OBJS}
			@printf "${CLR}"START" $(NAME)""${RST}\n"

%.o: %.cpp  $(HEADER) Makefile
			${CC} ${CPPFLAGS} -c $< -o $@

clean:
			@${RM} ${OBJS}
			@printf "${CLR}"'REMOVED '" $(NAME)""${RST}\n"

fclean:		clean
			@${RM} ${NAME}
			@printf "${CLR}"'FINISH '"$(NAME)""${RST}\n"

re:			fclean all
			@printf "${CLR}"REBOOT" $(NAME)""${RST}\n"

leaks :
			make
			leaks -atExit -- ./$(NAME) input.txt
			
fsanitize:  
			make
			@$(CC) ${CPPFLAGS}  -Wshadow -g -fsanitize=address $(OBJS) -o $(NAME)