/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 09:09:19 by yoson             #+#    #+#             */
/*   Updated: 2022/04/28 02:41:08 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_nbrlen(long decimal, int base_len)
{
	int	len;

	len = 0;
	while (decimal != 0)
	{
		decimal /= base_len;
		len++;
	}
	return (len);
}

char	*ft_convert_basestr(long decimal, unsigned char *base_to, int base_len)
{
	int		sign;
	int		nbr_len;
	char	*nbr;

	sign = 0;
	if (decimal < 0)
	{
		sign = 1;
		decimal *= -1;
	}
	nbr_len = ft_nbrlen(decimal, base_len) + sign + 1;
	nbr = (char *) malloc(sizeof(char) * nbr_len);
	if (nbr == NULL)
		return (NULL);
	nbr[--nbr_len] = '\0';
	while (decimal != 0)
	{
		nbr[--nbr_len] = base_to[decimal % base_len];
		decimal /= base_len;
	}
	if (sign == 1)
		nbr[0] = '-';
	return (nbr);
}
