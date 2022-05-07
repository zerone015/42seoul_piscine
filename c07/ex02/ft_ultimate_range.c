/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 06:12:47 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 23:09:24 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long long	size;
	int			*int_array;
	int			len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = (long long) max - (long long) min;
	*range = (int *) malloc(sizeof(*int_array) * size);
	if (*range == NULL)
		return (-1);
	len = 0;
	while (min < max)
		(*range)[len++] = min++;
	return (len);
}

/*
#include <stdio.h>
int main(void)
{
	int	*range[10];
	int	i;
	int	r;

	printf("range address = %p \n", &range);
	printf("range p1 address = %p \n", range);
	printf("[before] range p1 value address = %p \n", *range);
	r = ft_ultimate_range(range, 97, 101);
	printf("[after] range p1 value address = %p \n", *range);
	printf("range = %d \n", r);
	i = -1;
	while (++i < r)
		printf("\'%d\' index value = %d \n", i, (*range)[i]);
	return (0);
}
*/
