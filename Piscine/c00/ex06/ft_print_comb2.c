/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:56:55 by junbaek           #+#    #+#             */
/*   Updated: 2021/10/16 16:24:44 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c1, char c2)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	c1;
	char	c2;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			c1 = i / 10 + '0';
			c2 = i % 10 + '0';
			ft_putchar(c1, c2);
			write(1, " ", 1);
			c1 = j / 10 + '0';
			c2 = j % 10 + '0';
			ft_putchar(c1, c2);
			if (i != 98)
				ft_putchar(',', ' ');
			j++;
		}
		i++;
	}
}
