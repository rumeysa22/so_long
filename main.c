/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:14:46 by rakkaya           #+#    #+#             */
/*   Updated: 2022/08/07 15:14:54 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	close_frame(t_win *win)
{
	int		i;

	i = -1;
	while (++i < win->map->hei)
		free(win->map->_map[i]);
	mlx_destroy_window(win->mlx, win->win);
	exit(1);
	return (0);
}

int	ft_key(int keycode, t_win *win)
{
	if (keycode == 53)
		close_frame(win);
	else if (keycode == 2 || keycode == 0 || keycode == 13 || keycode == 1)
		edit_map(keycode, win, win->map->_map);
	else if (keycode == 123 || keycode == 124 || keycode == 125 || \
			keycode == 126)
		edit_map(keycode, win, win->map->_map);
	return (0);
}

int	main(int ac, char **av)
{
	t_win	*win;

	if (ac == 2 && !ft_strncmp(&av[1][(int)ft_strlen(av[1]) - 4], ".ber", 5))
	{
		win = ft_calloc(1, sizeof(t_win));
		win->map = ft_calloc(1, sizeof(t_map));
		win->chr = ft_calloc(1, sizeof(t_chr));
		win->mlx = mlx_init();
		map_size(av[1], win);
		win->win = mlx_new_window(win->mlx,
				64 * win->map->wid, 64 * win->map->hei, "gamerum");
		read_map(win, av[1]);
		map_control(win, win->map->_map);
		mlx_hook(win->win, 2, 1L << 0, ft_key, win);
		mlx_hook(win->win, 17, 0, close_frame, win);
		render_map(win, win->map->_map, 13);
		mlx_loop(win->mlx);
	}
	else
		ft_error("Invailed input.");
	return (0);
}
