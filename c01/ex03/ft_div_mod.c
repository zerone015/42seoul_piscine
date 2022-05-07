/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:31:00 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:36:52 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a & b;
	}
}

/*
#include <stdio.h>
int main(void)
{
	int div;
	int mod;

	ft_div_mod(1, 0, &div, &mod);
	printf("div : %d mod : %d \n", div, mod);

	return 0;
}
*/
