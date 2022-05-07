/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:54:45 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 23:09:03 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (src[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		src_len;
	int		i;

	src_len = ft_strlen(src);
	str = (char *) malloc(sizeof(*str) * (src_len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>
int main(void)
{
	char a[] = "asdf";
	char *b = ft_strdup(a);
	printf("%p \n", b);
	printf("%s \n", b);
	return (0);
}
*/
