/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:45:57 by junbaek           #+#    #+#             */
/*   Updated: 2021/12/14 12:35:12 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*cpy_s;

	len = ft_strlen(s) + 1;
	cpy_s = (char *)malloc(sizeof(char) * len);
	if (!(cpy_s))
		return (NULL);
	i = 0;
	while (s[i])
	{
		cpy_s[i] = s[i];
		i++;
	}
	cpy_s[i] = '\0';
	return (cpy_s);
}
