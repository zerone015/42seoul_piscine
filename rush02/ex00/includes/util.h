/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   until.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjo <yjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 21:31:00 by yjo               #+#    #+#             */
/*   Updated: 2022/05/01 22:22:14 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_H
# define UTIL_H

int		ft_atoi(char *str);
int		get_str_length(char *str);
int		get_number_length(char *str);
void	copy(char *dest, char *src, int length);
int		is_space(char c);
int		find_number_end(char *str);

#endif
