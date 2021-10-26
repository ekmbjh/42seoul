/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:12:58 by junbaek           #+#    #+#             */
/*   Updated: 2021/10/25 14:16:41 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int				i;
	int				digits_rev[1000];
	unsigned int	unb;

	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	unb = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		unb = -nb;
	}
	i = 0;
	while (unb > 0)
	{
		digits_rev[i] = unb % 10;
		unb /= 10;
		i++;
	}
	while (i > 0)
		ft_putchar(digits_rev[--i] + '0');
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
