/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:43:00 by carys             #+#    #+#             */
/*   Updated: 2022/11/01 13:46:15 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp" 

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name );
        FragTrap(const FragTrap&fixed);
        FragTrap &operator = (const FragTrap &fixed);
        ~FragTrap();

        void highFivesGuys(void);
};

#endif