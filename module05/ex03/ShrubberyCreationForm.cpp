/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:57:44 by carys             #+#    #+#             */
/*   Updated: 2022/11/03 19:44:07 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
    target = "not";
}

ShrubberyCreationForm::ShrubberyCreationForm (std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm  &p) : Form(p.getName(), p.getIsSigned(), p.getToExecute())
{
    target = p.getTarget();
}

ShrubberyCreationForm  &ShrubberyCreationForm::operator = (const ShrubberyCreationForm  &p)
{
    if (this != &p)
    {
        Form::operator=(p);
        target = p.getTarget();
    }
    return (*this); 
}

ShrubberyCreationForm::~ShrubberyCreationForm () {}
        
std::string ShrubberyCreationForm::getTarget() const
{
    return (target);
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > getToExecute())
        throw (Form::GradeTooLowException());
    else if (!getIsSigned())
        throw (Form::FormIsNotSigned());
    else
    {
        std::ofstream file;
        file.open(target + "_shrubbery");
        
        if (!file.is_open())
        {
            std::cout << "error in open file" << std::endl;
            return ;
        }
        else
        {
            file<<CLR"          &&&&&&&&"RST<< std::endl
                <<CLR"      &&||&||&()|/@,&"RST<< std::endl
                <<CLR"     &/||/&/&||/&/_/)_&&"RST<< std::endl
                <<CLR" &() &||&|()&||&|()/&||()"RST<< std::endl
                <<CLR" &_|_&&_||& |&&/&__%_/& &&"RST<< std::endl
                <<CLR" && && & |&| /& & % ()& /&&"RST<< std::endl
                <<CLR" ()&_---()&|&||&&-&&--%---()~"RST<< std::endl
                <<BRN"     &&     ||||"RST<< std::endl
                <<BRN"            |||"RST<< std::endl
                <<BRN"            |||"RST<< std::endl
                <<BRN"            |||"RST<< std::endl
                <<BRN"     , -=-~  .-^- _"<< std::endl;
                    
        }
        file.close();
    }      
}