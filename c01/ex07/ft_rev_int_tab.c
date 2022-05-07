/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:52:41 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:37:46 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	l;
	int	i;
	int	temp;

	if (size > 0)
	{
		i = 0;
		l = size - 1;
		while (i < size / 2)
		{
			temp = tab[i];
			tab[i] = tab[l];
			tab[l] = temp;
			l--;
			i++;
		}
	}
}

/*
#include <stdio.h>
int main(void)
{
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int b[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	int c[2] = {0, 1};
	int i = 0;

	ft_rev_int_tab(a, 10);
	ft_rev_int_tab(b, 9);
	ft_rev_int_tab(c, 2);

	printf("원래 수 : 0 1 2 3 4 5 6 7 8 9 \n");
	printf("바꾼 수 : ");
	while (i < 10)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
	printf("원래 수 : 0 1 2 3 4 5 6 7 8 \n");
	printf("바꾼 수 : ");
	i = 0;
	while (i < 9)
	{
		printf("%d ", b[i]);
		i++;
	}
	printf("\n");
	printf("원래 수 : 0 1 \n");
	printf("바꾼 수 : ");
	i = 0;
	while (i < 2)
	{
		printf("%d ", c[i]);
		i++;
	}
	printf("\n");
	
	return 0;
}
*/
