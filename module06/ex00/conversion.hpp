/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:51:51 by carys             #+#    #+#             */
/*   Updated: 2022/11/04 18:08:53 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#define CLR "\x1b[1;32m"
#define RST "\x1b[0m"
#define BRN "\x1b[0;31m"

#include <iomanip> 
#include <iostream>
#include <climits>
#include <string>

class Conversion
{
    public:
        Conversion();
        Conversion(std::string str);
        Conversion(const Conversion &conversion);
        Conversion &operator = (const Conversion &conversion);
        ~Conversion();
        
        std::string getStr() const;
        void toChar();
        void toInt();
        void toFloat();
        void toDouble();
    private:
        std::string str;
};

#endif