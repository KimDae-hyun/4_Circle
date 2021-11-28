/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 19:23:44 by daekim            #+#    #+#             */
/*   Updated: 2021/03/16 06:42:40 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_bonus.h"

void		info3(t_info *p)
{
	p->sp_hit = 0;
	p->save_mob = 0;
	p->dam = 0;
	p->dam_t = 0;
	p->power = 0;
	p->level_sound = 0;
	p->bgm = 0;
	p->death = 0;
}

void		info2(t_info *p)
{
	p->hurt = 0;
	p->hp = 5;
	p->key_p = 0;
	p->mou_u = 0;
	p->mou_d = 0;
	p->mou_r = 0;
	p->mou_l = 0;
	p->mou_ud = 0;
	p->mou_lr = 0;
	p->key_jump = 0;
	p->sp.v_move = 0.0;
	p->sp.sp_flag = 0;
	p->level_up = 0;
	p->key_o = 0;
	p->yorn = 0;
	p->sp2 = 0;
	p->sp3 = 0;
	p->sp4 = 0;
	p->sp5 = 0;
	p->sp6 = 0;
	p->weapon = 0;
	p->skill1 = 0;
	p->skill2 = 0;
	p->skill_t = 0;
	info3(p);
}

void		info(t_info *p)
{
	p->move = 0.05;
	p->rot = 0.05;
	p->key_w = 0;
	p->key_s = 0;
	p->key_d = 0;
	p->key_a = 0;
	p->key_e = 0;
	p->key_q = 0;
	p->key_al = 0;
	p->key_ar = 0;
	p->key_ws = 0;
	p->key_ad = 0;
	p->key_qe = 0;
	p->key_aa = 0;
	p->key_sit = 0;
	p->key_up = 0;
	p->key_down = 0;
	p->key_ud = 0;
	p->sp_count = 0;
	p->is_save = 0;
	p->cal.f_rgb = 0;
	p->cal.c_rgb = 0;
	p->pitch = 0;
	info2(p);
}
