/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cal_sp2_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 06:54:31 by daekim            #+#    #+#             */
/*   Updated: 2021/03/14 20:25:15 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_bonus.h"

void		before_sort(t_info *p)
{
	int		i;

	i = -1;
	while (++i < p->sp_count)
	{
		remove_item(p, i);
		p->sp.sp_ord[i] = i;
		p->sp.sp_dis[i] = ((p->pos_x - p->sprite[i].x) *
				(p->pos_x - p->sprite[i].x) + (p->pos_y - p->sprite[i].y) *
				(p->pos_y - p->sprite[i].y));
	}
}

void		after_sort(t_info *p)
{
	int		i;

	i = -1;
	while (++i < p->sp_count)
	{
		sp_cal1(p, &p->sp, i);
		p->attack_mob = p->sp.sp_ord[i];
		sp_or_dam(p, &p->sp, &p->sprite[p->sp.sp_ord[i]],
				p->sprite[p->sp.sp_ord[i]].tex);
		sp_damage(p, i);
	}
}
