/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 02:40:31 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 23:07:55 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int main(void)
{
	int i = ft_is_prime(0);
	printf("%d \n", i);
	i = ft_is_prime(1);
	printf("%d \n", i);
	i = ft_is_prime(2147483647);
	printf("%d \n", i);
	return (0);
}
*/
