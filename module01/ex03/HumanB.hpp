/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:01:05 by carys             #+#    #+#             */
/*   Updated: 2022/10/25 09:53:30 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>   
#include <string>
#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(const std::string nname);
        ~HumanB();
        void attack();
        void setWeapon(Weapon &weapon);

    private:
        std:: string name;
        Weapon *weapon;
};

#endif