/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:42:44 by yoson             #+#    #+#             */
/*   Updated: 2022/04/25 04:07:54 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*p;

	while (--argc)
	{
		p = *(argv + argc);
		while (*p)
			write(1, p++, 1);
		write(1, "\n", 1);
	}
	return (0);
}