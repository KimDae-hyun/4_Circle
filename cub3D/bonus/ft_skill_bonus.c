/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skill_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 03:48:57 by daekim            #+#    #+#             */
/*   Updated: 2021/03/16 06:46:18 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_bonus.h"

void	skill_effect(t_info *p, t_spr *s, int tex)
{
	int	st;
	int	y;

	st = s->dr_st_x - 1;
	while (++st < s->dr_en_x && tex != 0)
	{
		s->tex_x = (int)(256 * (st - (-(s->sp_w) / 2 + s->screen_x)) *
				p->twh[tex].tex_w / s->sp_w) / 256;
		if (s->trans_y > 0 && st > 0 && st < p->data.win_w &&
				s->trans_y < s->zbuf[st])
		{
			y = s->dr_st_y - 1;
			while (++y < s->dr_en_y)
			{
				s->d = (y - s->move_sc) * 256 - p->data.win_h * 128
					+ s->sp_h * 128;
				s->tex_y = ((s->d * p->twh[tex].tex_h) / s->sp_h) / 256;
				s->color3 = p->texture[tex]
					[p->twh[tex].tex_w * s->tex_y + s->tex_x];
				s_shadow(p, s);
				if ((s->color3 & 0x00FFFFFF) != 0)
					p->buf[y][st] = s->color3;
			}
		}
	}
}
