/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:51:57 by carys             #+#    #+#             */
/*   Updated: 2022/11/05 13:37:00 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

Conversion::Conversion() : str("") {}

Conversion::Conversion(std::string nstr) : str(nstr) {}

Conversion::Conversion(const Conversion &conversion)
{
    *this = conversion; 
}

Conversion &Conversion::operator = (const Conversion &conversion)
{
    if (this == &conversion)
        return(*this);
    str = conversion.getStr();
    return (*this); 
}

Conversion::~Conversion() {}
        
std::string Conversion::getStr() const { return(str); }

void Conversion::toChar()
{
    int ch = 0;
    std::cout << "char: ";
    if (str.length() == 1)
    {
        try
        {
            ch = std::stoi(str);
            if (!isprint(ch))
                std::cout << "Non displayable" << std::endl;
            else
            {
                char n = static_cast<char>(ch);
                std::cout << " " << n << " " << std::endl;
            }      
        }
        catch (std::invalid_argument &e)
        {
            std::cout << "\'" << str[0] << "\'" << std::endl;
        }
        catch (std::out_of_range &e)
        {
            std::cout << "impossible" << std::endl;
        } 
    }
    else
    {
        try
        {
            ch = std::stoi(str);
            if (ch > CHAR_MAX || ch < CHAR_MIN)
                std::cout << "impossible" << std::endl;
            else if (!isprint(ch))
                std::cout << "Non displayable" << std::endl;
            else
            {
                char n = static_cast<char>(ch);
                std::cout << "\'" << n << "\'" << std::endl;
            }
        }
        catch (std::invalid_argument &e)
        {
            std::cout << "impossible" << std::endl;
        }
        catch (std::out_of_range &e)
        {
            std::cout << "impossible" << std::endl;
        }  
    } 
}

void Conversion::toInt()
{
    int ch = 0;
    std::cout << "int: ";
    try
    {
        ch = std::stoi(str);
        std::cout << ch << std::endl; 
    }
    catch (std::invalid_argument &e)
    {
        std::cout << "impossible" << std::endl;
    }
    catch (std::out_of_range &e)
    {
        std::cout << "impossible" << std::endl;
    } 
}

void Conversion::toFloat()
{
    float ch = 0;
    std::cout << "float: ";
    try
    {
        ch = std::stof(str);
        std::cout << std::fixed << std::setprecision(1) << ch << "f" << std::endl; 
    }
    catch (std::invalid_argument &e)
    {
        std::cout << "impossible" << std::endl;
    }
    catch (std::out_of_range &e)
    {
        std::cout << "impossible" << std::endl;
    } 
}

void Conversion::toDouble()
{
    double ch = 0;
    std::cout << "double: ";
    try
    {
        ch = std::stod(str);
        std::cout << std::fixed << std::setprecision(1) << ch << std::endl; 
    }
    catch (std::invalid_argument &e)
    {
        std::cout << "impossible" << std::endl;
    }
    catch (std::out_of_range &e)
    {
        std::cout << "impossible" << std::endl;
    } 
}