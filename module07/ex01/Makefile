# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carys <carys@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 10:52:33 by carys             #+#    #+#              #
#    Updated: 2022/11/06 16:11:20 by carys            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	iter

HEADER	=	iter.hpp

SRCS	=	main.cpp

OBJS	=	${SRCS:%.cpp=%.o}

CC		=	c++

RM		=	rm -f

CLR		=	\001\033[1;92m\002
RST		=	\001\033[0m\002

CPPFLAGS	=	-Wall -Wextra -Werror -g3 -std=c++98 -Wshadow -g -fsanitize=address

.PHONY:		all clean fclean re

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CPPFLAGS} -o ${NAME} ${OBJS}
			@printf "${CLR}"START" $(NAME)""${RST}\n"

%.o: %.cpp  $(HEADER) Makefile
			${CC} ${CPPFLAGS} -c $< -o $@

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
			@printf "${CLR}"'FINISH '"$(NAME)""${RST}\n"

re:			fclean all
			@printf "${CLR}"REBOOT" $(NAME)""${RST}\n"