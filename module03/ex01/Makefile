# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carys <carys@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 19:45:22 by carys             #+#    #+#              #
#    Updated: 2022/10/31 19:47:14 by carys            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ScavTrap

HEADER	=	ClapTrap.hpp ScavTrap.hpp

SRCS	=	main.cpp ClapTrap.cpp ScavTrap.cpp
			
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