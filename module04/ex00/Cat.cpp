/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:56:56 by carys             #+#    #+#             */
/*   Updated: 2022/11/02 11:51:02 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat Default constructor" <<std::endl;
}

Cat::Cat (const Cat &cat)
{
    *this = cat;
    std::cout << "Cat Copy constructor" <<std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
    if (this == &cat)
        return (*this);
    type = cat.getType();
    return (*this);          
}

Cat::~Cat()
{
    std::cout << "Cat destructor" <<std::endl;         
}

void Cat::makeSound() const
{
    std::cout << "Cat: MEOW --- MEOW --- MEOW --- MEOW --- MEOW --- MEOW --- MEOW --- MEOW --- MEOW" <<std::endl;          
}
