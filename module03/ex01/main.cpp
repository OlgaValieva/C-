/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:45:14 by carys             #+#    #+#             */
/*   Updated: 2022/10/31 19:52:07 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap olya;
    
    ClapTrap moscow(olya);
    
    ClapTrap Airat("Airat");
    
    ClapTrap Misha("Misha");
    
    ClapTrap Raf("Raf");
    
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
    
    Airat.printMessage();
    Misha.printMessage();
    Raf.printMessage();
}