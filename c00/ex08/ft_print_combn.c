/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:18:14 by junbaek           #+#    #+#             */
/*   Updated: 2021/10/16 11:34:47 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnumb(int i, int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	g_com[9];

void	DFS(int s, int L, int n)
{
	int	i;

	i = 0;
	if (L == n)
		ft_putnumb(i, n);
	else
	{
		i = s;
		while (i <= 9)
		{
			g_com[L] = i;
			DFS(i + 1, L + 1, n);
			i++;
		}
	}
}

void	ft_putnumb(int i, int n)
{
	i = 0;
	while (i < n)
	{
		ft_putchar(48 + g_com[i]);
		i++;
	}
	if (g_com[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	DFS(0, 0, n);
}
