/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjo <yjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:41:43 by yjo               #+#    #+#             */
/*   Updated: 2022/05/01 21:59:59 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

void	alloc_str(char *str, char ***dic, int i, int word_start_index);
void	parsing_number(char *str, char *under_thousand[], \
		char *over_thousand[]);
void	read_file(char *filename, char *under_thousand[], \
	char *over_thousand[]);

#endif
