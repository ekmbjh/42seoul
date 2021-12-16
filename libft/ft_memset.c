/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:30:43 by junbaek           #+#    #+#             */
/*   Updated: 2021/12/14 13:19:50 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int value, size_t count)
{
	size_t			i;
	unsigned char	*new_dest;

	new_dest = (unsigned char *)dest;
	i = 0;
	while (i < count)
		new_dest[i++] = (unsigned char)value;
	return (dest);
}
