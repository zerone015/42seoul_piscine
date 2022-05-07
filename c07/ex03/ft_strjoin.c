/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 07:22:53 by yoson             #+#    #+#             */
/*   Updated: 2022/05/05 23:43:30 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_strslen(int size, char **strs, char *sep)
{
	int	i;
	int	strs_len;

	i = 0;
	strs_len = 0;
	while (i < size)
	{
		strs_len += ft_strlen(strs[i]);
		i++;
	}
	strs_len += ft_strlen(sep) * (size - 1) + 1;
	return (strs_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size < 0)
		return (NULL);
	if (size == 0)
	{
		str = (char *) malloc(sizeof(*str));
		if (str)
			*str = '\0';
		return (str);
	}
	str = (char *) malloc(sizeof(*str) * ft_strslen(size, strs, sep));
	if (str == NULL)
		return (NULL);
	i = 0;
	*str = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int main(void)
{
	char *strs[4];

	char a[] = "abcdefg";
	char b[] = "hijk";
	char c[] = "lmnopqr";
	char d[] = "stu";
	char sep[] = "\n";
	strs[0] = a;
	strs[1] = b;
	strs[2] = c;
	strs[3] = d;
	
	char *join;

	join = ft_strjoin(4, strs, sep);
	if (join != NULL)
		printf("%s", join);

	return (0);
}
*/
