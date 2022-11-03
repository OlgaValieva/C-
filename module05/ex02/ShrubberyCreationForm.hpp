/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:57:48 by carys             #+#    #+#             */
/*   Updated: 2022/11/03 19:01:37 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERYCREATIONFORM_HPP
#define SHRUBERYCREATIONFORM_HPP

#include "Form.hpp"  

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &p);
        ShrubberyCreationForm &operator = (const ShrubberyCreationForm  &p);
        ~ShrubberyCreationForm ();
        
        std::string getTarget() const;
        void execute(const Bureaucrat  & executor) const;
        
    private:
        std::string target;
};

#endif