/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 20:46:05 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 23:10:01 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_word(char c, char *charset)
{
	while (*charset != '\0')
	{
		if (c == *charset)
			return (0);
		charset++;
	}
	return (1);
}

int	get_size(char *str, char *charset)
{
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (*str != '\0')
	{
		if (is_word(*str, charset))
		{
			size++;
			while (*str != '\0' && is_word(*str, charset))
				str++;
		}
		str++;
	}
	return (size);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**str_arr;
	char	*p;
	int		i;

	str_arr = (char **) malloc(sizeof(char *) * get_size(str, charset) + 1);
	if (!str_arr)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		if (is_word(*str, charset))
		{
			p = str;
			while (*str != '\0' && is_word(*str, charset))
				str++;
			str_arr[i] = (char *) malloc(sizeof(char) * (str - p + 1));
			ft_strncpy(str_arr[i], p, str - p);
			i++;
		}
		else
			str++;
	}
	str_arr[i] = NULL;
	return (str_arr);
}

/*
#include <stdio.h>
int main(void)
{
	char **a;
	char b[] = "asdf,1234,6789,";
	char c[] = ",";

	a = ft_split(b, c);
	int i = 0;
	while (i < 4)
	{
		printf("%s \n", a[i]);
		i++;
	}

	return (0);
}
*/
