/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:01:01 by carys             #+#    #+#             */
/*   Updated: 2022/10/25 09:55:45 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string nname) : name(nname)
{
    weapon = NULL;
}

HumanB::~HumanB(){}

void HumanB::attack()
{
    if (this->weapon)
        std::cout << name << " attacks with their " <<  weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &weapo)
{
    weapon = &weapo;
}