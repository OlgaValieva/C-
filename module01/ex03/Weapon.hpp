/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:01:18 by carys             #+#    #+#             */
/*   Updated: 2022/10/24 15:08:07 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>   
#include <string>

class Weapon
{
    public:
        Weapon(std::string name);
        ~Weapon();
        void setType(std:: string name);
        const std:: string &getType();
    private:
        std:: string type;
};

#endif