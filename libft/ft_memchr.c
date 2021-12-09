/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:45:53 by junbaek           #+#    #+#             */
/*   Updated: 2021/12/09 10:45:55 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t i;

	i = 0;
	while (i < num)
	{
		if (((unsigned char*)ptr)[i] == (unsigned char*)value)
			return ((void *)ptr + i);
		i++;
	}
	return (0);
}
