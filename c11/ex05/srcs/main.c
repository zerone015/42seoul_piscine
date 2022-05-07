/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 01:53:58 by yoson             #+#    #+#             */
/*   Updated: 2022/05/03 15:05:02 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "main.h"

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num * sign);
}

int	get_operator_index(char *operator)
{
	if (operator[0] == '+' && operator[1] == '\0')
		return (0);
	else if (operator[0] == '-' && operator[1] == '\0')
		return (1);
	else if (operator[0] == '*' && operator[1] == '\0')
		return (2);
	else if (operator[0] == '/' && operator[1] == '\0')
		return (3);
	else if (operator[0] == '%' && operator[1] == '\0')
		return (4);
	else
		return (-1);
}

int	is_stop(int num, int op_index)
{
	if (num == 0 && (op_index == 3 || op_index == 4))
	{
		if (op_index == 3)
			write(1, "Stop : division by zero\n", 24);
		else
			write(1, "Stop : modulo by zero\n", 22);
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	num1;
	int	num2;
	int	(*f[4])(int, int);
	int	op_index;

	if (argc != 4)
		return (0);
	op_index = get_operator_index(argv[2]);
	if (op_index == -1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	get_function_address(f);
	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[3]);
	if (is_stop(num2, op_index))
		return (0);
	ft_putnbr(f[op_index](num1, num2));
	return (0);
}
