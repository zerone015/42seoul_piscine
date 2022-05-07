/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 22:20:10 by yoson             #+#    #+#             */
/*   Updated: 2022/05/01 23:40:47 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "util.h"
#include "check.h"
#include "rush_init.h"
#include "rush_free.h"
#include "print.h"

int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\v'
		|| c == '\n' || c == '\f' || c == '\r')
	{
		return (1);
	}
	return (0);
}
