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

void		jakum2(t_info *p, t_img *i)
{
	if (p->skill_t >= 44 && p->skill_t < 48)
		attack(p, i, "./tex/sunder_kage12.xpm");
	else if (p->skill_t >= 48 && p->skill_t < 52)
		attack(p, i, "./tex/sunder_kage13.xpm");
	else if (p->skill_t >= 52 && p->skill_t < 56)
		attack(p, i, "./tex/sunder_kage14.xpm");
	else if (p->skill_t >= 56 && p->skill_t < 60)
		attack(p, i, "./tex/sunder_kage15.xpm");
	else if (p->skill_t >= 60 && p->skill_t < 64)
		attack(p, i, "./tex/sunder_kage16.xpm");
	else if (p->skill_t >= 64 && p->skill_t < 68)
		attack(p, i, "./tex/sunder_kage17.xpm");
	else
		attack(p, i, p->dis_wp);
}

void		jakum(t_info *p, t_img *i)
{
	if (p->skill_t >= 0 && p->skill_t < 4)
		attack(p, i, "./tex/sunder_kage1.xpm");
	else if (p->skill_t >= 4 && p->skill_t < 8)
		attack(p, i, "./tex/sunder_kage2.xpm");
	else if (p->skill_t >= 8 && p->skill_t < 12)
		attack(p, i, "./tex/sunder_kage3.xpm");
	else if (p->skill_t >= 12 && p->skill_t < 16)
		attack(p, i, "./tex/sunder_kage4.xpm");
	else if (p->skill_t >= 16 && p->skill_t < 20)
		attack(p, i, "./tex/sunder_kage5.xpm");
	else if (p->skill_t >= 20 && p->skill_t < 24)
		attack(p, i, "./tex/sunder_kage6.xpm");
	else if (p->skill_t >= 24 && p->skill_t < 28)
		attack(p, i, "./tex/sunder_kage7.xpm");
	else if (p->skill_t >= 28 && p->skill_t < 32)
		attack(p, i, "./tex/sunder_kage8.xpm");
	else if (p->skill_t >= 32 && p->skill_t < 36)
		attack(p, i, "./tex/sunder_kage9.xpm");
	else if (p->skill_t >= 26 && p->skill_t < 40)
		attack(p, i, "./tex/sunder_kage10.xpm");
	else if (p->skill_t >= 40 && p->skill_t < 44)
		attack(p, i, "./tex/sunder_kage11.xpm");
	else
		jakum2(p, i);
}

void		rudy(t_info *p, t_img *i)
{
	if (p->skill_t >= 0 && p->skill_t < 1)
		attack(p, i, "./tex/cold_sonz1.xpm");
	else if (p->skill_t >= 1 && p->skill_t < 2)
		attack(p, i, "./tex/cold_sonz2.xpm");
	else if (p->skill_t >= 2 && p->skill_t < 3)
		attack(p, i, "./tex/cold_sonz3.xpm");
	else if (p->skill_t >= 3 && p->skill_t < 4)
		attack(p, i, "./tex/cold_sonz4.xpm");
	else if (p->skill_t >= 4 && p->skill_t < 5)
		attack(p, i, "./tex/cold_sonz5.xpm");
	else if (p->skill_t >= 5 && p->skill_t < 6)
		attack(p, i, "./tex/cold_sonz6.xpm");
	else if (p->skill_t >= 6 && p->skill_t < 7)
		attack(p, i, "./tex/cold_sonz7.xpm");
	else if (p->skill_t >= 7 && p->skill_t < 8)
		attack(p, i, "./tex/cold_sonz8.xpm");
	else if (p->skill_t >= 8 && p->skill_t < 9)
		attack(p, i, "./tex/cold_sonz9.xpm");
	else if (p->skill_t >= 9 && p->skill_t < 10)
		attack(p, i, "./tex/cold_sonz10.xpm");
	else if (p->skill_t >= 10 && p->skill_t < 11)
		attack(p, i, "./tex/cold_sonz11.xpm");
	else
		attack(p, i, p->dis_wp);
}

void		elinia(t_info *p, t_img *i)
{
	if (p->skill_t == 2)
		system("afplay ./sound/magic_st.wav &");
	if (p->skill_t >= 0 && p->skill_t < 4)
		attack(p, i, "./tex/magic_ef1.xpm");
	else if (p->skill_t >= 4 && p->skill_t < 8)
		attack(p, i, "./tex/magic_ef2.xpm");
	else if (p->skill_t >= 8 && p->skill_t < 12)
		attack(p, i, "./tex/magic_ef3.xpm");
	else
		attack(p, i, p->dis_wp);
}
