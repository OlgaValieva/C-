/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:18:41 by carys             #+#    #+#             */
/*   Updated: 2022/10/20 13:18:57 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook:: PhoneBook() {}
PhoneBook::~PhoneBook() {}

static int ft_empty()
{
    std::cout << "Empty input" << std::endl;
    return(1);
}

int PhoneBook::AddContact()
{
    static int index = -1;
    std::string command;

    index = index < 7 ? index + 1 : 0;

    std::cout << "FirstName: ";
    std::getline(std::cin, command);
    if (command.empty())
        ft_empty();
    contacts[index].setFirstName(command);
    
    std::cout << "LastName: ";
    std::getline(std::cin, command);
    if (command.empty())
        ft_empty();
    contacts[index].setLastName(command);

    std::cout << "NickName: ";
    std::getline(std::cin, command);
    if (command.empty())
        ft_empty();
    contacts[index].setNickName(command);

    std::cout << "PhoneNumber: ";
    std::getline(std::cin, command);
    if (command.empty())
        ft_empty();
    contacts[index].setPhoneNumber(command);

    std::cout << "DarkestSecret: ";
    std::getline(std::cin, command);
    if (command.empty())
        ft_empty();
    contacts[index].setDarkestSecret(command);
    return(0);
}

void PhoneBook::SearchContact()
{
    int index;
    int size = 0;
    int i = 0;

    std::cout << "\n|     index|First Name| Last Name|  NickName|" << std::endl;
    while (i < 8)
    {
        std::string FirstName = contacts[i].getFirstName();
        if (FirstName.empty())
            break;
        std::cout << "|" << std::right << std::setw(10) << i + 1 << "|";
        std::string newFirstName = FirstName.length() > 10 ? FirstName.substr(0, 9) + ".": FirstName;
        std::cout << std::right << std::setw(10) << newFirstName << "|";

        std::string LastName = contacts[i].getLastName();
        std::string newLastName = LastName.length() > 10 ? LastName.substr(0, 9) + ".": LastName;
        std::cout << std::right << std::setw(10) << newLastName << "|";

        std::string NickName = contacts[i].getNickName();
        std::string newNickName = NickName.length() > 10 ? NickName.substr(0, 9) + ".": NickName;
        std::cout << std::right << std::setw(10) << newNickName << "|" << std::endl;
        size++;
        i++;
    }
    std::cout << std::endl;
    std::cout << "input index: ";
    if (!(std::cin >> index) || index < 1 || index > size )
    {
        std::cin.clear();
        std::cout << "incorrect index" <<std::endl;
    }
    else
    {
        std::cout << std::endl;
        std::cout <<"index: " << index <<std::endl;
        index--;
        std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
        std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
        std::cout << "Nick Name: " << contacts[index].getNickName() << std::endl;
        std::cout << "PhoneNumber: " << contacts[index].getPhoneNumber() << std::endl;
        std::cout << "DarkestSecret: " << contacts[index].getDarkestSecret() << std::endl;
        std::cout << std::endl;
    }
       std::cin.ignore(32767, '\n');
}