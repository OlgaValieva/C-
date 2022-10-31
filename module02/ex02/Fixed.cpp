/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:24:39 by carys             #+#    #+#             */
/*   Updated: 2022/10/28 14:46:42 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0)
{
//   std::cout << "Default constructor called" << std::endl;   
}

Fixed::Fixed(const int param)
{
//   std::cout << "Int constructor called" << std::endl;
   setRawBits(param << numberOfFractionalBits);  
}

Fixed::Fixed(const float param)
{
//    std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(param * (1 << numberOfFractionalBits))); 
}

Fixed::Fixed(const Fixed &fixed)
{
//    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;               
}

Fixed & Fixed::operator = (const Fixed &fixed)
{
//    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &fixed)
        return(*this);
    this->setRawBits(fixed.getRawBits());
    return(*this);               
}

Fixed::~Fixed()
{
//    std::cout << "Destructor called" << std::endl;                  
} 

int Fixed::getRawBits( void ) const
{
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

bool Fixed::operator>(const Fixed &fixed) const
{
    return(this->getRawBits() > fixed.getRawBits());
}
bool Fixed::operator<(const Fixed &fixed) const
{
    return(this->getRawBits() < fixed.getRawBits());
}
bool Fixed::operator>=(const Fixed &fixed) const
{
    return(this->getRawBits() >= fixed.getRawBits());
}
bool Fixed::operator<=(const Fixed &fixed) const
{
    return(this->getRawBits() <= fixed.getRawBits());
}
bool Fixed::operator==(const Fixed &fixed) const
{
    return(this->getRawBits() == fixed.getRawBits());
}
bool Fixed::operator!=(const Fixed &fixed) const
{
    return(this->getRawBits() != fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
    return(Fixed(this->toFloat() + fixed.toFloat()));
}
Fixed Fixed::operator-(const Fixed &fixed) const
{
    return(Fixed(this->toFloat() - fixed.toFloat()));
}
Fixed Fixed::operator*(const Fixed &fixed) const
{
    return(Fixed(this->toFloat() * fixed.toFloat()));
}
Fixed Fixed::operator/(const Fixed &fixed) const
{
    return(Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed &Fixed::operator++(void)
{
    ++_raw;
    return *this;
}
Fixed &Fixed::operator--(void)
{
    --_raw;
    return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++_raw;
    return (temp);
}
Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    --_raw;
    return (temp);
}

Fixed &Fixed::min(Fixed &x, Fixed &y)
{
    return (x < y ? x : y);
}
const Fixed &Fixed::min(const Fixed &x, const Fixed &y)
{
    return (x < y ? x : y);
}
Fixed &Fixed::max(Fixed &x, Fixed &y)
{
    return (x > y ? x : y);
}
const Fixed &Fixed::max(const Fixed &x, const Fixed &y)
{
    return (x > y ? x : y);
}      
