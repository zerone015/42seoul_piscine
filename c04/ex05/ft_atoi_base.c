/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:11:19 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 23:05:36 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_base(unsigned char *base)
{
	unsigned int	i;
	unsigned int	j;

	if (!base[0] || !base[1])
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
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

int	ft_check_str(unsigned char c, unsigned char *base)
{
	unsigned int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_decimal_format(unsigned char *str, unsigned char *base, int i, int radix)
{
	int	val;
	int	num;

	num = 0;
	while (str[i])
	{
		val = ft_check_str(str[i], base);
		if (val == -1)
			break ;
		num = num * radix + val;
		i++;
	}
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;	
	int	num;
	int	radix;
	int	i;

	radix = ft_check_base((unsigned char *) base);
	if (!radix)
		return (0);
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	num = ft_decimal_format((unsigned char *) str,
			(unsigned char *) base, i, radix);
	return (num * sign);
}

/*
#include <stdio.h>
int main(void)
{
	char a[] = "     ---101111000100111111110010273ff----";
	char b[] = "01";
	int i = ft_atoi_base(a, b);
	printf("%d \n", i);
	return 0;
}
*/
