/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 11:53:57 by carys             #+#    #+#             */
/*   Updated: 2023/04/10 15:22:55 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DATE_HPP
#define DATE_HPP

#include <iostream>

class Date {

	private:
	
	public:
		int year;
		int month;
		int day;

		Date();
		Date(int year, int month, int day);
		Date(const Date &copy);
		Date &operator=(const Date &copy);
		~Date();

		int getYear() const;
		int getMonth() const;
		int getDay() const;

		bool operator>(const Date &dt);
		bool operator<(const Date &dt);
		bool operator==(const Date &dt);
		bool operator!=(const Date &dt);

};

std::ostream &operator<<(std::ostream &os, const Date &dt);
bool operator<(const Date &d1, const Date &d2);

# endif