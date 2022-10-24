/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:09:54 by carys             #+#    #+#             */
/*   Updated: 2022/10/24 11:38:34 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int NumHorde = 0;
    std::cout << "Input the number of zombies in the horde\n";
    std::cin >> NumHorde;
    Zombie *horde = zombieHorde(NumHorde, "Horde_Of_Zombies");
    if (horde != NULL)
        delete [] horde;
    return (0);
}