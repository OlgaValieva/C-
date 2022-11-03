/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:03:35 by carys             #+#    #+#             */
/*   Updated: 2022/11/03 15:05:29 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("nameless"), grade(150) {}

Bureaucrat::Bureaucrat(std::string newname, int grade) : name(newname)
{
    if (grade < 1)
        throw (Bureaucrat::GradeTooHighException());
    else if (grade > 150)
        throw (Bureaucrat::GradeTooLowException());
    else
        this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : name(bureaucrat.getName()), grade(bureaucrat.getGrade()) {}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &bureaucrat)
{
    if (this == &bureaucrat)
        return (*this);
    grade = bureaucrat.getGrade();
    return (*this); 
}

Bureaucrat::~Bureaucrat() {}
        
std::string Bureaucrat::getName() const {return name;}

int Bureaucrat::getGrade() const {return grade;}

void Bureaucrat::increment()
{
    if ((grade - 1) < 1)
        throw (Bureaucrat::GradeTooHighException());
    grade--;   
}

void Bureaucrat::decrement()
{
    if ((grade + 1) > 150)
        throw (Bureaucrat::GradeTooLowException());
    grade++;   
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is Too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is Too Low");
}

std::ostream &operator << (std::ostream &outstr, const Bureaucrat &bureaucrat)
{
    return (outstr<< bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl);
}

 void Bureaucrat::signForm(Form &form)
 {
    try
    {
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << name << " couldn’t sign " << form.getName()<< " because " << e.what() << std::endl;
    }
 }
