/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:45:14 by carys             #+#    #+#             */
/*   Updated: 2022/11/01 14:25:09 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap Airat("Airat");  
    FragTrap Raf("Raf"); 
    ScavTrap Misha("Misha");
    
    Airat.printMessage();
    Misha.printMessage();
    Raf.printMessage();

    Airat.setAttackDamage(5);
    Airat.attack(Misha.getName());
    Misha.takeDamage(5);
    Misha.beRepaired(5);
    
    Misha.setAttackDamage(10);
    Misha.attack(Airat.getName());
    Airat.takeDamage(10);
    
    Misha.guardGate();
    Raf.highFivesGuys();
    
    Airat.printMessage();
    Misha.printMessage();
    Raf.printMessage();
}