/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:01:01 by carys             #+#    #+#             */
/*   Updated: 2022/10/24 15:42:38 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) 
{
    name = name;
}

HumanB::~HumanB(){}

void HumanB::attack()
{
      if (this->weapon)
        std::cout << name << " attacks with their " <<  weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon" << std::endl;

void HumanB::setWeapon(Weapon &weapon)
{
    weapon = &weapon;
}