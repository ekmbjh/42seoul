/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:26:48 by junbaek           #+#    #+#             */
/*   Updated: 2022/03/06 13:00:44 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int				cnt;
	char			tmp;
	unsigned int	nbr;

	nbr = n;
	cnt = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		nbr = n * -1;
	}
	if (nbr < 10)
		tmp = '0' + nbr;
	else
	{
		cnt = ft_putnbr(nbr / 10);
		tmp = '0' + (nbr % 10);
	}
	write(1, &tmp, 1);
	cnt++;
	if (n < 0)
		cnt++;
	return (cnt);
}

int	ft_putunnbr(unsigned int nbr)
{
	int		cnt;
	char	tmp;

	cnt = 0;
	if (nbr < 10)
		tmp = '0' + nbr;
	else
	{
		cnt = ft_putunnbr(nbr / 10);
		tmp = '0' + (nbr % 10);
	}
	write(1, &tmp, 1);
	cnt++;
	return (cnt);
}

int	ft_putunnbr_hex(unsigned long long nbr, char *base)
{
	int		cnt;
	char	tmp;

	cnt = 0;
	if (nbr < 0x10)
		tmp = base[nbr];
	else
	{
		cnt = ft_putunnbr_hex(nbr / 0x10, base);
		tmp = base[nbr % 0x10];
	}
	write(1, &tmp, 1);
	cnt++;
	return (cnt);
}
