/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:33:47 by daekim            #+#    #+#             */
/*   Updated: 2021/11/25 18:33:50 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    {
        ClapTrap james("james");

        james.attack("peter");
        james.takeDamage(1000);
        james.beRepaired(100000);
    }
    std::cout << std::endl;
    {
        ClapTrap soldier;

        soldier.attack("james");
        soldier.takeDamage(2000);
        soldier.beRepaired(100);
    }
    std::cout << std::endl;
    {
        ClapTrap manA("manA");
        ClapTrap manB(manA);

        manB.attack("james");
        manB.takeDamage(2000);
        manB.beRepaired(100);
    }

    return (0);
}
