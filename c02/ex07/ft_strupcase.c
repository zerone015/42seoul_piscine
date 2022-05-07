/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 20:19:19 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:40:53 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int main(void)
{
	char a[] = "asdf1234ASDF";
	ft_strupcase(a);
	printf("%s \n", a);

	char b[] = "";
	ft_strupcase(b);
	printf("%s \n", b);

	char c[] = "ASDF1234";
	ft_strupcase(c);
	printf("%s \n", c);

	return 0;
}
*/
