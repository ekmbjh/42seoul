/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student@42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:36:23 by junbaek           #+#    #+#             */
/*   Updated: 2021/10/18 11:36:25 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_length(char *dest)
{
	unsigned int	cnt;

	cnt = 0;
	while (dest[cnt] != '\0')
		cnt++;
	return (cnt);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*dst;
	char			*src_start;
	unsigned int	dst_digit;
	unsigned int	remain;

	dst = dest;
	src_start = src;
	remain = size;
	while (remain-- != 0 && *dst != '\0')
		dst++;
	dst_digit = dst - dest;
	remain = size - dst_digit;
	if (remain == 0)
		return (dst_digit + str_length(src));
	while (*src != '\0')
	{
		if (remain > 1)
		{
			*dst++ = *src;
			remain--;
		}
		src++;
	}
	*dst = '\0';
	return (dst_digit + (src - src_start));
}
