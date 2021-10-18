/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student@42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:37:58 by junbaek           #+#    #+#             */
/*   Updated: 2021/10/18 14:53:33 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	change_dec_to_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			change_dec_to_hex(str[i]);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
}
