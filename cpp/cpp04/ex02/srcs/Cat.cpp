/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:36:57 by daekim            #+#    #+#             */
/*   Updated: 2021/11/26 19:37:00 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	brain = new Brain;
	std::cout << "Cat Born!" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	*this = src;
	std::cout << "Cat copy Born!" << std::endl;
}

Cat::~Cat(void)
{
	delete brain;
	std::cout << "Cat Died" << std::endl;
}

Cat & Cat::operator=(const Cat &src)
{
	if (this != &src)
	{
		type = src.type;
		brain = new Brain;
		for (int i = 0; i < 100; i++)
			brain->copyIdeas(src.brain->outputIdeas(i), i);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "ya ya" << std::endl;
	return ;
}

void Cat::addIdea(std::string idea, int i)
{
    brain->addIdea(idea, i);
}

void Cat::showIdeas() const
{
    brain->showIdeas();
}

std::string Cat::outputIdeas(int i) const
{
    return (brain->outputIdeas(i));
}
