/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:57:37 by carys             #+#    #+#             */
/*   Updated: 2022/11/04 10:56:48 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm () : Form("RobotomyRequestForm", 72, 45)
{
    target = "not";
}

RobotomyRequestForm::RobotomyRequestForm (std::string target) : Form("RobotomyRequestForm", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm  &p) : Form(p.getName(), p.getIsSigned(), p.getToExecute())
{
    target = p.getTarget();
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm  &p)
{
    if (this != &p)
    {
        Form::operator=(p);
        target = p.getTarget();
    }
    return (*this); 
}

RobotomyRequestForm::~RobotomyRequestForm () {}
        
std::string RobotomyRequestForm::getTarget() const
{
    return (target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    int happen;
    if(executor.getGrade() > getToExecute())
        throw (Form::GradeTooLowException());
    else if (!getIsSigned())
        throw (Form::FormIsNotSigned());
    else
        {
            std::cout << ".........Makes some drilling noises.........." << std::endl;
            happen = std::rand() % 2;
            if(happen == 1)
                std::cout << target << " robotomized successfully" << std::endl;
            else
                std::cout << target << " robotomy failed " << std::endl;
        }    
}