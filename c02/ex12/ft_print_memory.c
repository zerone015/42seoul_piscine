/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:36:18 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:41:56 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hex_print(unsigned long long c, unsigned int cnt, unsigned int size)
{
	if (cnt < size - 1)
	{
		ft_hex_print(c / 16, cnt + 1, size);
	}
	write(1, &"0123456789abcdef"[c % 16], 1);
}

void	ft_hex_char_print(char *str, unsigned int *l, unsigned int *k, int *a)
{
	ft_hex_print(str[*l], 0, 2);
	if ((*l + 1) % 2 == 0)
	{
		write(1, " ", 1);
		if (*k < 16)
			*a += 1;
	}
	else if (*k == 1)
	{
		write(1, " ", 1);
		*a += 1;
	}
	*l += 1;
	*k -= 1;
	if (*k < 16)
		*a += 2;
}

void	ft_str_print(char *str, unsigned int *m, unsigned int *n)
{
	if (str[*n] <= 31 || str[*n] >= 127)
		write(1, ".", 1);
	else
		write(1, &str[*n], 1);
	*n += 1;
	*m -= 1;
}

void	ft_prn(void *addr, unsigned int *l, unsigned int *n, unsigned int *size)
{
	unsigned int	k;
	unsigned int	m;
	int				a;

	k = *size;
	m = *size;
	a = 0;
	while (k)
	{
		ft_hex_char_print((char *) addr, l, &k, &a);
		*size -= 1;
		if (*l % 16 == 0)
			break ;
		while (k == 0 && a <= 39)
		{
			write(1, " ", 1);
			a++;
		}
	}
	while (m)
	{
		ft_str_print((char *) addr, &m, n);
		if (*n % 16 == 0)
			break ;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;
	unsigned int	n;
	unsigned int	o;

	if (size <= 0)
		return (addr);
	j = size / 16 + 1;
	if (size % 16 == 0)
		j -= 1;
	i = 0;
	l = 0;
	n = 0;
	o = 0;
	while (i < j)
	{
		ft_hex_print((unsigned long long) &addr[o], 0, 16);
		write(1, ": ", 2);
		ft_prn(addr, &l, &n, &size);
		write(1, "\n", 1);
		i++;
		o += 16;
	}
	return (addr);
}
