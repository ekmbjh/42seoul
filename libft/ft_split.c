/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:02:03 by junbaek           #+#    #+#             */
/*   Updated: 2021/12/14 14:11:12 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countword(const char *s, char c)
{
	size_t	cnt;
	size_t	flag;

	cnt = 0;
	flag = 0;
	while (*s != '\0')
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			cnt++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (cnt);
}

static size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*str_dup(const char *s, size_t num)
{
	char	*word;

	word = (char *)malloc(sizeof(char) * (num + 1));
	if (!(word))
		return (0);
	while (num-- > 0)
		*word++ = *s++;
	*word = '\0';
	return (word);
}

static void	free_str(char **s, int i)
{
	while (i-- > 0)
	{
		free(s[i]);
		s[i] = NULL;
	}
	free(s);
	s = NULL;
}

char	**ft_split(char const *str, char c)
{
	size_t	nb;
	size_t	wordlen;
	size_t	cnt;
	char	**result;

	cnt = countword(str, c);
	result = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!result)
		return (0);
	nb = 0;
	while (nb < cnt)
	{
		while (*str && *str == c)
			str++;
		wordlen = word_len(str, c);
		result[nb] = str_dup(str, wordlen);
		if (!(result[nb]))
		{
			free_str(result, nb);
			return (0);
		}
		str += wordlen;
		nb++;
	}
	result[cnt] = 0;
	return (result);
}
