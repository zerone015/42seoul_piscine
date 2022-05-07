/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:33:40 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:44:10 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int main(void)
{
	char a[] = "asdf";
	char b[] = "1234";
	ft_strncat(a, b, 2);
	printf("%s \n", a);

	char c[100] = "asdf";
	char d[] = "12";
	ft_strncat(c, d, 5);
	printf("%s \n", c);

	return 0;
}
*/
