/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:03:44 by carys             #+#    #+#             */
/*   Updated: 2022/11/06 17:42:18 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

// • The first parameter is the address of an array.
// • The second one is the length of the array.
// • The third one is a function that will be call on every element of the array
template< typename T >
void iter(T *arr, int arr_length, void (*func)(const T &x))
{
    if (!func)
    {
        std::cout << "f = NULL" << std::endl;
        return ;
    }
    for (int i = 0; i < arr_length; i++)
        (*func)(arr[i]);
}

template< typename T >
void print(const T &x)
{
    std::cout << x << std::endl;
    return ;
}

//class Awesome
//{
//	public:
//		Awesome( void ) : _n( 42 ) { return; }
//		int get(void ) const { return this->_n; }
//	private:
//		int _n;
//};
//std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

#endif