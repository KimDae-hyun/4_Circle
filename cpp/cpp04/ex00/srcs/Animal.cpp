/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:39:44 by daekim            #+#    #+#             */
/*   Updated: 2021/11/26 18:40:28 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void)
{
	type = "Animal!";
	std::cout << "Animal Born!" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Copy Animal Born!" << std::endl;
	*this = src;
}

Animal::~Animal(void)
{
	std::cout << "Animal Died" << std::endl;
}

Animal & Animal::operator=(const Animal &src)
{
	if (this != &src)
	{
		type = src.type;
	}
	return (*this);
}

std::string Animal::getType(void) const
{
    return (type);
}
