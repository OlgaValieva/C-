# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carys <carys@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 11:00:28 by carys             #+#    #+#              #
#    Updated: 2022/10/17 11:12:23 by carys            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	 megaphone

SRCS	=	 megaphone.cpp
			
OBJS	=	${SRCS:%.cpp=%.o}

CC		=	c++

RM		=	rm -f

CLR		=	\001\033[1;92m\002
RST		=	\001\033[0m\002

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

.PHONY:		all clean fclean re test

all:		${NAME}

%.o: %.cpp
			${CC} ${CPPFLAGS} -c $< -o $@

${NAME}:	${OBJS}
			${CC} ${CPPFLAGS} -o ${NAME} ${OBJS}
			@printf "${CLR}"START" $(NAME)""${RST}\n"

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
			@printf "${CLR}"'FINISH '"$(NAME)""${RST}\n"

re:			fclean all
			@printf "${CLR}"REBOOT" $(NAME)""${RST}\n"

test:		${NAME}
			./megaphone "shhhhh... I think the students are asleep..."
			./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
			./megaphone
