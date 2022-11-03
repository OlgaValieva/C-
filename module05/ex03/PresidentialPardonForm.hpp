/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:57:33 by carys             #+#    #+#             */
/*   Updated: 2022/11/03 17:44:45 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"  

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm ();
        PresidentialPardonForm (std::string target);
        PresidentialPardonForm (const PresidentialPardonForm  &p);
        PresidentialPardonForm  &operator = (const PresidentialPardonForm  &p);
        ~PresidentialPardonForm ();
        
        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
        
    private:
        std::string target;
};

#endif