/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_damage_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 22:29:43 by daekim            #+#    #+#             */
/*   Updated: 2021/03/06 00:06:54 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_bonus.h"

void		show_power(t_info *p, t_img *img)
{
	int	y;
	int	x;

	y = 0;
	while (y < img->img_h + p->data.win_h / 3)
	{
		x = 0;
		while (x < img->img_w && y < img->img_h)
		{
			if (p->texture[4][img->img_w * y + x])
				p->buf[y][x] = p->texture[4][img->img_w * y + x];
			x++;
		}
		y++;
	}
}

void		jakum_damage(t_info *p, int i)
{
	if ((int)p->pos_x < (int)(p->sprite[i].x + 4) &&
			(int)p->pos_x > (int)(p->sprite[i].x - 4))
	{
		if (((int)p->pos_y < (int)p->sprite[i].y + 4 &&
					(int)p->pos_y > (int)p->sprite[i].y - 4))
		{
			p->dam = 2;
			p->dam_t = 0;
		}
	}
}

void		rudy_damage(t_info *p, int i)
{
	if ((int)p->pos_x < (int)(p->sprite[i].x + 3) &&
			(int)p->pos_x > (int)(p->sprite[i].x - 3))
	{
		if (((int)p->pos_y < (int)p->sprite[i].y + 3 &&
					(int)p->pos_y > (int)p->sprite[i].y - 3))
		{
			p->dam = 1;
			p->dam_t = 0;
		}
	}
}

void		sp_damage(t_info *p, int i)
{
	if (p->elinia == 1 && p->sprite[i].tex == 10 &&
			p->dam_t > 50 && p->power != 1)
	{
		if ((int)p->pos_x < (int)(p->sprite[i].x + 2) &&
				(int)p->pos_x > (int)(p->sprite[i].x - 2))
		{
			if (((int)p->pos_y < (int)p->sprite[i].y + 2 &&
						(int)p->pos_y > (int)p->sprite[i].y - 2))
			{
				p->dam = 1;
				p->dam_t = 0;
			}
		}
	}
	else if (p->jakum == 1 && p->sprite[i].tex == 10 &&
			p->dam_t > 35 && p->power != 1)
		jakum_damage(p, i);
	else if (p->rudy == 1 && p->sprite[i].tex == 10 &&
			p->dam_t > 60 && p->power != 1)
		rudy_damage(p, i);
	if (p->dam_t >= 1000)
		p->dam_t = 0;
}
