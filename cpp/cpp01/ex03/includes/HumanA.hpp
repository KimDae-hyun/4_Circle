/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:21:53 by daekim            #+#    #+#             */
/*   Updated: 2021/11/21 17:21:55 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "../includes/Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon &weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void attack();
};

#endif
