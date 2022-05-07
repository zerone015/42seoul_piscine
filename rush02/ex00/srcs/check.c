/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 23:15:44 by yoson             #+#    #+#             */
/*   Updated: 2022/05/01 23:39:11 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "util.h"
#include "check.h"
#include "rush_init.h"
#include "rush_free.h"
#include "print.h"
#include "main.h"

int	argument_check(int argc, char *argv[], char *under_thousand[], \
		char *over_thousand[])
{
	if (argc == 2)
	{
		if (!is_valid_number(argv[1]))
		{
			print("Error\n");
			return (0);
		}
		read_file("./numbers.dict", under_thousand, over_thousand);
		number_to_string(argv[1], under_thousand, over_thousand);
	}
	else if (argc == 3)
	{
		if (!is_valid_number(argv[2]))
		{
			print("Error\n");
			return (0);
		}
		read_file(argv[1], under_thousand, over_thousand);
		number_to_string(argv[2], under_thousand, over_thousand);
	}
	else
		return (0);
	return (1);
}

int	is_valid_number(char *num)
{
	int	i;

	i = 0;
	while (num[i] != '\0')
	{
		if (num[i] < '0' || num[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
