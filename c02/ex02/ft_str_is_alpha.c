/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:35:35 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:39:53 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			;
		else if ((str[i] >= 'a' && str[i] <= 'z'))
			;
		else
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int main(void)
{
	char a[] = "AA$112A";
	int b = ft_str_is_alpha(a);
	printf("%d \n", b);

	char c[] = "";
	int d = ft_str_is_alpha(c);
	printf("%d \n", d);

	char e[] = "asdfAQ";
	int f = ft_str_is_alpha(e);
	printf("%d \n", f);

	char g[] = "asdfasdfa1";
	int h =	ft_str_is_alpha(g);
	printf("%d \n", h);

	return 0;	
}
*/
