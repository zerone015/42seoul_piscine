/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 21:51:48 by yoson             #+#    #+#             */
/*   Updated: 2022/05/05 23:41:49 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			i;
	long long	size;
	int			*int_array;

	if (min >= max)
		return (NULL);
	size = (long long) max - (long long) min;
	int_array = (int *) malloc(sizeof(int) * size);
	if (int_array == NULL)
		return (NULL);
	i = 0;
	while (min < max)
		int_array[i++] = min++;
	return (int_array);
}

/*
#include <stdio.h>
int main(void)
{
	int	*a;
	int	i;

	a = ft_range(97, 99);
	printf("%p \n", a);
	i = 0;
	while (i < 2)
	{
		printf("%d \n", a[i]);
		i++;
	}
	return (0);
}
*/
