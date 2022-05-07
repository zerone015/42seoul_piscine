/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 23:57:47 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 23:07:28 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>
int main(void)
{
	int i = ft_recursive_power(0, 0);
	printf("%d \n", i);
	i = ft_recursive_power(2, 0);
	printf("%d \n", i);
	i = ft_recursive_power(-2, 5);
	printf("%d \n", i);
	i = ft_recursive_power(0, 4);
	printf("%d \n", i);
	return (0);
}
*/
