/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:52:25 by carys             #+#    #+#             */
/*   Updated: 2022/11/04 17:54:57 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "incorrect number of arguments";
		return 0;
	}
	Conversion str(argv[1]);
	str.toChar();
	str.toInt();
	str.toFloat();
	str.toDouble();
	
	return (0);
}