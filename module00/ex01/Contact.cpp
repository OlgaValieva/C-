/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:18:30 by carys             #+#    #+#             */
/*   Updated: 2022/10/17 13:46:50 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact:: Contact() {}
Contact::~Contact() {}

void Contact::setFirstName(std:: string str)
    FirstName = str;    
void Contact::setLastName(std:: string str)
    LastName = str;
void Contact::setNickName(std:: string str)
    NickName = str;
void Contact::setPhoneNumber(std:: string str)
    PhoneNumber= str;
void Contact::setDarkestSecret(std:: string str)
    DarkestSecret = str;

std:: string getFirstName()
    return (FirstName);
std:: string getLastName()
    return (LastName);
std:: string getNickName()
    return (NickName); 
std:: string getPhoneNumber()
    return (PhoneNumber);
std:: string getDarkestSecret()
    return (DarkestSecret);