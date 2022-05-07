/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 20:24:42 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:42:16 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int main(void)
{
	char a[] = "asdf";
	char b[] = "asdfasdf";
	int i = ft_strcmp(a, b);
	printf("%d \n", i);

	char c[] = "asdf";
	char d[] = "asdf";
	int j = ft_strcmp(c, d);
	printf("%d \n", j);

	char e[] = "asdfasdf";
	char f[] = "asdf";
	int k = ft_strcmp(e, f);
	printf("%d \n", k);

	return 0;
}
*/
