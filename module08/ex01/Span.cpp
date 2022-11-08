/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:17:55 by carys             #+#    #+#             */
/*   Updated: 2022/11/08 14:30:30 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    N = 0;
}

Span::Span(unsigned int n)
{
    N = n;
}

Span::Span(const Span &span)
{
    *this = span; 
}

Span &Span::operator = (const Span &span)
{
     if (this == &span)
        return (*this);
    N = span.getN();
    arr = span.getArr();
    return (*this);
}

Span::~Span()
{
    
}
        
unsigned int Span::getN() const
{
    return N;
}

std::vector <int> Span::getArr() const
{
    return arr;
}
        
void Span::addNumber(int n)
{
    if (arr.size()>= N)
        throw Span::GradeTooHighException();
    arr.push_back(n);
}

int Span::shortestSpan()
{
    if (arr.size()<= 1)
        throw Span::GradeTooLowException();
    std::vector<int> sortArr = arr;
    std::sort(sortArr.begin(),sortArr.end());
    int shortest = *std::max_element(sortArr.begin(),sortArr.end());
    for (unsigned int i = 0; i <sortArr.size(); i++)
        if (i > 0 && std::abs(sortArr[i] - sortArr[i - 1]) < shortest) 
            shortest = std::abs(sortArr[i] - sortArr[i - 1]);
    return (shortest);
}
        
int Span::longestSpan()
{
    if (arr.size()<= 1)
        throw Span::GradeTooLowException();
    return (*std::max_element(arr.begin(),arr.end()) - *std::min_element(arr.begin(),arr.end()));
}

void Span::addNumber(std::vector <int>::iterator start, std::vector <int>::iterator end)
{
    if (end <= start)
        return ;
    for (std::vector <int>::iterator i = start; i != end; ++i)
       addNumber(*i);
}
    