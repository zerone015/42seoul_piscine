/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:33:06 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:41:41 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_hex_print(unsigned char c, unsigned int cnt)
{
	if (cnt < 1)
	{
		ft_hex_print(c / 16, cnt + 1);
	}
	write(1, &"0123456789abcdef"[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] >= 127)
		{	
			write(1, "\\", 1);
			ft_hex_print((unsigned char) str[i], 0);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

/*
#include <stdio.h>
int main(void)
{
	char a[100];
	a[0] = 0xff;
	ft_putstr_non_printable(a);

	return 0;
}
*/
