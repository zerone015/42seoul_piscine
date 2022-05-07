/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 01:40:49 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:35:12 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int select[], int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = select[i] + '0';
		write(1, &c, 1);
		i++;
	}
	i = n - 1;
	c = 9;
	while (i >= 0)
	{
		if (select[i] != c)
		{
			write(1, ", ", 2);
			break ;
		}
		c--;
		i--;
	}
}

void	ft_dfs(int idx, int depth, int n, int select[])
{
	int	i;

	if (depth == n)
	{
		ft_print(select, n);
		return ;
	}
	i = idx;
	while (i < 10)
	{
		select[depth] = i;
		ft_dfs(i + 1, depth + 1, n, select);
		select[depth] = 0;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	select[10];

	ft_dfs(0, 0, n, select);
}
