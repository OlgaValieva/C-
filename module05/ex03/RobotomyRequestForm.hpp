/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:57:41 by carys             #+#    #+#             */
/*   Updated: 2022/11/03 18:08:24 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP

#include "Form.hpp"  

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm ();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm (const RobotomyRequestForm &p);
        RobotomyRequestForm  &operator = (const RobotomyRequestForm  &p);
        ~RobotomyRequestForm ();
        
        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
        
    private:
        std::string target;
};

#endif