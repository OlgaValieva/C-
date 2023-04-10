/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:10:55 by carys             #+#    #+#             */
/*   Updated: 2023/04/10 14:51:42 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "Error: could not open file." << std::endl;
		return 0;
	}
	try
	{
		BitcoinExchange btc(static_cast<std::string>(argv[1]));
		btc.exchange();

	} catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl ;
	}
	return 1;
}