/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 19:23:44 by daekim            #+#    #+#             */
/*   Updated: 2021/03/16 06:39:43 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_bonus.h"

void		level(t_info *p, t_img *i)
{
	if (p->level_up == 1)
	{
		show_yorn(p, i, "tex/next_stage.xpm");
		if (p->level_sound == 1)
			system("afplay ./sound/level_up.wav &");
		if (p->key_o == 1)
			next_stage(p, p->stage);
	}
	if (p->level_up == 2)
	{
		show_yorn(p, i, "tex/missioncom.xpm");
		if (p->level_sound == 1)
			system("afplay ./sound/level_up.wav &");
		if (p->key_o == 1)
			next_stage(p, p->stage);
	}
}

int			main_loop(t_info *p)
{
	t_img	i;

	p->bgm++;
	calc_wa(p);
	calc_sp(p);
	pop_up(p);
	level(p, &i);
	draw(p);
	save_bmp(p);
	k_press(p);
	if ((int)p->pos_x == 8 && (int)p->pos_y == 2)
	{
		p->level_up = 1;
		p->level_sound++;
	}
	if (p->jakum == 1 && (int)p->pos_x == 5 && (int)p->pos_y == 21)
	{
		p->level_up = 2;
		p->level_sound++;
	}
	if (p->level_sound > 1000)
		p->level_sound = 0;
	if ((p->jakum == 0 && p->bgm > 7300) || p->bgm > 8400)
		re_bgm(p);
	return (0);
}

void		open_cub(char *file, t_info *p)
{
	int		file_len;

	file_len = ft_strlen(file);
	if (format(file, ".cub") != 1)
		putstr_err("Error : no such cub file!\n");
	p->data.fd = open(file, O_RDONLY);
	if (p->data.fd == -1)
		putstr_err("Error : no such file!\n");
}

void		check_ar(int ac, char **av, t_info *p)
{
	if (ac > 3)
		putstr_err("Error : To many arguments!\n");
	if (ac < 2)
		putstr_err("Error : To few arguments!\n");
	if (ac == 3)
	{
		if (ft_strncmp(av[2], "--save", 7) == 0)
			p->is_save = 1;
		else
			putstr_err("Error : does't save command\n");
	}
}

int			main(int ac, char **av)
{
	t_info	p;

	p.mlx_p = mlx_init();
	info(&p);
	check_ar(ac, av, &p);
	open_cub(av[1], &p);
	tex_buf(&p);
	get_file(&p);
	buf_mal(&p);
	maping(&p);
	base_sound(&p);
	p.win_p = mlx_new_window(p.mlx_p, p.data.win_w, p.data.win_h, "cub3d");
	p.img.img_p = mlx_new_image(p.mlx_p, p.data.win_w, p.data.win_h);
	p.img.data = (int *)mlx_get_data_addr(p.img.img_p, &p.img.bpp,
			&p.img.size_l, &p.img.endian);
	ft_press(&p);
	p.zero_w = p.data.win_w / 2;
	p.zero_h = p.data.win_h / 2;
	p.move_p = 0;
	mlx_hook(p.win_p, 4, 0, click, &p);
	mlx_hook(p.win_p, 6, 0, &mouse_move, &p);
	mlx_loop_hook(p.mlx_p, &main_loop, &p);
	mlx_loop(p.mlx_p);
}
