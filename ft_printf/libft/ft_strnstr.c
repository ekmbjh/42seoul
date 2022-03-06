/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:26:48 by junbaek           #+#    #+#             */
/*   Updated: 2022/03/06 13:00:44 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*res;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			res = (char *)&haystack[i];
			j = 1;
			while ((haystack[i + j] == needle[j]) && needle[j] && (i + j) < len)
				j++;
			if (needle[j] == '\0')
				return (res);
		}
		i++;
	}
	return (0);
}
