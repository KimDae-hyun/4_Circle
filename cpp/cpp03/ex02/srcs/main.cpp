/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:40:07 by daekim            #+#    #+#             */
/*   Updated: 2021/11/25 18:40:10 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

int main()
{
	{	
		ClapTrap soldier("TEST");
		
		soldier.attack("peter");
		soldier.beRepaired(1);
		soldier.takeDamage(2);
	}
    std::cout << std::endl;
	{
		FragTrap james("JAMES");

		james.highFiveGuys();
		james.attack("peter");
		james.beRepaired(1);
		james.takeDamage(2);
	}
    std::cout << std::endl;
    {
        FragTrap soldier;

		soldier.highFiveGuys();
        soldier.attack("james");
        soldier.takeDamage(2000);
        soldier.beRepaired(100);
    }
    std::cout << std::endl;
    {
        FragTrap manA("manA");
        FragTrap manB(manA);

		manB.highFiveGuys();
        manB.attack("james");
        manB.takeDamage(2000);
        manB.beRepaired(100);
    }

	return (0);
}
