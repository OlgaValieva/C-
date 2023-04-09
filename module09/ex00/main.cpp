/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:10:55 by carys             #+#    #+#             */
/*   Updated: 2023/04/08 17:41:51 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void check_leaks() {
	std::cout << std::endl;
	std::system("leaks -q btc");
}

int main(int argc, char **argv) {
	std::atexit(&check_leaks);
	std::cout << std::boolalpha;

	if (argc != 2) {
		std::cout << "invalid number of arguments" << std::endl;
		return 1;
	}

	std::ifstream file(argv[1]);
	if (file.fail()) {
		std::cout << "Error: could not open file: `" << argv[1] << "`" << std::endl;
		return 1;
	}

	try {
		BitcoinExchange btc(argv[1]);
		btc.parse(file);
	} catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}

	return 0;
}