/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:08:55 by carys             #+#    #+#             */
/*   Updated: 2022/10/26 13:15:45 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl Harl;
    if (argc != 2)
    {
        std::cout << "error in the arguments" << std::endl;
        return (0);
    }
    Harl.complain(argv[1]);
    return(0);
}
