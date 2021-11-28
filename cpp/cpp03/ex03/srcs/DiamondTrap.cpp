/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:41:36 by daekim            #+#    #+#             */
/*   Updated: 2021/11/25 18:41:40 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    Name = "noname";
    Hitpoints = FragTrap::Hitpoints;
    Energy_points = ScavTrap::Energy_points;
    Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
    this->Name = name;
    ClapTrap::Name = Name + "_clap_name";
    Hitpoints = FragTrap::Hitpoints;
    Energy_points = ScavTrap::Energy_points;
    Attack_damage = FragTrap::Attack_damage;
    std::cout << "DiamondTrap <" << Name << "> is called !"<< std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this != &src)
	{
		Name = src.Name;
        Hitpoints = src.Hitpoints;
        Energy_points = src.Energy_points;
        Attack_damage = src.Attack_damage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap <" << Name << "> is uncalled !"<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ScavTrap(src), FragTrap(src)
{
	*this = src;
    std::cout << "DiamondTrap <" << Name << "> is copy called !"<< std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is <" << Name << ">"<< std::endl;
    std::cout << "ClapTrap name is <" << ClapTrap::Name << ">"<< std::endl;
}
