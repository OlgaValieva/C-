/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:24:08 by carys             #+#    #+#             */
/*   Updated: 2022/10/31 13:11:12 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout  << "         a; created" << std::endl;
    std::cout << a << std::endl;
    std::cout  << "        ++a; created" << std::endl;
    std::cout << ++a << std::endl;
    std::cout  << "          a; created" << std::endl;
    std::cout << a << std::endl;
    std::cout  << "        a++; created" << std::endl;
    std::cout << a++ << std::endl;
    std::cout  << "          a; created" << std::endl;
    std::cout << a << std::endl;
    std::cout  << "          b; created" << std::endl;
    std::cout << b << std::endl;
    std::cout  << "  max(a, b); created" << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

      std::cout  << "                      ADDITIONAL" << std::endl;
    std::cout  << "       a + b; created" << std::endl;
    std::cout << a + b << std::endl;
    std::cout  << "       a - b; created" << std::endl;
    std::cout << a - b << std::endl;
    std::cout  << "       a * b; created" << std::endl;
    std::cout << a * b << std::endl;
    std::cout  << "       b / a; created" << std::endl;
    std::cout << b / a << std::endl;
    std::cout  << "       b == a; created" << std::endl;
    std::cout << ((b) == (a)) << std::endl;
    return 0;
}