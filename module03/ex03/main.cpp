/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:45:14 by carys             #+#    #+#             */
/*   Updated: 2022/11/01 17:16:27 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    ClapTrap Airat("Airat");  
    FragTrap Raf("Raf"); 
    ScavTrap Misha("Misha");
    DiamondTrap Olya("Olya");
    
    Airat.printMessage();
    Misha.printMessage();
    Raf.printMessage();
    Olya.printMessage();

    Airat.attack(Misha.getName());
    Airat.takeDamage(5);
    Airat.beRepaired(4);
    
    Misha.attack(Raf.getName());
    Misha.takeDamage(5);
    Misha.beRepaired(4);
    Misha.guardGate();

    Raf.attack(Olya.getName());
    Raf.takeDamage(5);
    Raf.beRepaired(4);
    Raf.highFivesGuys();

    Olya.attack(Airat.getName());
    Olya.takeDamage(5);
    Olya.beRepaired(4);
    Olya.whoAmI();
    
    Airat.printMessage();
    Misha.printMessage();
    Raf.printMessage();
    Olya.printMessage();
}