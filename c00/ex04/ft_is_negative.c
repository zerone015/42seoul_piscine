/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 01:24:14 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 22:26:16 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{	
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}

/*
int	main(void)
{
	ft_is_negative(0);
	ft_is_negative(5);
	ft_is_negative(-1);

	return 0;
}
*/
