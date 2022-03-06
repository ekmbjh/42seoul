/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:26:48 by junbaek           #+#    #+#             */
/*   Updated: 2022/03/06 13:00:44 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(va_list ap, const char *format)
{
	if (*format == 'c')
		return (print_c(va_arg(ap, int)));
	else if (*format == 's')
		return (print_s(va_arg(ap, char *)));
	else if (*format == 'd' || *format == 'i')
		return (print_decimal(va_arg(ap, int)));
	else if (*format == 'u')
		return (print_un_decimal(va_arg(ap, int)));
	else if (*format == 'p')
		return (print_pointer(va_arg(ap, unsigned long long)));
	else if (*format == 'X' || *format == 'x')
		return (print_un_hex(va_arg(ap, unsigned int), *format));
	else if (*format == '%')
		return (write(1, "%", 1));
	else
		return (0);
}

int	manage_print(const char *string, va_list ap)
{
	int	index;
	int	cnt;

	index = 0;
	cnt = 0;
	while (string[index])
	{
		if (string[index] == '%')
		{
			cnt += print_format(ap, &(string[++index]));
		}
		else
		{
			write(1, &(string[index]), 1);
			cnt++;
		}
		index++;
	}
	return (cnt);
}

int	ft_printf(const char *string, ...)
{
	va_list	ap;
	int		cnt;

	va_start(ap, string);
	cnt = manage_print(string, ap);
	va_end(ap);
	return (cnt);
}
