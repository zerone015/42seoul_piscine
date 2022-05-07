/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:17:59 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:40:04 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int main(void)
{
	char a[] = "123123123";
	int b = ft_str_is_numeric(a);
	printf("%d \n", b);

	char c[] = "13123^";
	int d = ft_str_is_numeric(c);
	printf("%d \n", d);

	char e[] = "";
	int f = ft_str_is_numeric(e);
	printf("%d \n", f);

	return 0;
}
*/
