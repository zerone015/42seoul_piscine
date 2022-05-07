/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 20:26:58 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:41:06 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int main(void)
{
	char a[] = "ASDF1234asdf";
	ft_strlowcase(a);
	printf("%s \n", a);

	char b[] = "";
	ft_strlowcase(b);
	printf("%s \n", b);

	char c[] = "asdf1234";
	ft_strlowcase(c);
	printf("%s \n", c);

	return 0;
}
*/
