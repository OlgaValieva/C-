/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:01:14 by carys             #+#    #+#             */
/*   Updated: 2022/10/25 09:54:21 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string name)
{
   type = name;
}
Weapon::~Weapon(){}

const std:: string &Weapon::getType()
{
    return (type);
}
void Weapon::setType(std:: string name)
{
    type = name;
}