/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:52:25 by carys             #+#    #+#             */
/*   Updated: 2022/11/03 19:02:35 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
  	try
	{
		std::cout << CLR"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
		std::cout << std::boolalpha;
		Bureaucrat bureaucrat(CLR"Vitalii"RST, 99);
		std::cout << bureaucrat;
		
		Form form(CLR"Forma"RST, 100, 150);
		std::cout << form;
		form.beSigned(bureaucrat);
		bureaucrat.signForm(form);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << CLR"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
	return (0);
}