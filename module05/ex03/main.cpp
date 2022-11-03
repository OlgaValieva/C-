/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:52:25 by carys             #+#    #+#             */
/*   Updated: 2022/11/03 21:58:23 by carys            ###   ########.fr       */
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
	Form*   rrf;
	Form*   scf;
	Form*	ppf;
	Form*	error;

	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf;

		std::cout << std::endl;

		scf = someRandomIntern.makeForm("shrubbery creation", "Ann");
		std::cout << *scf;

		std::cout << std::endl;

		ppf = someRandomIntern.makeForm("presidential pardon", "Ivan");
		std::cout << *ppf;

		std::cout << std::endl;

		error = someRandomIntern.makeForm("error", "none");
		std::cout << *error;

	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}

	delete rrf;
	delete scf;
	delete ppf;
	delete error;

	return (0);
}