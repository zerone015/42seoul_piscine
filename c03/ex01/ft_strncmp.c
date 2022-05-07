/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:34:09 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:42:30 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				rtn;

	i = 0;
	rtn = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || (s1[i] == '\0' || s2[i] == '\0'))
		{
			rtn = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (rtn);
}

/*
#include <stdio.h>
int main(void)
{
	char a[] = "asdfasdf";
	char b[] = "asffasdf";
	int i = ft_strncmp(a, b, 2);
	printf("%d \n", i);
	int j = ft_strncmp(a, b, 3);
	printf("%d \n", j);
	int k = ft_strncmp(a, b, 5);
	printf("%d \n", k);

	char c[] = "1";
	char d[] = "1";
	int l = ft_strncmp(c, d, 10);
	printf("%d \n", l);
	return (0);
}
*/
