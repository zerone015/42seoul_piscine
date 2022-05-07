/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junehlee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:28:52 by junehlee          #+#    #+#             */
/*   Updated: 2022/04/23 18:44:08 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_init(int *num_case[])
{
	num_case[1][0] = 4321;
	num_case[1][1] = 4312;
	num_case[1][2] = 4213;
	num_case[1][3] = 4231;
	num_case[1][4] = 4123;
	num_case[1][5] = 4132;
	num_case[2][0] = 1423;
	num_case[2][1] = 1432;
	num_case[2][2] = 2143;
	num_case[2][3] = 2413;
	num_case[2][4] = 2431;
	num_case[2][5] = 3124;
	num_case[2][6] = 3214;
	num_case[2][7] = 3142;
	num_case[2][8] = 3241;
	num_case[2][9] = 3412;
	num_case[2][10] = 3421;
	num_case[3][0] = 2341;
	num_case[3][1] = 2134;
	num_case[3][2] = 1243;
	num_case[3][3] = 1342;
	num_case[3][4] = 1324;
	num_case[3][5] = 2314;
	num_case[4][0] = 1234;
}

int	ft_argv_check(char argv[])
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (i % 2 == 1 && (argv[i] != ' ' || !(argv[i] >= 9 && argv[i] <= 13)))
		{
			return (0);
		}
		if (i % 2 == 0 && !(argv[i] >= '1' && argv[i] <= '4'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include <stdio.h>
int main(int argc, char *argv[])
{
	int i = 0;
	while(argv[i])
	{
		printf("%s \n", argv[i]);
		i++;
	}
	if (argc != 2 || !ft_argv_check(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	int num_case[5][11];
	ft_init((int **) num_case);
	return (0);
}
