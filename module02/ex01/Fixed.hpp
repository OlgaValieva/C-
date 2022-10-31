/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:15:19 by carys             #+#    #+#             */
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
        
    private:
        int _raw;
        static const int numberOfFractionalBits = 8;
};

std::ostream &operator << (std::ostream &outstr, const Fixed &fixed);

#endif