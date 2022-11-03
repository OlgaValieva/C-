/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:52:25 by carys             #+#    #+#             */
/*   Updated: 2022/11/03 20:16:19 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
  	try
	{
		std::cout << std::boolalpha;
		ShrubberyCreationForm form1("Shrubbery");
		std::cout << form1;
		std::cout << CLR"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
		RobotomyRequestForm form2(CLR"Robotomy"RST);
		std::cout << form2;
		std::cout << CLR"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
		PresidentialPardonForm form3(CLR"Presidential"RST);
		std::cout << form3;
		std::cout << CLR"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
		Bureaucrat bureaucrat("Vitalii", 5);
		std::cout << bureaucrat;
		
		std::cout << CLR"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
		form1.beSigned(bureaucrat);
		bureaucrat.signForm(form1);
		bureaucrat.executeForm(form1);
		std::string name;
		std::ifstream file;
		file.open(form1.getTarget() + "_shrubbery");
		if (file.is_open())
		{
			std::getline(file, name, '?');
			std::cout << name << std::endl;
			file.close();
		}
		std::cout << CLR"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
		form2.beSigned(bureaucrat);
		bureaucrat.signForm(form2);
		bureaucrat.executeForm(form2);
		std::cout << CLR"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
		form3.beSigned(bureaucrat);
		bureaucrat.signForm(form3);
		bureaucrat.executeForm(form3);
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}
	return (0);
}