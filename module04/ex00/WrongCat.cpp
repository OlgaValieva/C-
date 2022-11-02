/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:57:16 by carys             #+#    #+#             */
/*   Updated: 2022/11/02 12:08:48 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat Default constructor" <<std::endl;
}

WrongCat::WrongCat(const WrongCat &wcat)
{
    *this = wcat;
    std::cout << "WrongCat Copy constructor" <<std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &wcat)
{
    if (this == &wcat)
        return (*this);
    type = wcat.getType();
    return (*this);          
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor" <<std::endl;         
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat can make sounds === === === === === === === === ===" <<std::endl;          
}
