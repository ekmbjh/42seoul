/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:29:46 by junbaek           #+#    #+#             */
/*   Updated: 2021/10/10 19:15:53 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	shape2(int a, int b, int r, int c);

void	shape(int a, int b, int r, int c)
{
	if (b == 0)
	{
		if (a == 0)
			ft_putchar('A');
		else if (a == r - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (b == c - 1)
	{
		if (a == 0)
			ft_putchar('C');
		else if (a == r - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	shape2(a, b, r, c);
}

void	shape2(int a, int b, int r, int c)
{
	if (b > 0 && b < c - 1 )
	{
		if (a == 0 || a == r - 1 )
			ft_putchar('B');
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
