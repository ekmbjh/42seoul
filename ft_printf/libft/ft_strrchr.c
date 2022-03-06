/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:26:48 by junbaek           #+#    #+#             */
/*   Updated: 2022/03/06 13:00:44 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int	size;
	int	i;

	size = ft_strlen(src);
	if (c == 0)
		return ((char *)&src[size]);
	i = 0;
	while (i < size)
	{
		if (src[size - i - 1] == (char)c)
			return ((char *)&src[size - i - 1]);
		i++;
	}
	return (0);
}
