/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 02:01:50 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 23:07:45 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	i;

	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	int i = ft_sqrt(10);
	printf("%d \n", i);
	i = ft_sqrt(4);
	printf("%d \n", i);
	i = ft_sqrt(-4);
	printf("%d \n", i);
	i = ft_sqrt(16);
	printf("%d \n", i);
	i = ft_sqrt(1000000);
	printf("%d \n", i);
	i = ft_sqrt(0);
	printf("%d \n", i);
	i = ft_sqrt(-1000000);
	printf("%d \n", i);
	i = ft_sqrt(123123123);
	printf("%d \n", i);
	return (0);
}
*/
