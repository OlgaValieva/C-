/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:25:24 by carys             #+#    #+#             */
/*   Updated: 2022/10/27 13:17:09 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    std::cout  << "--- Fixed a; created" << std::endl;
    Fixed a;
    std::cout << "--- Fixed b( a ); created" << std::endl;
    Fixed b( a );
    std::cout << "--- Fixed c; created" << std::endl;
    Fixed c;
    std::cout << "--- c = b; ---" << std::endl;
    c = b;
    std::cout << "------" << std::endl;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}