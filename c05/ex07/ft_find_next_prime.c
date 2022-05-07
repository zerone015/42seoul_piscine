/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 03:11:59 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 23:08:03 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime2(int nb)
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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime2(nb))
		nb++;
	return (nb);
}

/*
#include <stdio.h>
int main(void)
{
	int i = ft_find_next_prime(0);
	printf("%d \n", i);
	i = ft_find_next_prime(1);
	printf("%d \n", i);
	i = ft_find_next_prime(2);
	printf("%d \n", i);
	i = ft_find_next_prime(3);
	printf("%d \n", i);
	i = ft_find_next_prime(2147483647);
	printf("%d \n", i);
	return (0);
}
*/
