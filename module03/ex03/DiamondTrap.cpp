/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:02:59 by carys             #+#    #+#             */
/*   Updated: 2022/11/01 16:59:43 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
{
   std::cout << "\n DiamondTrap Default constructor called\n" << std::endl;
   //Name, which is passed as parameter to a constructor
   this->name = "noname";
   //ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
   ClapTrap::name  = name + "_clap_name";
   //Hit points (FragTrap)
   this->hitPoints = FragTrap::hitPoints;
   //Energy points (ScavTrap)
   this->energyPoints = ScavTrap:: energyPoints;
   //Attack damage (FragTrap)
   this->attackDamage = FragTrap:: attackDamage;
   
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    std::cout << "\nDiamondTrap Int constructor called" << std::endl;
    this->name = name;
    ClapTrap::name  = name + "_clap_name";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap:: energyPoints;
    this->attackDamage = FragTrap:: attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap&fixed) : ClapTrap(fixed)
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    *this = fixed;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &fixed)
{
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    if (this == &fixed)
        return(*this);
    static_cast <ClapTrap &>(*this) = fixed;
    return (*this);               
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;                  
}
//attack() (Scavtrap)  
void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap:: whoAmI()
{
    std::cout << "DiamondTrap is " << this->getName() << std::endl;
    std::cout << "ClapTrap is " << ClapTrap::getName() << std::endl;    
}