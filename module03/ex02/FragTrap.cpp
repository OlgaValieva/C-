/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:03:45 by carys             #+#    #+#             */
/*   Updated: 2022/11/01 14:24:06 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
   std::cout << "\n FragTrap Default constructor called\n" << std::endl;   
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "\nFragTrap Int constructor called" << std::endl;
    ClapTrap::setHitPoints(100);
    ClapTrap::setEnergyPoints(100);
    ClapTrap::setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &fixed) : ClapTrap(fixed)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = fixed;
}

FragTrap &FragTrap::operator = (const FragTrap &fixed)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (this == &fixed)
        return(*this);
    static_cast <ClapTrap &>(*this) = fixed;
    return (*this);               
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;                  
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->getName() << " positive high fives " << std::endl;   
}