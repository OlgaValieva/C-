/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:57:27 by carys             #+#    #+#             */
/*   Updated: 2022/11/03 19:34:50 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm () : Form("PresidentialPardonForm", 25, 5)
{
    target = "not";
}

PresidentialPardonForm::PresidentialPardonForm (std::string target) : Form("PresidentialPardonForm", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm  &p) : Form(p.getName(), p.getIsSigned(), p.getToExecute())
{
    target = p.getTarget();
}

PresidentialPardonForm  &PresidentialPardonForm::operator = (const PresidentialPardonForm  &p)
{
    if (this != &p)
    {
        Form::operator=(p);
        target = p.getTarget();
    }
    return (*this); 
}

PresidentialPardonForm::~PresidentialPardonForm () {}
        
std::string PresidentialPardonForm::getTarget() const
{
    return (target);
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > getToExecute())
        throw (Form::GradeTooLowException());
    else if (!getIsSigned())
        throw (Form::FormIsNotSigned());
    else
        std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}