/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:26:48 by junbaek           #+#    #+#             */
/*   Updated: 2022/03/06 13:00:44 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*res;
	size_t	size;
	size_t	i;

	if (!str)
		return (0);
	size = ft_strlen(str + start);
	if (size > len)
		size = len;
	res = (char *)malloc(sizeof(char) * size + 1);
	if (!res)
		return (0);
	i = 0;
	while (i < len && (start + i) < ft_strlen(str))
	{
		res[i] = str[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
