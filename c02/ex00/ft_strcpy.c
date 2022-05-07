/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 23:50:21 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:39:03 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int main(void)
{
	char a[] = "asdfasdf";
	char b[] = "asdf";
	ft_strcpy(a, b);
	printf("%s \n", a);
	
	char c[] = "asdf";
	char d[] = "";
	ft_strcpy(c, d);
	printf("%s \n", c);

	return 0;
}
*/
