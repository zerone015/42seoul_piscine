/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   until.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjo <yjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 21:30:43 by yjo               #+#    #+#             */
/*   Updated: 2022/05/01 23:40:43 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "util.h"
#include "check.h"
#include "rush_init.h"
#include "rush_free.h"
#include "print.h"

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] != '\0' && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	get_str_length(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0' && str[length] != '\n')
	{
		length++;
	}
	return (length);
}

int	get_number_length(char *str)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (str[i] != '\0' && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		i++;
		length++;
	}
	return (length);
}

void	copy(char *dest, char *src, int length)
{
	int	i;

	i = 0;
	while (i < length)
	{
		dest[i] = src[i];
		i++;
	}
}

int	find_number_end(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		i++;
	}
	return (i);
}
