/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:35:42 by carys             #+#    #+#             */
/*   Updated: 2023/04/11 17:08:10 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <stack>
#include <stdexcept>
#include <string>

class RPN
{ 
    private :
        std::string     PolishMathematicalExpression;
        std::stack<int> numbers;
        int             expLen;
    
    public :
        RPN(std::string PolishMathematicalExpression);
        ~RPN();

        int expression();
};

class RPNException : public std::exception
{
    private:
        std::string message_;
        
    public:
        explicit RPNException(const char* message) : message_(message) {}
        virtual const char* what() const throw() {
            return message_.c_str();
        }
        virtual ~RPNException() throw() {}
};