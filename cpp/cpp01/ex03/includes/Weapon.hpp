/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:21:58 by daekim            #+#    #+#             */
/*   Updated: 2021/11/21 17:21:59 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		const std::string& getType();
		void setType(std::string type);
};

#endif
