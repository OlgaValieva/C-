/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:45:45 by carys             #+#    #+#             */
/*   Updated: 2022/11/03 21:54:55 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern () {}

Intern::Intern (const Intern &p)
{
    *this = p;
}

Intern  &Intern::operator = (const Intern  &i)
{
    if (this == &i)
        return (*this);
    return (*this);
}

Intern::~Intern () {}
        
Form *Intern::makeForm(std::string name, std::string target)
{   
    std::string array[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
    int i = 1;
    while (i <= 3 && name != array[i]) 
        i++;
    switch (i)
    {
        case 1: std::cout << "Intern creates ShrubberyCreationForm" << std::endl; return (new ShrubberyCreationForm(target));
		case 2: std::cout << "Intern creates RobotomyRequestForm" << std::endl; return (new RobotomyRequestForm(target));
		case 3: std::cout << "Intern creates PresidentialPardonForm" << std::endl; return (new PresidentialPardonForm(target));
    }
    throw (Intern::FormIsNotFound());
}
