/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 23:26:16 by yoson             #+#    #+#             */
/*   Updated: 2022/05/01 23:51:33 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "parser.h"
#include "util.h"
#include "check.h"
#include "rush_init.h"
#include "rush_free.h"
#include "print.h"
#include "main.h"

void	print(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

void	print_string(char *str, int index, int count, char *under_thousand[])
{
	int	int_num;

	int_num = n_str_to_number(str + index, count);
	if (count == 3)
	{
		print(under_thousand[int_num / 100]);
		print(" ");
		print(under_thousand[28]);
		print(" ");
	}
	int_num %= 100;
	if (int_num >= 10 && int_num <= 19)
	{
		print(under_thousand[int_num % 100]);
		print(" ");
	}
	else if (count > 1)
	{
		print(under_thousand[int_num / 10]);
		print(" ");
		print(under_thousand[int_num % 10]);
	}
	else if (count > 0)
		print(under_thousand[int_num % 10]);
}
