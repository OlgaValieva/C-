/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:03:02 by carys             #+#    #+#             */
/*   Updated: 2022/11/01 16:53:41 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        DiamondTrap();
        DiamondTrap(std::string name );
        DiamondTrap(const DiamondTrap&fixed);
        DiamondTrap &operator = (const DiamondTrap&fixed);
        ~DiamondTrap();

        void whoAmI();
        void attack(const std::string& target);
        
     private:
        std::string name;
};

#endif