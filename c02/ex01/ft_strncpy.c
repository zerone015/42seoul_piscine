/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 03:08:13 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:39:24 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < n)
	{
		dest[i] = src[j];
		if (src[j] != '\0')
			j++;
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
int main(void)
{
	char a[] = "asdfas";
	char b[] = "zxcv";
	ft_strncpy(a, b, 2);
	printf("%s \n", a);

	char c[] = "asdfas";
	char d[] = "zxcv";
	ft_strncpy(c, d, 6);
	printf("%s \n", c);

	return 0;
}
*/
