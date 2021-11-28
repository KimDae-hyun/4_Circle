/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:22:10 by daekim            #+#    #+#             */
/*   Updated: 2021/11/21 17:22:11 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(void)
{
	;
}


Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon(void)
{
	;
}

const std::string& Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
