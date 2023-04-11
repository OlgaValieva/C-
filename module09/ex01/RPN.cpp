/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:04:20 by carys             #+#    #+#             */
/*   Updated: 2023/04/11 16:52:07 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string PolishMathematicalExpression)
{
    this->PolishMathematicalExpression = PolishMathematicalExpression;
    this->expLen = PolishMathematicalExpression.size();
}

RPN::~RPN() {}

int RPN::expression()
{
    for(int i = 0; i < expLen; i++)
    {
        if (std::isdigit(PolishMathematicalExpression[i]))
            numbers.push(PolishMathematicalExpression[i] - '0');
        else if (PolishMathematicalExpression[i]== '+' || PolishMathematicalExpression[i] == '-' || PolishMathematicalExpression[i] == '/' || PolishMathematicalExpression[i] == '*')
        {
            if (numbers.size() < 2)
                throw RPNException("Not enough numbers");
            int second = numbers.top();
            numbers.pop();
            int first = numbers.top();
            numbers.pop();

            switch(PolishMathematicalExpression[i]) {
                case '+':
                    numbers.push(first + second);
                    break;
                case '-':
                    numbers.push(first - second);
                    break;
                case '*':
                    numbers.push(first * second);
                    break;
                case '/':
                    if (second == 0) 
                        throw RPNException("Error");
                    numbers.push(first / second);
                    break;
            }
        }
        else if (PolishMathematicalExpression[i] == ' ')
            continue;
        else
            throw RPNException("Error");
    }

    if (numbers.size() != 1)
        throw RPNException("Not enough tokens");
    
    return numbers.top();
}
