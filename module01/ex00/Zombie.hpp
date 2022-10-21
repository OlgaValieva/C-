/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:42:22 by carys             #+#    #+#             */
/*   Updated: 2022/10/21 15:01:02 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>   
#include <string>

class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce( void );
    
    private:
        std:: string name;
};

Zombie *newZombie( std::string name );
void randomChump( std::string name );

#endif