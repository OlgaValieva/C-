/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:15:23 by carys             #+#    #+#             */
/*   Updated: 2022/10/28 14:46:42 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0)
{
    std::cout << "Default constructor called" << std::endl;   
}

Fixed::Fixed(const int param)
{
   std::cout << "Int constructor called" << std::endl;
   setRawBits(param << numberOfFractionalBits);  
}

Fixed::Fixed(const float param)
{
    std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(param * (1 << numberOfFractionalBits))); 
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;               
}

Fixed & Fixed::operator = (const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &fixed)
        return(*this);
    this->setRawBits(fixed.getRawBits());
    return(*this);               
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;                  
} 

int Fixed::getRawBits( void ) const
{
//   std::cout << "getRawBits member function called" << std::endl;
    return (_raw);
}

void Fixed::setRawBits( int const raw )
{
    _raw = raw;
}           

float Fixed::toFloat( void ) const
{
    return((float)(getRawBits()/(float)(1 << numberOfFractionalBits)));
}

int Fixed::toInt( void ) const
{
    return((int)(getRawBits() >> numberOfFractionalBits));
}

std::ostream &operator << (std::ostream &outstr, const Fixed &fixed)
{
    return(outstr << fixed.toFloat());
}      
