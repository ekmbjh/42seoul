/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:21:22 by junbaek           #+#    #+#             */
/*   Updated: 2021/12/08 12:21:27 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t			i;

	if (!num || dest == src)
		return (dest);
	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < num)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	return (dest);
}
