/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:03:39 by carys             #+#    #+#             */
/*   Updated: 2022/11/03 19:42:26 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define CLR "\x1b[1;32m"
#define RST "\x1b[0m"
#define BRN "\x1b[0;31m"

#include <iostream>
#include <exception>
#include <fstream> 

#include "Form.hpp"  

class Form;   

class Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &bureaucrat);
        Bureaucrat &operator = (const Bureaucrat &bureaucrat);
        ~Bureaucrat();
        
        std::string getName() const;
        int getGrade() const;
        void increment();
        void decrement();
        void signForm(Form &form);
        
        void executeForm(Form const & form);  // add
        
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };
    
        class GradeTooLowException  : public std::exception
        {
             virtual const char* what() const throw();
        };
        
    private:
        const std::string name;
        int grade; 
};

std::ostream &operator << (std::ostream &outstr, const Bureaucrat &bureaucrat);

#endif