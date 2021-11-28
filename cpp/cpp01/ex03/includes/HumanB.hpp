/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:21:56 by daekim            #+#    #+#             */
/*   Updated: 2021/11/21 17:21:57 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "../includes/Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;

	public:
		HumanB(std::string name);
		~HumanB(void);
		void attack();
		void setWeapon(Weapon *weapon);
};

#endif
