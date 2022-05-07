/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 01:01:05 by yoson             #+#    #+#             */
/*   Updated: 2022/05/02 04:59:49 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cmp_check(int value)
{
	if (value > 0)
		return (1);
	else if (value < 0)
		return (-1);
	else
		return (0);
}

int	get_first_cmp_value(int *tab, int len, int (*f)(int, int))
{
	int	i;
	int	return_value;

	i = 0;
	while (i < len - 1)
	{
		return_value = f(tab[i], tab[i + 1]);
		if (return_value != 0)
			return (cmp_check(return_value));
		i++;
	}
	return (0);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	result;
	int	first_cmp_value;

	first_cmp_value = get_first_cmp_value(tab, length, f);
	if (!first_cmp_value)
		return (1);
	i = 0;
	while (i < length - 1)
	{
		result = cmp_check(f(tab[i], tab[i + 1]));
		if (result != first_cmp_value && result != 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	ft_int_arr_cmp(int n1, int n2)
{
	return (n1 - n2);
}

int main(void)
{
	int	a[] = {5, 4, 3, 2, 1};
	int	b[] = {4, 6, 6, 1, 9};
	int	g[] = {1, 2, 3, 4, 5, 6};
	int c = ft_is_sort(a, 5, ft_int_arr_cmp);
	int d = ft_is_sort(b, 5, ft_int_arr_cmp);
	int	h = ft_is_sort(g, 6, ft_int_arr_cmp);
	printf("%d \n", c);
	printf("%d \n", d);
	printf("%d \n", h);
	return (0);
}
*/
