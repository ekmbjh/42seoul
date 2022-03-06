/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:26:48 by junbaek           #+#    #+#             */
/*   Updated: 2022/03/06 13:00:44 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	i;
	char	*res;

	if (!s)
		return (0);
	size = ft_strlen(s);
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (!res)
		return (0);
	i = 0;
	while (i < size)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
