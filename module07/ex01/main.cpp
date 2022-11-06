/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:52:25 by carys             #+#    #+#             */
/*   Updated: 2022/11/06 17:42:14 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int array[] = {1, 33, 777, 9999};
	iter(array, (sizeof(array)/sizeof(array[0])), print);

	std::string str_array[] = {"abstraction", "inheritance", "polymorphism", "encapsulation"};
	iter(str_array, (sizeof(str_array)/sizeof(str_array[0])), print);
	
//	{
//		int tab[] = {0, 1, 2, 3, 4};
//		Awesome tab2[5];
//
//		iter(tab, 5, print);
//		iter(tab2, 5, print);
//	}

	return 0;
}