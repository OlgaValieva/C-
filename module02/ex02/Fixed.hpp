/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:24:11 by carys             #+#    #+#             */
/*   Updated: 2022/10/28 14:46:42 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>   
#include <cmath>

class Fixed
{
    public:
        Fixed();
        Fixed(const int param);
        Fixed(const float param);
        Fixed(const Fixed &fixed);
        Fixed &operator = (const Fixed &fixed);
        ~Fixed();
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

        bool operator>(const Fixed &fixed) const;
        bool operator<(const Fixed &fixed) const;
        bool operator>=(const Fixed &fixed) const;
        bool operator<=(const Fixed &fixed) const;
        bool operator==(const Fixed &fixed) const;
        bool operator!=(const Fixed &fixed) const;

        Fixed operator+(const Fixed &fixed) const;
        Fixed operator-(const Fixed &fixed) const;
        Fixed operator*(const Fixed &fixed) const;
        Fixed operator/(const Fixed &fixed) const;

        Fixed &operator++(void);
        Fixed &operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);

        static Fixed &min(Fixed &x, Fixed &y);
        static const Fixed &min(const Fixed &x, const Fixed &y);
        static Fixed &max(Fixed &x, Fixed &y);
        static const Fixed &max(const Fixed &x, const Fixed &y);

    private:
        int _raw;
        static const int numberOfFractionalBits = 8;
};

std::ostream &operator << (std::ostream &outstr, const Fixed &fixed);

#endif