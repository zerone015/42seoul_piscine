/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 23:45:15 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 23:07:21 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	return_value;

	if (power < 0)
		return (0);
	return_value = 1;
	while (power)
	{
		return_value *= nb;
		power--;
	}
	return (return_value);
}

/*
#include <stdio.h>
int main(void)
{
	int i = ft_iterative_power(2, 0);
	printf("%d \n", i);
	i = ft_iterative_power(-2, 4);
	printf("%d \n", i);
	i = ft_iterative_power(0, 0);
	printf("%d \n", i);
	i = ft_iterative_power(3, 3);
	printf("%d \n", i);
	return (0);
}
*/
