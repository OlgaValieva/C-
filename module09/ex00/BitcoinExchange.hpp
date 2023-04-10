/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:10:58 by carys             #+#    #+#             */
/*   Updated: 2023/04/10 15:23:19 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include "Date.hpp"
#include <climits>
#include <ctime>
#include <fstream>
#include <map>
#include <sstream>

# define dbName		"data.csv"
# define BADINPUT	"bad input => "

typedef struct tm t_tm;

class BitcoinExchange {

	private:
		std::map<Date, float> database;
		std::map<Date, float> inputValues;
		std::string	inputFile;

	public:
		BitcoinExchange();
		BitcoinExchange(std::string filename);
		BitcoinExchange(const BitcoinExchange &btcCopy);
		BitcoinExchange &operator=(const BitcoinExchange &btcCopy);
		~BitcoinExchange();

		void fillDatabase();
		void fillMap(std::ifstream &file, char sep);
		void exchange();

		float findClosest(Date &date);

		std::map<Date, float> getDatabase() const;

		class BitcoinExchangeException : public std::exception {
			private:
				const char *message;

			public:
				BitcoinExchangeException(const char *msg) : message(msg) {}

				virtual const char* what() const throw() {
					std::cerr << "Error: ";
					return (message);
				}
		};
};

Date parseDate(std::string str, char sep);
bool openFile(std::ifstream &sfile, std::string &filename);

# endif