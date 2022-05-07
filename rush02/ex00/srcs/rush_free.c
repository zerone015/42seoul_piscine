/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 23:13:44 by yoson             #+#    #+#             */
/*   Updated: 2022/05/01 23:40:35 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "parser.h"
#include "util.h"
#include "check.h"
#include "rush_init.h"
#include "rush_free.h"
#include "print.h"

void	rush_free(char *under_thousand[], char *over_thousand[])
{
	int	i;

	i = 0;
	while (i < 30)
	{
		if (under_thousand[i] != 0)
			free(under_thousand[i]);
		if (over_thousand[i] != 0)
			free(over_thousand[i]);
		i++;
	}
}
