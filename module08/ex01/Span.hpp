/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:18:22 by carys             #+#    #+#             */
/*   Updated: 2022/11/08 14:27:24 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#define CLR "\x1b[1;32m"
#define RST "\x1b[0m"
#define BRN "\x1b[0;31m"

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <cmath>


class Span
{
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &span);
        Span &operator = (const Span &span);
        ~Span();
        
        unsigned int getN() const;
        std::vector <int> getArr() const;
        
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        void addNumber(std::vector <int>::iterator start, std::vector <int>::iterator end);
        
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw()
            {
                return ("Span is Full");
            }
        };
    
        class GradeTooLowException  : public std::exception
        {
             virtual const char* what() const throw()
             {
                return ("Span is Empty");
             }
        };
        
    private:
        unsigned int N;
        std::vector <int> arr;
};

#endif