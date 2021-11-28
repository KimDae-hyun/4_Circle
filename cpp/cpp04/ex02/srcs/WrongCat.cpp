/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:37:22 by daekim            #+#    #+#             */
/*   Updated: 2021/11/26 19:37:26 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void)
{
	type = "WrongCat";
	std::cout << "WrongCat Born!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	std::cout << "WrongCat Born!" << std::endl;
	*this = src;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Died" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &src)
{
	if (this != &src)
	{
		type = src.type;
	}
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "cat cat" << std::endl;
	return ;
}
