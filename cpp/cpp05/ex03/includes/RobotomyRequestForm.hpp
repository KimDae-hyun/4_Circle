/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:53:51 by daekim            #+#    #+#             */
/*   Updated: 2021/11/27 15:53:52 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public Form
{
    private:

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &src);
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm& operator= (const RobotomyRequestForm &src);
        virtual ~RobotomyRequestForm();
        virtual void execute(Bureaucrat const & executor) const;

};

#endif
