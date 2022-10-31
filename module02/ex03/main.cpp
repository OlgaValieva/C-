/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:21:00 by carys             #+#    #+#             */
/*   Updated: 2022/10/31 13:56:20 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
   Point a(0.0f, 0.0f), b(10.0f, 0.0f), c(0.0f, 10.0f);
   Point _in(2.5f, 2.5f), _out(10.0f, 10.0f), _on(5.0f, 5.0f);
   
   std::cout << std::boolalpha;
   std::cout << "point is inside the triangle " << bsp(a, b, c, _in) << std::endl;
   std::cout << "point is inside the triangle " << bsp(a, b, c, _out) << std::endl;
   std::cout << "point is inside the triangle " << bsp(a, b, c, _on) << std::endl;
   
   return 0;
}
