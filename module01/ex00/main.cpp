/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:42:01 by carys             #+#    #+#             */
/*   Updated: 2022/10/21 14:34:41 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie Zom = Zombie("Zom");
    Zom.announce();
    
    Zombie *bie = newZombie("bie");
    bie->announce();
    
    randomChump("randomi");

    delete bie;
    
    return (0);
}