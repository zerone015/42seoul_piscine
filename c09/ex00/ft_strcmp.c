/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 20:24:42 by yoson             #+#    #+#             */
/*   Updated: 2022/04/26 18:48:55 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	int				rtn;

	i = 0;
	rtn = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			rtn = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	if (rtn == 0)
	{
		rtn = s1[i] - s2[i];
	}
	return (rtn);
}

/*
int main(void)
{
	char a[] = "asdf";
	char b[] = "asdfasdf";
	int i = ft_strcmp(a, b);
	printf("%d \n", i);

	char c[] = "asdf";
	char d[] = "asdf";
	int j = ft_strcmp(c, d);
	printf("%d \n", j);

	char e[] = "asdfasdf";
	char f[] = "asdf";
	int k = ft_strcmp(e, f);
	printf("%d \n", k);

	return 0;
}
*/
