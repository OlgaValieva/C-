# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carys <carys@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 10:52:33 by carys             #+#    #+#              #
#    Updated: 2022/11/04 15:50:17 by carys            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	INTERN

HEADER	=	Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp

SRCS	=	main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
OBJS	=	${SRCS:%.cpp=%.o}

CC		=	c++

RM		=	rm -f

CLR		=	\001\033[1;92m\002
RST		=	\001\033[0m\002

CPPFLAGS	=	-Wall -Wextra -Werror -g3 -std=c++98 

.PHONY:		all clean fclean re

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CPPFLAGS} -o ${NAME} ${OBJS}
			@printf "${CLR}"START" $(NAME)""${RST}\n"

%.o: %.cpp  $(HEADER) Makefile
			${CC} ${CPPFLAGS} -c $< -o $@

clean:
			${RM} ${OBJS} *_shrubbery

fclean:		clean
			${RM} ${NAME}
			@printf "${CLR}"'FINISH '"$(NAME)""${RST}\n"

re:			fclean all
			@printf "${CLR}"REBOOT" $(NAME)""${RST}\n"