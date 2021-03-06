/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:53:52 by daekim            #+#    #+#             */
/*   Updated: 2021/11/27 15:53:53 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>
#include <cstdlib>

class ShrubberyCreationForm : public Form
{
    private:

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &src);
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm& operator= (const ShrubberyCreationForm &src);
        virtual ~ShrubberyCreationForm();
        virtual void execute(Bureaucrat const & executor) const;
        std::string GetShrubbery(int idx) const;
};

#endif
