/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:57:10 by carys             #+#    #+#             */
/*   Updated: 2022/11/02 12:06:35 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal Default constructor" <<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal&wanimal)
{
    *this = wanimal;
    std::cout << "WrongAnimal Copy constructor" <<std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &wanimal)
{
    if (this == &wanimal)
        return (*this);
    type = wanimal.getType();
    return (*this);          
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" <<std::endl;         
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal can make sounds +++ +++ +++ +++ +++ +++ +++ +++ +++" <<std::endl;          
}

std::string WrongAnimal::getType() const
{
    return (type);         
}