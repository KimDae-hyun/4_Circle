/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:21:08 by daekim            #+#    #+#             */
/*   Updated: 2021/11/21 17:21:08 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main(void)
{
    Zombie* zombies;
    int     N;

    N = 8;
    zombies = zombieHorde(N, "Noze");
    for (int i = 0; i < N; i++)
    {
        zombies[i].announce();
    }
    delete[] zombies;
    return (0);
}
