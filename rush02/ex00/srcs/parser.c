/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjo <yjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:35:21 by yjo               #+#    #+#             */
/*   Updated: 2022/05/01 23:51:12 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "util.h"
#include "parser.h"
#include "check.h"
#include "rush_init.h"
#include "rush_free.h"
#include "print.h"
#include "main.h"

void	alloc_str(char *str, char ***dic, int i, int word_start_index)
{
	int		n;
	int		str_length;
	char	*number_str;
	int		number_length;

	str_length = get_str_length(str + i + word_start_index);
	number_str = (char *)malloc(sizeof(char) * str_length + 1);
	if (!number_str)
		return ;
	number_str[str_length] = '\0';
	number_length = get_number_length(str + i);
	copy(number_str, str + i + word_start_index, str_length);
	if (number_length <= 3)
	{
		n = ft_atoi(str + i);
		if (n < 20)
			dic[0][n] = number_str;
		else
			dic[0][20 + n / 10 - 2] = number_str;
	}
	else
		dic[1][(number_length - 1) / 3 - 1] = number_str;
}

void	parsing_number(char *str, char *under_thousand[], char *over_thousand[])
{
	int		i;
	int		is_newline;
	int		word_index;
	char	**dic[2];

	is_newline = 1;
	i = 0;
	dic[0] = under_thousand;
	dic[1] = over_thousand;
	while (str[i])
	{
		if (str[i] == '\n')
			is_newline = 1;
		else if (is_newline)
		{
			is_newline = 0;
			word_index = find_number_end(str + i);
			while (str[i + word_index] == '\0' || is_space(str[i + word_index])
				|| str[i + word_index] == ':')
				word_index++;
			alloc_str(str, dic, i, word_index);
		}
		i++;
	}
}

void	read_file(char *filename, char *under_thousand[], char *over_thousand[])
{
	char	buffer[100000];
	int		file_descriptor;
	int		length;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		print("fail\n");
		return ;
	}
	length = read(file_descriptor, buffer, 10000);
	buffer[length] = '\0';
	parsing_number(buffer, under_thousand, over_thousand);
	close(file_descriptor);
}
