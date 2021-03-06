/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pick_item_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 06:54:31 by daekim            #+#    #+#             */
/*   Updated: 2021/03/14 20:25:15 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_bonus.h"

void		pick_item(t_info *p, char item)
{
	if (item == '3')
		p->weapon = 1;
	if (item == '4')
	{
		p->hp += 3;
		if (p->hp > 5)
			p->hp = 5;
	}
	if (item == '5')
	{
		p->hp = 5;
		p->power = 1;
	}
}

void		remove_item(t_info *p, int i)
{
	if (p->data.map[(int)p->pos_x][(int)p->pos_y] == '3' ||
		p->data.map[(int)p->pos_x][(int)p->pos_y] == '4' ||
		p->data.map[(int)p->pos_x][(int)p->pos_y] == '5')
		if ((int)p->sprite[i].x == (int)p->pos_x &&
				(int)p->sprite[i].y == (int)p->pos_y)
		{
			if (p->data.map[(int)p->pos_x][(int)p->pos_y] == '4' ||
			p->data.map[(int)p->pos_x][(int)p->pos_y] == '5')
				system("afplay ./sound/potion.wav &");
			if (p->data.map[(int)p->pos_x][(int)p->pos_y] == '5')
				p->power++;
			pick_item(p, p->data.map[(int)p->pos_x][(int)p->pos_y]);
			p->sprite[i].x = 0;
			p->sprite[i].y = 0;
			p->sprite[i].tex = 0;
			p->data.map[(int)p->pos_x][(int)p->pos_y] = '0';
		}
}
