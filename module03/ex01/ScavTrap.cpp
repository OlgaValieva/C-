/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:45:25 by carys             #+#    #+#             */
/*   Updated: 2022/10/31 21:22:33 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
   std::cout << "\n ScavTrap Default constructor called\n" << std::endl;   
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "\nScavTrap Int constructor called" << std::endl;
    ClapTrap::setHitPoints(100);
    ClapTrap::setEnergyPoints(50);
    ClapTrap::setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &fixed) : ClapTrap(fixed)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = fixed;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &fixed)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this == &fixed)
        return(*this);
    static_cast <ClapTrap &>(*this) = fixed;
    return (*this);               
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap  Destructor called" << std::endl;                  
} 

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap  " << getName() << "  in Gate keeper mode " << std::endl;
}

// void ScavTrap::attack(const std::string& target)
// {
//     if (hitPoints <= 0)
//     {
//         hitPoints = 0;
//         std::cout << "ScavTrap  " << this->getName() << "no hit points" << std::endl;
//         return ; 
//     }
//     if (energyPoints <= 0)
//     {
//         energyPoints = 0;
//         std::cout << "ScavTrap  " << this->getName() << "no energy points" << std::endl;
//         return ; 
//     }
//     energyPoints--;
//     std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << attackDamage << " points of damage!"<< std::endl;
         
// }

