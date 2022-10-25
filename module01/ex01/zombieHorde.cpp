/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:10:11 by carys             #+#    #+#             */
/*   Updated: 2022/10/25 11:07:34 by carys            ###   ########.fr       */
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
    while(i < N)
    {
        hordeZombie[i].setName(name);
        hordeZombie[i].announce();
        i++;
    }
    return (hordeZombie);
}