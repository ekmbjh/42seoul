/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:26:48 by junbaek           #+#    #+#             */
/*   Updated: 2022/03/06 13:00:44 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	int		flag;

	i = 0;
	flag = 0;
	while (i < n && !flag)
	{
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
		if (*((unsigned char *)src + i) == (unsigned char)c)
			flag = 1;
		i++;
	}
	if (flag)
		return ((unsigned char *)dst + i);
	else
		return (0);
}
