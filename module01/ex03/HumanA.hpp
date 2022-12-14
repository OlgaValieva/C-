/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:00:58 by carys             #+#    #+#             */
/*   Updated: 2022/10/25 09:40:14 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>   
#include <string>
#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon &wweapon);
        ~HumanA();
        void attack();

    private:
        std:: string name;
        Weapon &weapon;
};

#endif