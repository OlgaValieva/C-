/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:56:53 by carys             #+#    #+#             */
/*   Updated: 2022/11/02 12:57:07 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:
        Animal();
        Animal (const Animal &animal);
        Animal &operator=(const Animal &animal);
        virtual ~Animal();

        virtual void makeSound() const;
        std::string getType() const;
        
    protected:
        std::string type;
        
};

#endif