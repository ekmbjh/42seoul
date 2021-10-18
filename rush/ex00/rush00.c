/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 10:54:32 by junbaek           #+#    #+#             */
/*   Updated: 2021/10/10 19:14:11 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	shape(int a, int b, int r, int c)
{
	if (b == 0 || b == c - 1)
	{
		if (a == 0 || a == r - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (a == 0 || a == r - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

void	rush(int row, int column)
{
	int	x;
	int	y;

	y = 0;
	if (row >= 0 && column >= 0)
	{
		while (y < column)
		{
			x = 0;
			while (x < row)
			{
				shape(x, y, row, column);
				x++;
			}
			ft_putchar('\n');
			y++;
		}
	}
}
