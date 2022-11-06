/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:23:54 by carys             #+#    #+#             */
/*   Updated: 2022/11/06 17:37:05 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

//swap: Swaps the values of two given arguments. Does not return anything.
template <class T>
void swap(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

//min: Compares the two values passed in its arguments and returns the smallest
//one. If the two of them are equal, then it returns the second one.
template <typename T>
const T& min(const T& a, const T& b)
{
    return (a < b) ? a : b;
}

//max: Compares the two values passed in its arguments and returns the greatest one.
//If the two of them are equal, then it returns the second one
template <typename T>
const T& max(const T& a, const T& b)
{
    return (a > b) ? a : b;
}

// class Awesome
// {
// 	public:
// 		Awesome(void) : _n(0) {}
// 		Awesome( int n) : _n( n ) {}
// 		Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
// 		bool operator==( Awesome const & rhs) const { return (this->_n == rhs._n); }
// 		bool operator!=(Awesome const & rhs) const{ return (this->_n != rhs._n); }
// 		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
// 		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
// 		bool operator>=( Awesome const & rhs) const { return (this->_n >= rhs._n); }
// 		bool operator<=(Awesome const & rhs) const { return (this->_n <= rhs._n); }
// 		int get_n() const { return _n; }
// 	private:
// 		int _n;
// };
// std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

#endif