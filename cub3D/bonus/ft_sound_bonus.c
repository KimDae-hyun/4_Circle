/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sound_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 19:23:44 by daekim            #+#    #+#             */
/*   Updated: 2021/03/16 06:42:40 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_bonus.h"

void		re_bgm(t_info *p)
{
	if (p->elinia == 1 && p->bgm > 8400)
	{
		system("afplay ./sound/elinia.wav &");
		p->bgm = 0;
	}
	else if (p->rudy == 1 && p->bgm > 7300)
	{
		system("afplay ./sound/rudy.wav &");
		p->bgm = 0;
	}
	else if (p->jakum == 1 && p->bgm > 8200)
	{
		system("afplay ./sound/jakum.wav &");
		p->bgm = 0;
	}
}

void		base_sound(t_info *p)
{
	if (p->elinia == 1)
		system("afplay ./sound/elinia.wav &");
	else if (p->rudy == 1)
		system("afplay ./sound/rudy.wav &");
	else if (p->jakum == 1)
		system("afplay ./sound/jakum.wav &");
}
