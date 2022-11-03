/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:52:25 by carys             #+#    #+#             */
/*   Updated: 2022/11/03 13:40:23 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
  	try
	{
		Bureaucrat bureaucrat("Vitalii", 10);
		std::cout << CLR"name: "RST << bureaucrat.getName() << ", bureaucrat grade: " << bureaucrat.getGrade() << std::endl;
		std::cout << bureaucrat;
		bureaucrat.decrement();
		std::cout << bureaucrat;
		bureaucrat.increment();
		std::cout << bureaucrat;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << CLR"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
	
    try
	{
		Bureaucrat High("GradeTooHigh", 0);
		std::cout << High << std::endl;
	}
	catch (std::exception &e) 
    { 
        std::cout << e.what() << std::endl;
    }
    std::cout << CLR"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
	
    try
	{
		Bureaucrat Low("GradeTooLow", 151);
		std::cout << Low << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}