/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:48:32 by yoson             #+#    #+#             */
/*   Updated: 2022/05/02 16:16:20 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		find;
	char	*temp;

	find = 1;
	while (find)
	{
		i = 0;
		find = 0;
		while (tab[i] && tab[i + 1])
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				find = 1;
			}
			i++;
		}
	}
}

/*
#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char *a[6];
	
	char b[] = "fsdf";
	char c[] = "cdf";
	char d[] = "ajfk";
	char e[] = "abk";
	char f[] = "b";
	
	a[0] = b;
	a[1] = c;
	a[2] = d;
	a[3] = e;
	a[4] = f;
	a[5] = 0;
	ft_advanced_sort_string_tab(a, ft_strcmp);
	int i = 0;
	while (a[i])
	{
		printf("%s \n", a[i]);
		i++;
	}
	return (0);
}
*/
