/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 21:36:44 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/30 21:36:51 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	draw_square_on_map(t_map *map, t_square *square)
{
	int	i;
	int	j;

	i = square->y - square->len;
	while (++i <= square->y)
	{
		j = square->x - square->len;
		while (++j <= square->x)
			map->arr[i][j] = map->full;
	}
}

void	print_answer(t_map *map, t_square *square)
{
	int	i;

	draw_square_on_map(map, square);
	i = 0;
	while (i < map->height)
	{
		ft_putstr(map->arr[i]);
		ft_putchar('\n');
		i++;
	}
}
