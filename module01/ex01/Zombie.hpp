/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:10:08 by carys             #+#    #+#             */
/*   Updated: 2022/10/25 11:01:58 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>   
#include <string>
#include  <cstdint>

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void announce( void );
        void setName(std::string name);
    
    private:
        std:: string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif