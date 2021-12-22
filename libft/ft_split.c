/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:29:02 by junbaek           #+#    #+#             */
/*   Updated: 2021/12/22 11:03:50 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_malloc(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static void	get_str_strlen(char **next_str, unsigned int *strlen,
	char c)
{
	unsigned int	i;

	*next_str += *strlen;
	*strlen = 0;
	i = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return ;
		(*strlen)++;
		i++;
	}
}

static char **input_tab(char **tab, char const *s, char c, unsigned int cnt_str)
{
	char			*next_str;
	unsigned int	strlen;
	unsigned int	i;

	i = 0;
	next_str = (char *)s;
	strlen = 0;
	while (i < cnt_str)
	{
		get_str_strlen(&next_str, &strlen, c);
		tab[i] = (char *)malloc(sizeof(char) * (strlen + 1));
		if (!tab[i])
			return (free_malloc(tab));
		ft_strlcpy(tab[i], next_str, strlen + 1);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

static unsigned int	ft_countstr(char const *s, char c)
{
	unsigned int	i;
	unsigned int	cnt_str;

	i = 0;
	cnt_str = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			cnt_str++;
			while (s[i] && s[i] != c)
				i++;
			if (s[i] == '\0')
				break ;
		}
		i++;
	}
	return (cnt_str);
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	unsigned int	cnt_str;

	if (!s)
		return (NULL);
	cnt_str = ft_countstr(s, c);
	tab = (char **)malloc(sizeof(char *) * (cnt_str + 1));
	if (!tab)
		return (NULL);
	tab = input_tab(tab, s, c, cnt_str);
	return (tab);
}