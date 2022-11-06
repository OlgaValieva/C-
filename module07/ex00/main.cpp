/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:52:25 by carys             #+#    #+#             */
/*   Updated: 2022/11/06 17:37:38 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	int a = 2;
	int b = 3;
	
// These functions can be called with any type of argument. The only requirement is
// that the two arguments must have the same type and must support all the comparison operators.
	// char a = 'a';
	// char b = 'b';

	// double a = 2.666;
	// double b = 3.765;
	
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	// std::cout << "From checklist: " << std::endl;
	// Awesome p(2);
	// Awesome o(4);
	// // swap(p, o);
	// // std::cout << p << " " << o << std::endl;
	// // std::cout << "Max: " << max(p, o) << std::endl;
	// // std::cout << "Min: " << min(p, o) << std::endl;
	
	return 0;
}