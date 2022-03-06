/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:26:48 by junbaek           #+#    #+#             */
/*   Updated: 2022/03/06 13:00:44 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_c(int arg)
{
	int		cnt;
	char	c;

	c = (char)arg;
	cnt = write(1, &c, 1);
	return (cnt);
}

int	print_s(char *arg)
{
	int	cnt;

	if (!arg)
		cnt = write(1, "(null)", 6);
	else
		cnt = write(1, arg, ft_strlen(arg));
	return (cnt);
}
