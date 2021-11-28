/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:39:14 by daekim            #+#    #+#             */
/*   Updated: 2021/11/26 19:39:17 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

Ice::Ice()
{
	type = "ice";
	std::cout << "new Ice!" << std::endl;
}

Ice::Ice(const Ice& src) : AMateria (src)
{
	std::cout << "new Ice!" << std::endl;
}

Ice & Ice::operator=(const Ice& src)
{
	if (this != &src)
	{
		type = src.getType();
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "delete Ice!" << std::endl;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{
	AMateria *ice = new Ice();
	return (ice);
}
