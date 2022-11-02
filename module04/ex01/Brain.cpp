/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:57:16 by carys             #+#    #+#             */
/*   Updated: 2022/11/02 12:08:48 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor" <<std::endl;
}

Brain::Brain(const Brain &brain)
{
    *this = brain;
    std::cout << "Brain Copy constructor" <<std::endl;
}

Brain & Brain::operator=(const Brain &brain)
{
    if (this == &brain)
        return (*this);
    for (int i = 0; i < 100; i++)
        ideas[i] = brain.ideas[i];
    return (*this);          
}

Brain::~Brain()
{
    std::cout << "Brain destructor" <<std::endl;         
}    

void Brain::makeIdeas()
{
    for (int i = 0; i < 100; i++)
    {
        if (!(ideas[i].length()))
            break ;
        std::cout << "Ideas " << i + 1 << ": " << ideas[i] <<std::endl;
    }    
}

void Brain::setIdeas(std::string idea)
{
    for (int i = 0; i < 100; i++)
    {
        if (!(ideas[i].length()))
        {
            ideas[i] = idea;
            break ;
        }
    } 
}