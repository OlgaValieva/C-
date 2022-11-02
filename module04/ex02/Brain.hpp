/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:57:19 by carys             #+#    #+#             */
/*   Updated: 2022/11/02 13:48:38 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#define CLR "\x1b[1;32m"
#define RST "\x1b[0m"

#include <iostream>

class Brain 
{
    public:
        Brain();
        Brain(const Brain &brain);
        Brain &operator=(const Brain &brain);
        ~Brain();

        void makeIdeas();
        void setIdeas(std::string idea);
        
    private:
         std::string ideas[100];

};

#endif