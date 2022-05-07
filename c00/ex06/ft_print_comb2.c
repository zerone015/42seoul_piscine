/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 01:24:59 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:27:00 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_cut(char i, char j);
void	ft_print(char a, char b, char c, char d);

void	ft_cut(char i, char j)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = i / 10 + '0';
	b = i % 10 + '0';
	c = j / 10 + '0';
	d = j % 10 + '0';
	ft_print(a, b, c, d);
}

void	ft_print(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;

	i = 0;
	j = 1;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_cut(i, j);
			if (i == 98 && j == 99)
				return ;
			write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

/*
int main(void)
{
	ft_print_comb2();

	return 0;
}
*/
