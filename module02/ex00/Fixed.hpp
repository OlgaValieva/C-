/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:25:30 by carys             #+#    #+#             */
/*   Updated: 2022/10/28 14:46:42 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>   
#include <string>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        ~Fixed();
        
        Fixed &operator = (const Fixed &fixed);
      
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
    private:
        int _raw;
        static const int numberOfFractionalBits = 8;
};

#endif