/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:15:16 by carys             #+#    #+#             */
/*   Updated: 2022/10/27 14:57:55 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    std::cout  << "--- Fixed a; created" << std::endl;
    Fixed a;
    std::cout  << "--- Fixed const b( 10 ) created" << std::endl;
    Fixed const b( 10 );
    std::cout  << "--- Fixed const c( 42.42f ) created" << std::endl;
    Fixed const c( 42.42f );
    std::cout  << "--- Fixed const d( b ) created" << std::endl;
    Fixed const d( b );
    std::cout  << "---  a = Fixed( 1234.4321f ) created" << std::endl;
    a = Fixed( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}