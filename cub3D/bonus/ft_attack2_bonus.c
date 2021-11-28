/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_attack2_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 03:48:57 by daekim            #+#    #+#             */
/*   Updated: 2021/03/16 06:46:18 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_bonus.h"

void		real_clear(t_info *p, t_s *mob)
{
	p->data.map[(int)mob->x][(int)mob->y] = '0';
	mob->x = 0;
	mob->y = 0;
	mob->tex = 0;
	mob->hit = 0;
}

void		mob_clear(t_info *p, t_s *mob)
{
	if (p->elinia == 1 && mob->hit >= 75)
		real_clear(p, mob);
	else if ((p->rudy == 1 && mob->hit >= 147) || (p->jakum == 1 &&
				p->skill1 == 1 && p->skill_t > 45 && mob->hit >= 477))
		real_clear(p, mob);
	else if (p->jakum == 1 && p->skill2 == 1 && mob->hit >= 477 &&
			p->skill_t > 158)
		real_clear(p, mob);
}
