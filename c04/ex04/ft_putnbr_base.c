/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:59:39 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 23:05:17 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	ft_check_base(unsigned char *base)
{
	unsigned int	i;
	unsigned int	j;

	if (!base[0] || !base[1])
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_number_format(long nbr, unsigned char len, unsigned char *base)
{
	if (nbr == 0)
		return ;
	ft_number_format(nbr / len, len, base);
	write(1, &base[nbr % len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned char	base_len;
	long			lnbr;

	base_len = ft_check_base((unsigned char *) base);
	if (!base_len)
		return ;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
	}
	lnbr = nbr;
	if (lnbr < 0)
	{
		write(1, "-", 1);
		lnbr *= -1;
	}
	ft_number_format(lnbr, base_len, (unsigned char *) base);
}

/*
int main(void)
{
	ft_putnbr_base(1234, "0123456789abcdef");

	return 0;
}
*/
