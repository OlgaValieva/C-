/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:45:11 by carys             #+#    #+#             */
/*   Updated: 2022/11/01 12:56:51 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>   

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &fixed);
        ClapTrap &operator = (const ClapTrap &fixed);
        ~ClapTrap();
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        void setName(std::string _name);
        void setHitPoints(int hit);
        void setEnergyPoints(int energy);
        void setAttackDamage(int attack);

        std::string getName() const;
        int getHitPoints() const;
        int getEnergyPoints()const;
        int getAttackDamage()const;

        void printMessage();
        
    private:
//Name, which is passed as parameter to a constructor
        std::string name;
//Hit points (10), represent the health of the ClapTrap
        int hitPoints;
//Energy points (10)
        int energyPoints;
//Attack damage (0)
        int attackDamage;
};

#endif