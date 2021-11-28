/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:38:56 by daekim            #+#    #+#             */
/*   Updated: 2021/11/26 19:38:58 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria()
{
	type = "";
	std::cout << "new AMateria!" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	std::cout << "new AMateria!" << std::endl;
}

AMateria::AMateria(const AMateria& src)
{
	*this = src;
	std::cout << "copy AMateria!" << std::endl;
}

AMateria & AMateria::operator=(const AMateria& src)
{
	if (this != &src)
	{
		type = src.getType();
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "delete AMateria!" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << std::endl;
}
