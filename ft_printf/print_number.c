/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:26:48 by junbaek           #+#    #+#             */
/*   Updated: 2022/03/06 13:00:44 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_decimal(int arg)
{
	int	cnt;

	cnt = ft_putnbr(arg);
	return (cnt);
}

int	print_un_decimal(unsigned int arg)
{
	int	cnt;
	int	un;

	un = arg;
	cnt = ft_putunnbr(un);
	return (cnt);
}

int	print_un_hex(unsigned int arg, char type)
{
	int			cnt;
	signed int	un;
	char		*base;

	un = arg;
	if (type == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	cnt = ft_putunnbr_hex(arg, base);
	return (cnt);
}

int	print_pointer(unsigned long long arg)
{
	int		cnt;
	char	*base;

	base = "0123456789abcdef";
	write(1, "0x", 2);
	cnt = ft_putunnbr_hex(arg, base);
	return (cnt + 2);
}
