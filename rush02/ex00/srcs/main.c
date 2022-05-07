/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjo <yjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 06:36:00 by yjo               #+#    #+#             */
/*   Updated: 2022/05/01 23:37:34 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "util.h"
#include "check.h"
#include "rush_init.h"
#include "rush_free.h"
#include "print.h"

int	n_str_to_number(char *number, int count)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (i < count)
	{
		result = result * 10 + (number[i] - '0');
		i++;
	}
	return (result);
}

void	number_to_string(char *number, char *under_thousand[], \
		char *over_thousand[])
{
	int	count;
	int	length;
	int	index;
	int	int_num;
	int	total_length;

	index = 0;
	total_length = get_number_length(number + index);
	while (index < total_length)
	{
		length = get_number_length(number + index);
		count = length % 3;
		if (count == 0 && length != 0)
			count = 3;
		int_num = n_str_to_number(number + index, count);
		print_string(number, index, count, under_thousand);
		if (length >= 4)
		{
			print(" ");
			print(over_thousand[(length - 1) / 3 - 1]);
			print(" ");
		}
		index += count;
	}
}

int	main(int argc, char *argv[])
{
	char	*under_thousand[30];
	char	*over_thousand[30];
	int		check_result;

	rush_init(over_thousand);
	check_result = argument_check(argc, argv, under_thousand, over_thousand);
	if (!check_result)
		return (0);
	rush_free(under_thousand, over_thousand);
	return (0);
}
