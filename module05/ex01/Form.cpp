/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:00:04 by carys             #+#    #+#             */
/*   Updated: 2022/11/03 16:33:12 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("nameless"), isSigned(false), toSign(1), toExecute(150) {}
Form::Form(const std::string nname, int nToSign, int nToExecute)  : name(nname), isSigned(false), toSign(nToSign), toExecute(nToExecute)
{
    if (toSign > 150 || toExecute > 150)
        throw (Form::GradeTooLowException());
    if (toSign < 1 || toExecute < 1)
        throw (Form::GradeTooHighException());
}
Form::Form(const Form &form) : name(form.getName()), isSigned(form.getIsSigned()), toSign(form.getToSign()), toExecute(form.getToExecute()){}

Form &Form::operator = (const Form &form)
{
       if (this == &form)
        return (*this);
    isSigned = form.getIsSigned();
    return (*this); 
}
Form::~Form() {}
        
std::string Form::getName() const  {return name;}

bool Form::getIsSigned() const  {return isSigned;}

int Form::getToSign() const {return (toSign);}

int Form::getToExecute() const{return (toExecute);}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > toSign)
        throw (Form::GradeTooLowException());
    else if (!isSigned)
        isSigned = true;
}
        
const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is Too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is Too Low");
}

std::ostream &operator << (std::ostream &outstr, const Form &form)
{
    return outstr << "Form name : " << form.getName() << "\n" << "Form is signed: " << form.getIsSigned() << "\n"
		<< "Grade required to sign form: " << form.getToSign() << "\n" << "Grade required to execute: "
		<< form.getToExecute() << std::endl;
}