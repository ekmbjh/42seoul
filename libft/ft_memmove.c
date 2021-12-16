/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:11:43 by junbaek           #+#    #+#             */
/*   Updated: 2021/12/14 13:17:51 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest == src || num == 0)
		return (dest);
	if (dest < src)
	{
		while (i < num)
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
	}
	else
	{
		i = num;
		while (i)
			((unsigned char *)dest)[i - 1] = ((unsigned char *)src)[i - 1];
			i--;
	}
	return (dest);
}
