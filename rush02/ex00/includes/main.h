/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjo <yjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:41:00 by yjo               #+#    #+#             */
/*   Updated: 2022/05/01 23:31:11 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

int		n_str_to_number(char *number, int count);
void	number_to_string(char *number, char *under_thousand[], \
		char *over_thousand[]);

#endif
