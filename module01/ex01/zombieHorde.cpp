/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:10:11 by carys             #+#    #+#             */
/*   Updated: 2022/10/26 12:57:17 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    if(N <= 0 || N > INT16_MAX || isdigit(N) == true)
    {
        std::cout << ":errror" << std::endl;
        return (NULL);
    }   
    Zombie *hordeZombie = new Zombie[N];
    if(!hordeZombie)
        std::cout << " Could not allocate memory";
    while(i < N)
    {
        hordeZombie[i].setName(name);
        hordeZombie[i].announce();
        i++;
    }
    return (hordeZombie);
}