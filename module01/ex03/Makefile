# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carys <carys@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 14:01:11 by carys             #+#    #+#              #
#    Updated: 2022/10/24 14:08:40 by carys            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Human

HEADER	=	Weapon.hpp HumanA.hpp HumanB.hpp

SRCS	=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
			
OBJS	=	${SRCS:%.cpp=%.o}

CC		=	c++

RM		=	rm -f

CLR		=	\001\033[1;92m\002
RST		=	\001\033[0m\002

CPPFLAGS	=	-Wall -Wextra -Werror -I. -std=c++98 

.PHONY:		all clean fclean re

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CPPFLAGS} -o ${NAME} ${OBJS}
			@printf "${CLR}"START" $(NAME)""${RST}\n"

%.o: %.cpp  $(HEADER)
			${CC} ${CPPFLAGS} -c $< -o $@

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
			@printf "${CLR}"'FINISH '"$(NAME)""${RST}\n"

re:			fclean all
			@printf "${CLR}"REBOOT" $(NAME)""${RST}\n"