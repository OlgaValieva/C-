/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:18:33 by carys             #+#    #+#             */
/*   Updated: 2022/10/19 11:07:25 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>   //cout, cin, endl
#include <string>
#include <iomanip>   //ignore

class Contact
{
    public:
        Contact();
        ~Contact();
        void setFirstName(std:: string str);
        void setLastName(std:: string str);
        void setNickName(std:: string str);
        void setPhoneNumber(std:: string str);
        void setDarkestSecret(std:: string str);
        
        std:: string getFirstName();
        std:: string getLastName();  
        std:: string getNickName();  
        std:: string getPhoneNumber();  
        std:: string getDarkestSecret();
    
    private:
        std:: string FirstName;
        std:: string LastName;  
        std:: string NickName;  
        std:: string PhoneNumber;  
        std:: string DarkestSecret;
};

#endif