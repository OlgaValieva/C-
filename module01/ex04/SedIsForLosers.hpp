/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedIsForLosers.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:42:38 by carys             #+#    #+#             */
/*   Updated: 2022/10/25 13:35:38 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SEDISFORLOSERS_HPP
#define SEDISFORLOSERS_HPP

#include <iostream>   
#include <string>
#include <fstream> //ifstream ofstream 

class SedIsForLosers
{
    public:
        SedIsForLosers();
        ~SedIsForLosers();
        void  newfile(std::string filename, std::string s1, std::string s2);
    private:
        std:: string name;
};

#endif