/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:18:33 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:44:20 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char	*str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	if (str[0] == '\0' && to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j] && str[i] != '\0')
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i - j]);
		i -= j;
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	char a[] = "asdf5asdf15352asdf798";
	char b[] = "asdf798";
	char * c = ft_strstr(a, b);
	printf("%p \n", c);
	printf("%p \n", &a[14]);
	return 0;
}
*/
