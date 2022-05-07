/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:59:26 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:41:31 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= 0)
		return (src_len);
	i = 0;
	j = 0;
	while (i < size - 1)
	{
		dest[i] = src[j];
		if (src[j] != '\0')
			j++;
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

/*
#include <stdio.h>
int main(void)
{
	char a[] = "123456";
	char b[20];
	int i = ft_strlcpy(b, a, 13);
	printf("dest : %s \n length : %d \n", b, i);

	char c[] = "123456";
	char d[20];
	int j = ft_strlcpy(d, c, 6);
	printf("dest : %s \n length : %d \n", d, j);

	return 0;
}
*/
