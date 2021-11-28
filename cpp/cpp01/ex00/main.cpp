/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:20:43 by daekim            #+#    #+#             */
/*   Updated: 2021/11/21 17:20:44 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main(void)
{
    Zombie* newzombie = newZombie("monika");

    randomChump("leejung");
    newzombie->announce();
    delete newzombie;
    return (0);
}
