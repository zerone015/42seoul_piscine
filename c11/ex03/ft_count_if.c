/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 00:56:38 by yoson             #+#    #+#             */
/*   Updated: 2022/05/01 01:03:00 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	result;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		result = f(tab[i]);
		if (result != 0)
			count++;
		i++;
	}
	return (count);
}
