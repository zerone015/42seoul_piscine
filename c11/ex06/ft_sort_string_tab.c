/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 01:55:25 by yoson             #+#    #+#             */
/*   Updated: 2022/05/02 16:38:44 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
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
int	main(void)
{
	char *a[4];
	
	char b[] = "bsdf";
	char c[] = "cdf";
	char d[] = "ajfk";
	
	a[0] = b;
	a[1] = c;
	a[2] = d;
	a[3] = 0;
	ft_sort_string_tab(a);
	int i = 0;
	while (a[i])
	{
		printf("%s \n", a[i]);
		i++;
	}
	return (0);
}
*/
