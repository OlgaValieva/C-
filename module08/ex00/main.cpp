/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:52:25 by carys             #+#    #+#             */
/*   Updated: 2022/11/08 13:11:13 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"


int main()
{
    std::cout << std::boolalpha;
    int toFind;
    std::cout << "Input number: ";
    std::cin >> toFind;

    std::cout << CLR"~~~~~~~~~~~VECTOR~~~~~~~~~~~"RST << std::endl;
    std::vector<int> vect;
    for (int i = 0; i < 5; i++)
    {
        vect.push_back(i);
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << CLR"~~~~~~~~~~~DEQUE~~~~~~~~~~~"RST << std::endl;
    std::deque<int> deq;
    for (int i = 0; i < 5; i++)
    {
        deq.push_back(i);
        std::cout << i << " ";
    }
     std::cout << std::endl;
    std::cout <<CLR"~~~~~~~~~~~ARRAY~~~~~~~~~~~"RST << std::endl;
    std::array<int, 5> arr;
        for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << CLR"~~~~~~~~~~~LIST~~~~~~~~~~~"RST << std::endl;
    std::list<int> lst;
    for (int i = 0; i < 5; i++)
    {
        lst.push_back(i);
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << "Find in vector: "  << easyfind(vect, toFind) << std::endl;
    std::cout << "Find in deque: "  << easyfind(deq, toFind) << std::endl;
    std::cout << "Find in array: "  << easyfind(arr, toFind) << std::endl;
    std::cout << "Find in list: " << easyfind(lst, toFind) << std::endl;
    
    return 0;
}