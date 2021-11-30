/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:54:12 by daekim            #+#    #+#             */
/*   Updated: 2021/11/27 15:54:13 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Form", 25, 5, "cheolsoo")
{
    std::cout << "Create PresidentialPardonForm!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src)
{
    *this = src;
    std::cout << "Copy Create PresidentialPardonForm!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("Presidential Form", 25, 5, target)
{
    std::cout << "Create PresidentialPardonForm!" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
    if (this != &src)
    {
        ;
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Delete PresidentialPardonForm!" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (getSign() == false)
        throw NotSignedException;
    if (executor.getGrade() > getExecuteGrade())
        throw *GradeTooLowException;
    std::cout << "PresidentialForm : <" << getTarget() << "> has been pardoned by Zafod Beeblebrox." << std::endl;
}
