/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:35:31 by carys             #+#    #+#             */
/*   Updated: 2023/04/11 16:30:35 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc , char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: wrong numbers of arguments!" << std::endl;
        return 1;
    }

    RPN rnp(argv[1]);
    try
    {
        int result = rnp.expression();
        std::cout << result << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}