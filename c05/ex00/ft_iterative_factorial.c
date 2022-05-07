/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 23:17:39 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 23:06:59 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	return_value;

	if (nb < 0)
		return (0);
	return_value = 1;
	while (nb)
	{
		return_value *= nb;
		nb--;
	}
	return (return_value);
}

/*
#include <stdio.h>
int main(void)
{
	int i = ft_iterative_factorial(5);
	printf("%d \n", i);
	
	return (0);
}
*/
