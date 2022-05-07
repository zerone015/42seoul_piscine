/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 20:29:45 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:41:19 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	ft_isword(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

unsigned char	ft_islowalpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

unsigned char	ft_isupalpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	if (str[0] == '\0')
		return (str);
	if (ft_islowalpha(str[0]))
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if ((!ft_isword(str[i - 1])) && ft_islowalpha(str[i]))
			str[i] -= 32;
		else if (ft_isword(str[i - 1]) && ft_isupalpha(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int main(void)
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(a);
	printf("%s \n", a);

	char b[] = " a 4FAasD,d+AA";
	ft_strcapitalize(b);
	printf("%s \n", b);

	return 0;
}
*/
