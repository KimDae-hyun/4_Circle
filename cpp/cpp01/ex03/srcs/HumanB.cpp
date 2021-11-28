/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:22:09 by daekim            #+#    #+#             */
/*   Updated: 2021/11/21 17:22:10 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB(void)
{
	;
}

void HumanB::setWeapon(Weapon *weapon)
{
	this->weapon = weapon;
}

void HumanB::attack()
{
	if (weapon)
		std::cout << this->name << " is attacking with " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " is attacking with hand" << std::endl;
}
