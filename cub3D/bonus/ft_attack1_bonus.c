/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_attack1_bonus_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 03:48:57 by daekim            #+#    #+#             */
/*   Updated: 2021/03/16 06:46:18 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_bonus.h"

void		black_check(t_info *p, int st, int y, int tex)
{
	if (tex == 10 && p->skill_t != 0 && st == p->data.win_w / 2
			&& y == p->data.win_h / 2
			&& p->sp.color3 != 0x000000)
	{
		p->sp_hit = 1;
		if ((p->skill1 == 1 || p->skill2 == 1) && p->skill_t == 1)
			p->save_mob = p->attack_mob;
	}
	if ((p->sp.color3 & 0x00FFFFFF) != 0)
		p->buf[y][st] = p->sp.color3;
}

void		attack_sound(t_info *p, t_spr *s)
{
	int		d;

	d = p->skill_t - p->skill_delay;
	if (p->skill1 == 1 && p->key_p == 1 && d >= 0)
	{
		if (p->elinia == 1 && p->skill_t == 11)
			system("afplay ./sound/magic.wav &");
		else if ((p->rudy == 1 || p->jakum == 1) && p->skill_t == 25)
			system("afplay ./sound/cold.wav &");
		else if (p->rudy == 1 && p->skill_t == 37)
			system("afplay ./sound/horse.wav &");
		skill_effect(p, s, d / 3 + 17);
	}
	else if (p->skill2 == 1 && p->key_p == 1 && d >= 0)
	{
		if (p->skill_t == 40)
			system("afplay ./sound/sunder.wav &");
		skill_effect(p, s, d / 3 + 28);
	}
}

void		sp_or_dam(t_info *p, t_spr *s, t_s *mob, int tex)
{
	sp_cal2(p, s, tex);
	if ((p->sp_hit == 1 && p->save_mob == p->attack_mob) ||
			(p->skill_t != 0 && p->save_mob == p->attack_mob))
	{
		mob->hit++;
		if (p->elinia == 1)
			p->skill_delay = 11;
		else if (p->rudy == 1)
			p->skill_delay = 21;
		else if (p->jakum == 1 && p->skill1 == 1)
			p->skill_delay = 21;
		else if (p->jakum == 1 && p->skill2 == 1)
			p->skill_delay = 40;
		if (tex == 10)
			attack_sound(p, s);
		p->sp_hit = 0;
	}
	mob_clear(p, mob);
}

void		attack(t_info *p, t_img *img, char *path)
{
	int		x;
	int		y;

	img->img_p = mlx_xpm_file_to_image(p->mlx_p,
			path, &img->img_w, &img->img_h);
	img->data = (int *)mlx_get_data_addr(img->img_p,
			&img->bpp, &img->size_l, &img->endian);
	tex_wh(p, 16, img);
	y = -1;
	while (++y < img->img_h)
	{
		x = -1;
		while (++x < img->img_w)
			p->texture[16][img->img_w * y + x] =
				img->data[img->img_w * y + x];
	}
	mlx_destroy_image(p->mlx_p, img->img_p);
	p->skill_t++;
	effect_time(p);
	if (p->skill_t == 0)
		p->skill_delay = 0;
	put_in_weapon(p, img, 16);
}

int			click(int b, int x, int y, t_info *p)
{
	x = 0;
	y = 0;
	if (b == 1 && p->key_p == 1 && p->skill2 != 1 && p->weapon == 1)
	{
		p->skill1 = 1;
		p->skill2 = 0;
	}
	else if (b == 2 && p->key_p == 1 && p->skill1 != 1 &&
			p->jakum == 1 && p->weapon == 1)
	{
		p->skill2 = 1;
		p->skill1 = 0;
	}
	return (0);
}
