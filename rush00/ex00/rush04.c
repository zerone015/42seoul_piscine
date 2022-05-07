/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:29:49 by yoson             #+#    #+#             */
/*   Updated: 2022/04/16 18:29:50 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	upper_width(int x)
{
	int	i;

	ft_putchar('A');
	if (x == 1)
		ft_putchar('\n');
	i = 0;
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (x != 1)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
}

void	height(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y - 2)
	{
		if (x != 1)
			ft_putchar('B');
		if (x > 2)
		{
			j = 0;
			while (j < x - 2)
			{
				ft_putchar(' ');
				j++;
			}
		}
		ft_putchar('B');
		ft_putchar('\n');
		i++;
	}
}

void	lower_width(int x)
{
	int	i;

	ft_putchar('C');
	if (x == 1)
		ft_putchar('\n');
	i = 0;
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (x != 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	upper_width(x);
	if (y > 2)
		height(x, y);
	if (y > 1)
		lower_width(x);
}
