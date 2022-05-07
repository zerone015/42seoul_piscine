/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 03:29:46 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:44:29 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_len;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && (i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	return (i + src_len);
}

/*
#include <stdio.h>
int main(void)
{
	char a[100] = "asdf";
	char b[] = "fff";
	int i = ft_strlcat(a, b, 4);
	printf("%d \n", i);
	printf("%s \n", a);

	return 0;
}
*/
