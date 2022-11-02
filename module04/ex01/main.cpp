/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:52:25 by carys             #+#    #+#             */
/*   Updated: 2022/11/02 15:21:10 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // delete j;//should not create a leak
    // delete i;
    // std::cout << CLR"~~~~~~~~~~~~~~~~~~~~~~            ADDITIONAL TESTS         ~~~~~~~~~~~~~~~~~~~~~~"RST<< std::endl;
	Animal *array[4];
    for (int i = 0; i < 4; i++)
	{
        if (i % 2)
        {
            std::cout << CLR"Dog~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
            array[i] = new Dog();
        }	
		else
        {
            std::cout << CLR"Cat~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
            array[i] = new Cat();
        }            
	}
    std::cout << CLR"makeSound~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
	for (int i = 0; i < 4; i++)
		array[i]->makeSound();
    std::cout << CLR"destrucor~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
	for (int i = 0; i < 4; i++)
        delete (array[i]);
    std::cout << CLR"Defolt construcor~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
    Dog *dog = new Dog;
	dog->getBrain()->setIdeas("Men");
    dog->getBrain()->setIdeas("Friend");
    dog->getBrain()->setIdeas("Dog");
	std::cout << CLR"makeIdeas~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-"RST<< std::endl;
    dog->getBrain()->makeIdeas();
	std::cout << CLR"Copy constructor~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST<< std::endl;
    Dog *newdog = new Dog(*dog);
	newdog->getBrain()->makeIdeas();
    std::cout << CLR"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;

	delete dog;
	delete newdog;
    return 0;
}