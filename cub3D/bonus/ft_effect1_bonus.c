/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_effect_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 19:23:44 by daekim            #+#    #+#             */
/*   Updated: 2021/03/16 06:42:40 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_bonus.h"

void		jakum_cold(t_info *p, t_img *i)
{
	if (p->skill_t >= 0 && p->skill_t < 1)
		attack(p, i, "./tex/cold_kage1.xpm");
	else if (p->skill_t >= 1 && p->skill_t < 2)
		attack(p, i, "./tex/cold_kage2.xpm");
	else if (p->skill_t >= 2 && p->skill_t < 3)
		attack(p, i, "./tex/cold_kage3.xpm");
	else if (p->skill_t >= 3 && p->skill_t < 4)
		attack(p, i, "./tex/cold_kage4.xpm");
	else if (p->skill_t >= 4 && p->skill_t < 5)
		attack(p, i, "./tex/cold_kage5.xpm");
	else if (p->skill_t >= 5 && p->skill_t < 6)
		attack(p, i, "./tex/cold_kage6.xpm");
	else if (p->skill_t >= 6 && p->skill_t < 7)
		attack(p, i, "./tex/cold_kage7.xpm");
	else if (p->skill_t >= 7 && p->skill_t < 8)
		attack(p, i, "./tex/cold_kage8.xpm");
	else if (p->skill_t >= 8 && p->skill_t < 9)
		attack(p, i, "./tex/cold_kage9.xpm");
	else if (p->skill_t >= 9 && p->skill_t < 10)
		attack(p, i, "./tex/cold_kage10.xpm");
	else if (p->skill_t >= 10 && p->skill_t < 11)
		attack(p, i, "./tex/cold_kage11.xpm");
	else
		attack(p, i, p->dis_wp);
}

void		jakum_time(t_info *p)
{
	if (p->skill1 == 1 && p->skill_t == 50)
	{
		p->save_mob = -1;
		p->skill1 = 0;
		p->skill_t = 0;
	}
	else if (p->skill2 == 1 && p->skill_t == 160)
	{
		p->save_mob = -1;
		p->skill2 = 0;
		p->skill_t = 0;
	}
}

void		effect_time(t_info *p)
{
	if (p->elinia == 1)
	{
		if (p->skill_t == 26)
		{
			p->save_mob = -1;
			p->skill1 = 0;
			p->skill_t = 0;
		}
	}
	else if (p->rudy == 1)
	{
		if (p->skill_t == 50)
		{
			p->save_mob = -1;
			p->skill1 = 0;
			p->skill_t = 0;
		}
	}
	else if (p->jakum == 1)
		jakum_time(p);
}

void		effect(t_info *p)
{
	if (format(p->stage, "rudy.cub"))
	{
		p->elinia = 1;
		p->rudy = 0;
		p->jakum = 0;
	}
	else if (format(p->stage, "jakum.cub"))
	{
		p->rudy = 1;
		p->jakum = 0;
		p->elinia = 0;
	}
	else if (format(p->stage, "elinia.cub"))
	{
		p->jakum = 1;
		p->elinia = 0;
		p->rudy = 0;
	}
}
