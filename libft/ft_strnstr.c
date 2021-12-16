/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:37:47 by junbaek           #+#    #+#             */
/*   Updated: 2021/12/14 13:01:06 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0' && len-- > 0)
	{
		i = 0;
		while (*(big + i) == *(little + i) && i < len)
		{
			i++;
			if (*(little + i) == '\0')
				return ((char *)big);
		}
		big++;
	}
	return (0);
}
