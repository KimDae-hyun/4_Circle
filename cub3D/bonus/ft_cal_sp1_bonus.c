/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cal_sp1_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 06:54:31 by daekim            #+#    #+#             */
/*   Updated: 2021/03/14 20:25:15 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_bonus.h"

static void		sort_sprite(t_info *p, int *ord, double *dist, int num)
{
	int			i;
	double		temp1[num];
	int			temp2[num];

	i = -1;
	while (++i < num)
	{
		temp1[i] = dist[i];
		temp2[i] = ord[i];
	}
	sort_sp(temp1, temp2, num);
	i = -1;
	while (++i < num)
	{
		dist[i] = temp1[p->sp_count - i - 1];
		ord[i] = temp2[p->sp_count - i - 1];
	}
}

void			sp_cal2(t_info *p, t_spr *s, int tex)
{
	int			st;
	int			y;

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
				black_check(p, st, y, tex);
			}
		}
	}
}

void			sp_updown(t_spr *s)
{
	if (s->v_move <= -30.0)
		s->sp_flag = 1;
	else if (s->v_move >= 50.0)
		s->sp_flag = 0;
	if (s->sp_flag == 1)
		s->v_move += 0.04;
	else if (s->sp_flag == 0)
		s->v_move -= 0.04;
}

void			sp_cal1(t_info *p, t_spr *s, int i)
{
	s->sp_x = p->sprite[s->sp_ord[i]].x - p->pos_x;
	s->sp_y = p->sprite[s->sp_ord[i]].y - p->pos_y;
	s->mat = 1.0 / (p->plane_x * p->dir_y - p->dir_x * p->plane_y);
	s->trans_x = s->mat * (p->dir_y * s->sp_x - p->dir_x * s->sp_y);
	s->trans_y = s->mat * (-(p->plane_y) * s->sp_x + p->plane_x * s->sp_y);
	s->screen_x = (int)((p->data.win_w / 2) * (1 + s->trans_x / s->trans_y));
	s->udiv = 1;
	s->vdiv = s->udiv;
	sp_updown(s);
	s->move_sc = (int)(s->v_move / s->trans_y) + p->pitch
		+ p->pos_z / s->trans_y;
	s->sp_h = abs((int)(p->data.win_h / s->trans_y)) / s->vdiv;
	s->dr_st_y = -(s->sp_h) / 2 + p->data.win_h / 2 + s->move_sc;
	if (s->dr_st_y < 0)
		s->dr_st_y = 0;
	s->dr_en_y = s->sp_h / 2 + p->data.win_h / 2 + s->move_sc;
	if (s->dr_en_y >= p->data.win_h)
		s->dr_en_y = p->data.win_h - 1;
	s->sp_w = abs((int)(p->data.win_h / s->trans_y)) / s->udiv;
	s->dr_st_x = -(s->sp_w) / 2 + s->screen_x;
	if (s->dr_st_x < 0)
		s->dr_st_x = 0;
	s->dr_en_x = s->sp_w / 2 + s->screen_x;
	if (s->dr_en_x >= p->data.win_w)
		s->dr_en_x = p->data.win_w - 1;
}

void			calc_sp(t_info *p)
{
	if (!(p->sp.sp_ord = (int *)ft_calloc(p->sp_count, sizeof(int))))
		putstr_err("Error : sp_ord allocation fail!\n");
	if (!(p->sp.sp_dis = (double *)ft_calloc(p->sp_count, sizeof(double))))
		putstr_err("Error : sp_dis allocation fail!\n");
	before_sort(p);
	sort_sprite(p, p->sp.sp_ord, p->sp.sp_dis, p->sp_count);
	p->dam_t++;
	if (p->power > 0)
		p->power++;
	after_sort(p);
	free(p->sp.sp_ord);
	free(p->sp.sp_dis);
}
