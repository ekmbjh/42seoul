/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:46:36 by junbaek           #+#    #+#             */
/*   Updated: 2021/12/08 15:46:38 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	size_t s_len;

	s_len = ft_strlen(s);
	while (s_len != '\0' && s[s_len] != c)
		s_len--;
	if (s[s_len] == c)
		return ((char *) s + s_len);
	return (0);
}
