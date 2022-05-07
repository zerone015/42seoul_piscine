/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 09:09:03 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 23:09:49 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_convert_basestr(long decimal, unsigned char *base_to, int base_len);

int	ft_base_check(unsigned char *base)
{
	int				i;
	unsigned char	check_arr[256];

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (i < 256)
	{
		check_arr[i] = 0;
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13) || check_arr[base[i]] == 1)
			return (0);
		check_arr[base[i]] = 1;
		i++;
	}
	return (i);
}

int	ft_nbr_check(unsigned char c, unsigned char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_convert_decimal(unsigned char *nbr, unsigned char *base, int base_len)
{
	int	i;
	int	base_index;
	int	decimal;

	i = 0;
	decimal = 0;
	while (nbr[i])
	{
		base_index = ft_nbr_check((unsigned char) nbr[i], base);
		if (base_index == -1)
			break ;
		decimal = decimal * base_len + base_index;
		i++;
	}
	return (decimal);
}

int	ft_atoi_base(unsigned char *nbr, unsigned char *base, int base_len)
{
	int	i;
	int	sign;
	int	decimal;

	i = 0;
	sign = 1;
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	decimal = ft_convert_decimal(nbr + i, base, base_len);
	return (decimal * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*convert_nbr;
	int		from_base_len;
	int		to_base_len;
	int		decimal;

	from_base_len = ft_base_check((unsigned char *) base_from);
	to_base_len = ft_base_check((unsigned char *) base_to);
	if (!to_base_len || !from_base_len)
		return (0);
	decimal = ft_atoi_base((unsigned char *) nbr,
			(unsigned char *) base_from, from_base_len);
	if (!decimal)
	{
		convert_nbr = (char *) malloc(2);
		if (!convert_nbr)
			return (0);
		convert_nbr[0] = base_to[0];
		convert_nbr[1] = '\0';
		return (convert_nbr);
	}
	convert_nbr = ft_convert_basestr((long) decimal,
			(unsigned char *) base_to, to_base_len);
	return (convert_nbr);
}
