/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:37:30 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:40:39 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 1 && str[i] <= 31) || str[i] == 127)
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
	char a[15] = {99, 1, 2, 3, 4, 5, 6, 7, 31, 127, 0};
	int b = ft_str_is_printable(a);
	printf("%d \n", b);

	char c[15] = {32, 34, 35, 36, 33, 33, 33, 33, 33, 33, 0};
	int d = ft_str_is_printable(c);
	printf("%d \n", d);

	char e[] = "";
	int f = ft_str_is_printable(e);
	printf("%d \n", f);

	return 0;
}
*/
