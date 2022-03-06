/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:26:48 by junbaek           #+#    #+#             */
/*   Updated: 2022/03/06 13:00:44 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*res;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = (char *)malloc(len1 + len2 + 1);
	ft_memccpy(res, s1, 0, len1);
	ft_memccpy(res + len1, s2, 0, len2);
	res[len1 + len2] = '\0';
	return (res);
}