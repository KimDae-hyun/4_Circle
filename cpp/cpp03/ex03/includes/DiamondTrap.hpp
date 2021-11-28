/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:40:59 by daekim            #+#    #+#             */
/*   Updated: 2021/11/25 18:41:01 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap 
{
    private:
        std::string Name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap & src);
        ~DiamondTrap();

        DiamondTrap & operator=(const DiamondTrap &src);

        void whoAmI();
        void attack(std::string const & target)
        {
            ScavTrap::attack(target);
        }
};


#endif
