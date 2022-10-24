/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:38:37 by carys             #+#    #+#             */
/*   Updated: 2022/10/24 11:53:52 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>   
#include <string>

int main()
{
   std::string brain = "HI THIS IS BRAIN";
   std::string *stringPTR = &brain;
   std::string &stringREF = brain;

   std::cout << "The memory address of the string variable: " << &brain << std::endl;
   std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
   std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;
   
   std::cout << "\nThe value of the string variable: " << brain << std::endl;
   std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
   std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
   return (0);
}