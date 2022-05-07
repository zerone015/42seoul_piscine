/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:10:24 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 23:04:51 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	unsigned int	i;
	int				sign;
	int				num;

	sign = 1;
	num = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}	
	return (num * sign);
}

/*
#include <stdio.h>
int main(void)
{
	char a[] = "    --+--++00000214748aa0  b 09 23";
	int i = ft_atoi(a);
	printf("%d \n", i);

	char b[] = "    -0001500 00";
	int j = ft_atoi(b);
	printf("%d \n", j);
	
	return 0;
}
*/
