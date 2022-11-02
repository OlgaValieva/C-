/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:57:13 by carys             #+#    #+#             */
/*   Updated: 2022/11/02 15:47:58 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#define CLR "\x1b[1;32m"
#define RST "\x1b[0m"

#include <iostream>

class WrongAnimal 
{
    public:
        WrongAnimal();
        WrongAnimal (const WrongAnimal &wrongAnimal);
        WrongAnimal &operator=(const WrongAnimal &wrongAnimal);
        virtual ~WrongAnimal();

        virtual void makeSound() const;
        std::string getType() const;
        
    protected:
        std::string type;
};

#endif