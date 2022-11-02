/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:57:03 by carys             #+#    #+#             */
/*   Updated: 2022/11/02 11:51:12 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog Default constructor" <<std::endl;
}

Dog::Dog (const Dog &dog)
{
    *this = dog;
    std::cout << "Dog Copy constructor" <<std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
    if (this == &dog)
        return (*this);
    type = dog.getType();
    return (*this);          
}

Dog::~Dog()
{
    std::cout << "Dog destructor" <<std::endl;         
}

void Dog::makeSound() const
{
    std::cout << "Dog: WOOF--- WOOF --- WOOF --- WOOF --- WOOF --- WOOF --- WOOF --- WOOF --- WOOF" <<std::endl;          
}