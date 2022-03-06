/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:26:48 by junbaek           #+#    #+#             */
/*   Updated: 2022/03/06 13:00:44 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i) > *((unsigned char *)s2 + i))
			return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
		else if (*((unsigned char *)s1 + i) < *((unsigned char *)s2 + i))
			return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
		i++;
	}
	return (0);
}
