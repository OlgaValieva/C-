/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:52:25 by carys             #+#    #+#             */
/*   Updated: 2022/11/04 12:34:27 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << std::boolalpha;

	Intern  someRandomIntern;
	Form*   RRF;
	Form*   SCF;
	Form*	PPF;
	Form*	error;

	try
	{
		std::cout << CLR"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
		RRF= someRandomIntern.makeForm("Shrubbery Creation", "Robot");
		std::cout << *RRF;
		std::cout << CLR"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
		SCF = someRandomIntern.makeForm("Robotomy Request", "Shrub");
		std::cout << *SCF;
		std::cout << CLR"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
		PPF = someRandomIntern.makeForm("Presidential Pardon", "President");
		std::cout << *PPF;
		std::cout << CLR"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
		error = someRandomIntern.makeForm("error", "none");
		std::cout << *error;
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}

	delete RRF;
	delete SCF;
	delete PPF;
	delete error;

	return (0);
}