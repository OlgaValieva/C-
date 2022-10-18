/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:18:36 by carys             #+#    #+#             */
/*   Updated: 2022/10/18 13:43:51 by carys            ###   ########.fr       */
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
        std::cout << "input: ADD || SEARCH || EXIT:\n";
        getline(std::cin, command);
        if (command == "ADD")
        {
            if (Book.AddContact())
                continue;
        }
        else if (command == "SEARCH")
        {
            std::cout << "\nAll contacts:" << std::endl;
            Book.SearchContact();
        }
        else if (command == "EXIT")
        {
            std::cout << "SEE YOU" << std::endl;
            break;
        }
        else
            std::cout << "ERROR\n" << std::endl;  
    }
    return(0);
}