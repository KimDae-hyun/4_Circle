/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:53:06 by daekim            #+#    #+#             */
/*   Updated: 2021/11/27 15:53:10 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"

int main()
{
    std::cout << "test 1 ------------------" << std::endl;
    try
    {
        Bureaucrat cheolsoo(2);
        ShrubberyCreationForm sh("warrr_Mansion");
        PresidentialPardonForm pr("cheolsoo");
        RobotomyRequestForm ro("robo");
    
        sh.beSigned(cheolsoo);
        cheolsoo.executeForm(sh);
        ro.beSigned(cheolsoo);
        cheolsoo.executeForm(ro);
        pr.beSigned(cheolsoo);
        cheolsoo.executeForm(pr);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "test 2 ------------------" << std::endl;
    try
    {
        Bureaucrat cheolsoo(140);
        Bureaucrat yuri(55);
        Bureaucrat hoon(15);
        ShrubberyCreationForm sh("warrr_Mansion");
        RobotomyRequestForm ro("robo");
        PresidentialPardonForm pr("hoon");

        try 
        {
            sh.beSigned(cheolsoo);
            cheolsoo.executeForm(sh);
        }
        catch(std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        try
        {
            ro.beSigned(yuri);
            yuri.executeForm(ro);
        }
        catch(std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        try
        {
            pr.beSigned(hoon);
            hoon.executeForm(pr);
        }
        catch(std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
