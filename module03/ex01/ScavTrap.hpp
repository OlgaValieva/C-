/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:45:29 by carys             #+#    #+#             */
/*   Updated: 2022/10/31 21:21:00 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"  

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name );
        ScavTrap(const ScavTrap &fixed);
        ScavTrap &operator = (const ScavTrap &fixed);
        ~ScavTrap();

        void guardGate();
       // void attack(const std::string &target);
};

#endif