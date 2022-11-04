/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:45:45 by carys             #+#    #+#             */
/*   Updated: 2022/11/04 12:31:51 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern () {}

Intern::Intern (const Intern &i)
{
    *this = i;
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
    int i = 0;
    while (i < 3 && name != array[i]) 
        i++;
    switch (i)
    {
        case 0: std::cout << "Intern creates: " << std::endl; 
            return (new ShrubberyCreationForm(target));
		case 1: std::cout << "Intern creates: " << std::endl; 
            return (new RobotomyRequestForm(target));
		case 2: std::cout << "Intern creates: " << std::endl; 
            return (new PresidentialPardonForm(target));
    }
    throw (Intern::FormIsNotFound());
}
