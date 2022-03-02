/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 23:03:29 by junbaek           #+#    #+#             */
/*   Updated: 2022/03/02 23:03:35 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_has_nl(char *str)
{
	if (str)
		while (*str)
			if (*str++ == '\n')
				return (1);
	return (0);
}

size_t	ft_strlen_gnl(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
		ptr++;
	return ((size_t)(ptr - str));
}

char	*ft_strdup_gnl(char *s1)
{
	char	*s2;
	char	*ptr;

	if (!s1)
		return (NULL);
	s2 = malloc (sizeof(char) * (ft_strlen_gnl(s1) + 1));
	if (!s2)
		return (NULL);
	ptr = s2;
	while (*s1)
		*ptr++ = *s1++;
	*ptr = *s1;
	return (s2);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*s1ptr;
	char	*s3ptr;
	char	*s3;

	if (!s1 && !s2)
		return (ft_strdup_gnl(""));
	if (s1 && !s2)
		return (ft_strdup_gnl(s1));
	if (!s1 && s2)
		return (ft_strdup_gnl(s2));
	s3 = malloc (sizeof(char) * (ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1));
	if (!s3)
		return (free(s1), NULL);
	s1ptr = s1;
	s3ptr = s3;
	while (*s1)
		*s3++ = *s1++;
	while (*s2)
		*s3++ = *s2++;
	*s3 = '\0';
	return (free(s1ptr), s3ptr);
}

char	*ft_substr_gnl(char *s, size_t start, size_t len)
{
	size_t	i;
	char	*ss;
	size_t	strlen;

	if (!s)
		return (NULL);
	strlen = ft_strlen_gnl(s);
	if (start >= strlen)
		return (ft_strdup_gnl(""));
	if (len < strlen)
		ss = malloc (sizeof(char) * (len + 1));
	else
		ss = malloc (sizeof(char) * (len - start + 1));
	if (!ss)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		ss[i] = s[start + i];
		i++;
	}
	ss[i] = '\0';
	return (ss);
}
