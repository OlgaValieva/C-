/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:06:26 by carys             #+#    #+#             */
/*   Updated: 2022/10/25 15:08:26 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsForLosers.hpp"

int main(int argc, char **argv)
{
    if (argc != 4 || !argv[2][0] || !argv[3][0])
    {
        std::cout << "error in the arguments" << std::endl;
        return (0);
    }
    SedIsForLosers success;
    success.newfile(argv[1], argv[2], argv[3]);
    return(0);
}

