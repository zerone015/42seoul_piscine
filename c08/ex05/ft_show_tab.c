/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 19:19:30 by yoson             #+#    #+#             */
/*   Updated: 2022/05/04 15:09:02 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	putnbr_recursive(long nb)
{
	if (nb == 0)
		return ;
	putnbr_recursive(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

void	ft_putnbr(int nb)
{
	long	lnb;

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	lnb = nb;
	if (lnb < 0)
	{
		lnb *= -1;
		write(1, "-", 1);
	}
	putnbr_recursive(lnb);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str)
	{
		ft_putstr(par->str);
		write(1, "\n", 1);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		ft_putstr(par->copy);
		write(1, "\n", 1);
		par++;
	}
}
