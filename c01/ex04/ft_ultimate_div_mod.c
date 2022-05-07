/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:38:24 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:37:02 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (*b != 0)
	{
		temp = *a;
		*a = *a / *b;
		*b = temp % *b;
	}
}

/*
#include <stdio.h>
int main(void)
{
	int a;
	int b;

	a = 10;
	b = 0;
	ft_ultimate_div_mod(&a, &b);
	printf("a : %d b : %d \n", a, b);

	return 0;
}
*/
