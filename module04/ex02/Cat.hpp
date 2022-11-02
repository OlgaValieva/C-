/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:56:59 by carys             #+#    #+#             */
/*   Updated: 2022/11/02 16:53:00 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat (const Cat &cat);
        Cat &operator=(const Cat &cat);
        virtual ~Cat();

        virtual void makeSound() const;
        Brain *getBrain () const;
        
    private:
        Brain *brain;
};

#endif