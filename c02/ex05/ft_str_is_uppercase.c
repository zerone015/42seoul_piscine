/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:32:48 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:40:28 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	char a[] = "ASDFASLFNQNZXVQNFOVXZVXZVZXVZ";
	int b = ft_str_is_uppercase(a);
	printf("%d \n", b);

	char c[] = "QWEPQWJIEJQEWPaQWJEPQWJEP";
	int d = ft_str_is_uppercase(c);
	printf("%d \n", d);

	char e[] = "";
	int f = ft_str_is_uppercase(e);
	printf("%d \n", f);

	char g[] = "NXCOVNCOXVNU&#&!";
	int h = ft_str_is_uppercase(g);
	printf("%d \n", h);

	return 0;
}
*/
