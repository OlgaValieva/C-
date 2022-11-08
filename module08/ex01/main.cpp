/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:52:25 by carys             #+#    #+#             */
/*   Updated: 2022/11/08 14:42:26 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"


int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

try
	{
		std::cout << CLR"~~~~~~~~~~~~~ADDITIONAL TEST for 10 000 element~~~~~~~~~~~~"RST << std::endl;
		std::srand(time(0));
		Span span(10000);

		for (int i = 0; i < 10000; i++)
			span.addNumber(rand());
		std::cout  << CLR"Longest: "RST << span.longestSpan() << std::endl;
		std::cout <<CLR"Shortest: "RST << span.shortestSpan() << std::endl;
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}
    
    return 0;
}
 