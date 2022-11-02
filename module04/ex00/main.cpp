/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:52:25 by carys             #+#    #+#             */
/*   Updated: 2022/11/02 12:39:00 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    std::cout << CLR"~~~~~~~~~~~~~~~~~~~~~~            ADDITIONAL TESTS         ~~~~~~~~~~~~~~~~~~~~~~"RST<< std::endl;
    const WrongAnimal* wmeta = new WrongAnimal();
    const WrongAnimal* w = new WrongCat();
    std::cout << w->getType() << " " << std::endl;
    w->makeSound(); //will output the wcat sound!
    wmeta->makeSound();

    delete (meta);
    delete (j);
    delete (i);
    delete (wmeta);
    delete (w);
    
    return 0;
}