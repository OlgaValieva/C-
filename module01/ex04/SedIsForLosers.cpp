/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedIsForLosers.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:06:31 by carys             #+#    #+#             */
/*   Updated: 2022/10/26 15:13:34 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsForLosers.hpp"

SedIsForLosers::SedIsForLosers(){}
SedIsForLosers::~SedIsForLosers(){}

void  SedIsForLosers::newfile(std::string filename, std::string s1, std::string s2)
{
    std::ifstream file(filename);
    std::ofstream repfile(filename + ".replace"); 
    std::string buff; 

    if (!file.is_open() || !repfile.is_open()) 
    {
        std::cout << "error in open file" << std::endl;
        return ;
    }
    while(std::getline(file, buff))
    {
        int posish = buff.find(s1);
        while(posish != -1)
        {
            buff.erase(posish,s1.length()); 
            buff.insert(posish,s2); 
            posish = buff.find(s1, posish + s1.length());
        }
        repfile << buff + "\n";
    }
    file.close(); 
    repfile.close(); 
}