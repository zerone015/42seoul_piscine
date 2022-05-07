/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 23:11:52 by yoson             #+#    #+#             */
/*   Updated: 2022/05/01 23:37:58 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "util.h"
#include "check.h"
#include "rush_init.h"
#include "rush_free.h"
#include "print.h"

void	rush_init(char *over_thousand[])
{
	int	i;

	i = 0;
	while (i < 30)
	{
		over_thousand[i] = 0;
		i++;
	}
}
