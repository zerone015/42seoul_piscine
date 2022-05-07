/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:50:18 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 23:08:12 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	board_check(int y, int row[])
{
	int	i;
	int	temp;

	i = 0;
	while (i < y)
	{
		temp = row[y] - row[i];
		if (temp < 0)
			temp *= -1;
		if (row[y] == row[i] || y - i == temp)
			return (0);
		++i;
	}
	return (1);
}

void	print(int row[])
{
	int		i;
	char	c;

	i = -1;
	while (++i < 10)
	{
		c = row[i] + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}

void	dfs(int y, int *cnt, int row[])
{
	int	i;

	if (y == 10)
	{
		(*cnt)++;
		print(row);
		return ;
	}
	i = 0;
	while (i < 10)
	{
		row[y] = i;
		if (board_check(y, row))
			dfs(y + 1, cnt, row);
		++i;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	row[10];
	int	cnt;

	cnt = 0;
	dfs(0, &cnt, row);
	return (cnt);
}

/*
#include <stdio.h>
int main(void)
{
	int i = ft_ten_queens_puzzle();
	printf("%d \n", i);
	return (0);
}
*/
