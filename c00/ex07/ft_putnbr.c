/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 01:34:36 by yoson             #+#    #+#             */
/*   Updated: 2022/05/04 15:06:18 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

/*
int main(void)
{
	ft_putnbr(2147483647);
	write(1, "\n", 2);
	ft_putnbr(0);
	write(1, "\n", 2);
	ft_putnbr(-2147483648);

	return 0;
}
*/
