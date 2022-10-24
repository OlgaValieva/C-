/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:10:11 by carys             #+#    #+#             */
/*   Updated: 2022/10/24 14:05:35 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    if(N <= 0 || N > INT8_MAX)
        return (NULL);
    Zombie *hordeZombie = new Zombie[N];
    while(i < N)
    {
        hordeZombie[i].setName(name);
        hordeZombie[i].announce();
        i++;
    }
    return (hordeZombie);
}