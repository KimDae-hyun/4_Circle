/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:54:16 by daekim            #+#    #+#             */
/*   Updated: 2021/11/27 15:54:17 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"
#include "../includes/Intern.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"

int main()
{
    Form *scf;
    Form *rrf;
    Form *ppf;
    Form *wrong;
    std::cout << "test 1 ------------------" << std::endl;
    try
    {
        Intern someRandomIntern;

        scf = someRandomIntern.makeForm("shrubbery creation", "warrr_Mansion");
        rrf = someRandomIntern.makeForm("robotomy request", "robo");
        ppf = someRandomIntern.makeForm("presidential pardon", "cheolsoo");
        wrong = someRandomIntern.makeForm("Wrong case", "cheolsoo");

        Bureaucrat cheolsoo(2);
    
        if (scf != 0)
        {
            scf->beSigned(cheolsoo);
            cheolsoo.executeForm(*scf);
        }
        if (rrf != 0)
        {
            rrf->beSigned(cheolsoo);
            cheolsoo.executeForm(*rrf);
        }
        if (ppf != 0)
        {
            ppf->beSigned(cheolsoo);
            cheolsoo.executeForm(*ppf);
        }
        if (wrong != 0)
        {
            wrong->beSigned(cheolsoo);
            cheolsoo.executeForm(*wrong);
        }
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    delete scf;
    delete rrf;
    delete ppf;
    delete wrong;
    return (0);
}
