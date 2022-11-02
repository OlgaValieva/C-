/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:56:50 by carys             #+#    #+#             */
/*   Updated: 2022/11/02 11:50:39 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "animal";
    std::cout << "Animal Default constructor" <<std::endl;
}

Animal::Animal (const Animal &animal)
{
    *this = animal;
    std::cout << "Animal Copy constructor" <<std::endl;
}

Animal & Animal::operator=(const Animal &animal)
{
    if (this == &animal)
        return (*this);
    type = animal.getType();
    return (*this);          
}

Animal::~Animal()
{
    std::cout << "Animal destructor" <<std::endl;         
}

void Animal::makeSound() const
{
    std::cout << "Animals can make sounds ---  --- --- --- --- --- --- --- ---" <<std::endl;          
}

std::string Animal::getType() const
{
    return (type);         
}