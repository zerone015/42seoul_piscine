/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:26:36 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:40:15 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	char a[] = "asdfwernowqnovzxcvz";
	int b = ft_str_is_lowercase(a);
	printf("%d \n", b);

	char c[] = "asdfasdfAbxc";
	int d = ft_str_is_lowercase(c);
	printf("%d \n", d);

	char e[] = "";
	int f = ft_str_is_lowercase(e);
	printf("%d \n", f);

	char g[] = "anfuwen#^@*&";
	int h = ft_str_is_lowercase(g);
	printf("%d \n", h);

	return 0;
}
*/
