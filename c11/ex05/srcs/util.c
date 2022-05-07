/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 02:45:16 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:33:26 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "util.h"

void	get_function_address(int (*f[])(int, int))
{	
	f[0] = add;
	f[1] = sub;
	f[2] = mul;
	f[3] = div;
	f[4] = mod;
}

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
		write(1, "0\n", 2);
		return ;
	}
	lnb = nb;
	if (lnb < 0)
	{
		lnb *= -1;
		write(1, "-", 1);
	}
	putnbr_recursive(lnb);
	write(1, "\n", 1);
}
