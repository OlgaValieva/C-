/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:52:25 by carys             #+#    #+#             */
/*   Updated: 2022/11/06 20:20:44 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
		std::cout << "---------CHECK--------" << std::endl;
		std::cout << "Numbers(array<int>): " << numbers[4] << std::endl;
		std::cout << "Mirror(new int[]): " << mirror[4] << std::endl;
		std::cout << "tmp(operator =): " << tmp[4] << std::endl;
		std::cout << "test(copy): " << test[4] << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	std::cout << "---------exception--------" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	try
	{
		Array<int> zero;

		std::cout << "Zero array size: " << zero.size() << std::endl;
		std::cout << zero[2] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Negative size" << std::endl;
		Array<int> negative(-5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;

    return 0;
}