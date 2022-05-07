/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_check.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 23:16:01 by yoson             #+#    #+#             */
/*   Updated: 2022/05/01 23:31:48 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H

int	argument_check(int argc, char *argv[], char *under_thousand[], \
		char *over_thousand[]);
int	is_valid_number(char *num);

#endif
