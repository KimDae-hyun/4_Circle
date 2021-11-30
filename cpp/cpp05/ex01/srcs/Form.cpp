/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:15:05 by daekim            #+#    #+#             */
/*   Updated: 2021/11/27 13:18:17 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form(void) : name("paper"), signGrade(120), executeGrade(80)
{
    sign = false;
    std::cout << "Create Form!" << std::endl;
}

Form::Form(const Form &src) : name(src.name), signGrade(120), executeGrade(80)
{
    *this = src;
    std::cout << "Create Form!" << std::endl;
}

Form::Form(const std::string name, const int signGrade, const int executeGrade) : \
    name(name), signGrade(signGrade), executeGrade(executeGrade)
{
    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException;
    else if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException;
    std::cout << "Create Form!" << std::endl;
    sign = false;
}

Form& Form::operator=(const Form &src)
{
    if (this != &src)
    {
        sign = src.sign;
    }
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Form &src)
{
    os << "<" << src.getName() << \
    ">, signGrade <" << src.getSignGrade() << \
    ">, executeGrade <" << src.getExecuteGrade() << \
    ">, sign <" << src.getSign() << \
    ">" << std::endl;
    return (os);
}

Form::~Form()
{
    std::cout << "Delete Form!" << std::endl;
}

std::string Form::getName() const
{
    return (name);
}

int Form::getSignGrade() const
{
    return (signGrade);
}

int Form::getExecuteGrade() const
{
    return (executeGrade);
}

bool Form::getSign() const
{
    return (sign);
}

void Form::beSigned(const Bureaucrat &bur)
{
    if (getSignGrade() < bur.getGrade())
    {
        sign = false;
        throw *GradeTooLowException;
    }
    sign = true;
}