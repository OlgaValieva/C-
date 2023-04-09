/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:10:58 by carys             #+#    #+#             */
/*   Updated: 2023/04/08 17:36:40 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>

class BitcoinExchange {
private:
//	int 	m_fd;
//	string	m_file_name;
	map<int, char> database;
	BitcoinExchange(BitcoinExchange obj) { if (this != obj) m_file_name = obj->m_file_name; };

public:
	BitcoinExchange();
//	BitcoinExchange(std::string file_name);
	~BitcoinExchange();

	map<int, char>& make_database();
};

#endif