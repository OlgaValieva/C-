/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:45:49 by carys             #+#    #+#             */
/*   Updated: 2022/11/03 21:48:52 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern ();
        Intern (const Intern &p);
        Intern  &operator = (const Intern  &i);
        ~Intern ();
        
        Form *makeForm(std::string name, std::string target);
        
        class FormIsNotFound : public std::exception 
        {
            virtual const char* what() const throw()
            {
                return ("Form not found");
            }
        };
};

#endif