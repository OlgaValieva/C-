/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 11:54:55 by carys             #+#    #+#             */
/*   Updated: 2023/04/10 15:12:02 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Date.hpp"

Date::Date() {}

Date::Date(int year, int month, int day) : year(year), month(month), day(day) { }

Date::Date(const Date &copy) { *this = copy;}

Date &Date::operator=(const Date &copy)
{
	if (this != &copy)
    {
        this->year = copy.getYear();
	    this->month = copy.getMonth();
	    this->day = copy.getDay();
    }
	return (*this);
}

Date::~Date(){}

int Date::getYear() const { return year;}

int Date::getMonth() const { return month;}

int Date::getDay() const { return day;}

bool Date::operator>(const Date &dt)
{
	if (this->year > dt.year)
		return true;
	if (this->year == dt.year && this->month > dt.month)
		return true;
	if (this->year == dt.year && this->month == dt.month && this->day > dt.day)
		return true;
	return false;
}

bool Date::operator<(const Date &dt)
{
	if ((this->year < dt.year) || (this->year == dt.year && this->month < dt.month) || (this->year == dt.year && this->month == dt.month && this->day < dt.day))
       return true; 
	return false;
}

bool Date::operator==(const Date &dt)
{
	return (this->year == dt.year && this->month == dt.month && this->day == dt.day);
}

bool Date::operator!=(const Date &dt)
{
	 return !(*this == dt);
}

std::ostream& operator<<(std::ostream& os, const Date& dt)
{
	os << dt.year << "-";
	if (dt.month < 10)
		os << "0";
	os << dt.month << "-";
	if (dt.day < 10)
		os << "0";
	os << dt.day;
    return os;
}

bool operator<(const Date &d1, const Date &d2){
    if (d1.year < d2.year)
		return true;
	if (d1.year == d2.year && d1.month < d2.month)
		return true;
	if (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day)
		return true;
	return false;
}