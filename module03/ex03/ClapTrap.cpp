/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:45:08 by carys             #+#    #+#             */
/*   Updated: 2022/11/01 17:35:10 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(""), hitPoints(10), energyPoints(10), attackDamage(0)
{
   std::cout << "\nDefault constructor called\n" << std::endl;   
}

ClapTrap::ClapTrap(std::string _name) : name(_name), hitPoints(10), energyPoints(10), attackDamage(0)
{
  std::cout << "\nInt constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

ClapTrap & ClapTrap::operator = (const ClapTrap &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &fixed)
        return(*this);
    name = fixed.getName();
    hitPoints = fixed.getHitPoints();
    energyPoints = fixed.getEnergyPoints();
    attackDamage = fixed.getAttackDamage();
    return (*this);               
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;                  
} 

void ClapTrap::attack(const std::string& target)
{
    if (hitPoints <=0)
    {
        hitPoints = 0;
        std::cout << "ClapTrap " << name << " no hit points" << std::endl;
        return ; 
    }
    if (energyPoints <= 0)
    {
        energyPoints = 0;
        std::cout << "ClapTrap " << name << " no energy points" << std::endl;
        return ; 
    }
    energyPoints--;
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!"<< std::endl;
         
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints <= 0)
    {
        hitPoints = 0;
        std::cout << "ClapTrap " << name << " can't damage-> sleep" << std::endl;
        return ; 
    }
    std::cout << "ClapTrap " << name << " lost " << amount <<  " hit points"<< std::endl;
    hitPoints -= amount;
    if (hitPoints < 0)
        hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " can't repair -> sleep" << std::endl;
        return ; 
    }
    if (energyPoints <= 0)
    {
        energyPoints = 0;
        std::cout << "ClapTrap " << name << " no hit energy points" << std::endl;
        return ; 
    }
    std::cout << "ClapTrap " << name << " repairs by " << amount << " points"<< std::endl; 
    hitPoints +=amount;
    energyPoints--;
}
        
void ClapTrap::setName(std::string _name)
{
    name = _name;
}

void ClapTrap::setHitPoints(int hit)
{
    hitPoints = hit;
}

void ClapTrap::setEnergyPoints(int energy)
{
    energyPoints = energy;
}

void ClapTrap::setAttackDamage(int attack)
{
    attackDamage = attack;
}

std::string ClapTrap::getName() const
{
    return (name);
}

int ClapTrap::getHitPoints() const
{
    return (hitPoints);
}

int ClapTrap::getEnergyPoints()const
{
    return (energyPoints);
}
        
int ClapTrap::getAttackDamage()const
{
    return (attackDamage);
}

void ClapTrap::printMessage()
{
    std::cout << "\nName: " << getName() << std::endl;
    std::cout << "Hit points: " << getHitPoints() << std::endl;
    std::cout << "Energy points: " << getEnergyPoints() << std::endl;
    std::cout << "Damage: " << getAttackDamage() << std::endl;          
}