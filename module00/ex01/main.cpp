/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:18:36 by carys             #+#    #+#             */
/*   Updated: 2022/10/17 13:22:24 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    std:: string command;
    PhoneBook Book;

    while(1)
    {
        std:cout << "ADD || SEARCH || EXIT";
        getline(std::cin, command);
        if (command == "ADD")
        {
            std:cout << "ADD contact" << std::endl;
            if (Book.AddContact())
                continue;
            std:cout << "contact added" << std::endl;
        }
        else if (command == "SEARCH")
        {
            std:cout << "SEARCH contact" << std::endl;
            Book.SearchContact();
        }
        else if (command == "EXIT")
        {
            std:cout << "EXIT" << std::endl;
            break;
        }
        else
            std:cout << "ERROR\n" << std::endl;  
    }
    return(0);
}