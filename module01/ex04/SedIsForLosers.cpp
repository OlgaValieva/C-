/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedIsForLosers.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:06:31 by carys             #+#    #+#             */
/*   Updated: 2022/10/25 14:52:30 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsForLosers.hpp"

SedIsForLosers::SedIsForLosers(){}
SedIsForLosers::~SedIsForLosers(){}

void  SedIsForLosers::newfile(std::string filename, std::string s1, std::string s2)
{
    std::ifstream file(filename); // файловый ввод
    std::ofstream repfile(filename + ".replace"); // файловый вывод
    std::string buff; 

    if (!file.is_open() || !repfile.is_open()) //	Определяет, открыт ли файл.
    {
        std::cout << "error in open file" << std::endl;
        return ;
    }
    while(std::getline(file, buff))
    {
        int posish = buff.find(s1);
        while(posish != -1)
        {
            buff.erase(posish,s1.length()); //Erases the sequence of characters in the range
            buff.insert(posish,s2); // Inserts character s2
            posish = buff.find(s1, posish + s1.length());
        }
        repfile << buff + "\n";
    }
    file.close(); //Закрывает файл.
    repfile.close(); //Закрывает файл.
}