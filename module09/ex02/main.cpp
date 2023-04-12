/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:02:00 by carys             #+#    #+#             */
/*   Updated: 2023/04/12 13:19:00 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc , char **argv)
{
    if (argc < 2)
    {
        std::cout << "Error: wrong numbers of arguments!" << std::endl;
        return 1;
    }
    PmergeMe range;
    try
    {
        (void)argc;
        range.sorter(argv);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}