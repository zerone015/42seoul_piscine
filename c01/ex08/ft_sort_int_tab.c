/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 20:19:51 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:37:56 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	key;

	i = 1;
	while (i < size)
	{
		key = tab[i];
		j = i - 1;
		while (j >= 0 && tab[j] > key)
		{
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = key;
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int a[10] = {9, 8, 3, 4, 5, 6, 7, 2, 1, 0};
	ft_sort_int_tab(a, 10);

	int i = 0;
	while (i < 10)
	{
		printf("%d ", a[i]);
		i++;
	}
	
	printf("\n");

	return 0;
}
*/
