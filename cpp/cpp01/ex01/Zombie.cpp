/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:21:04 by daekim            #+#    #+#             */
/*   Updated: 2021/11/21 17:21:05 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    name = "daekim";
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

void    Zombie::announce(void)
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string name, int i)
{
    std::string str;
    std::stringstream num;

    num << i;
    str = num.str();
    this->name = name + str;
}

Zombie::~Zombie()
{
    std::cout << name << " is gone..." << std::endl;
}
