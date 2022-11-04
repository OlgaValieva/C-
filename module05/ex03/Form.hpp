/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:00:14 by carys             #+#    #+#             */
/*   Updated: 2022/11/04 10:50:52 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form();
        Form(const std::string name, int ngradeToSign, int ngradeToExecute);
        Form(const Form &form);
        Form &operator = (const Form&form);
        virtual~Form();
        
        std::string getName() const;
        bool getIsSigned() const;
        int getToSign() const;
        int getToExecute() const;
        void beSigned(Bureaucrat &bureaucrat);
        
        virtual void execute(Bureaucrat const & executor) const = 0; 

        class FormIsNotSigned : public std::exception 
        {
            virtual const char* what() const throw()
            {
                return ("Forma not signed");
            }
        };
        
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
        bool isSigned;
        const int toSign;
        const int toExecute;
};

std::ostream &operator << (std::ostream &outstr, const Form &form);

#endif