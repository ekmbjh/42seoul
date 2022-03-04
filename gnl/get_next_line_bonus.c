/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 23:03:42 by junbaek           #+#    #+#             */
/*   Updated: 2022/03/02 23:03:44 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*newline(char *temp)
{
	size_t	i;

	i = 0;
	if (temp[i] == '\0')
		return (NULL);
	while (temp[i] && temp[i] != '\n')
		i++;
	if (temp[i] == '\n')
		i++;
	return (ft_substr(temp, 0, i));
}

char	*newtemp(char *temp)
{
	char	*new;
	size_t	i;

	i = 0;
	while (temp[i] && temp[i] != '\n')
		i++;
	if (temp[i] == '\0')
		return (free(temp), NULL);
	if (temp[i] == '\n')
		i++;
	new = ft_substr(temp, i, ft_strlen(temp) - i);
	return (free(temp), new);
}

char	*get_next_line(int fd)
{
	static char	*temp[OPEN_MAX];
	char		*line;
	char		*buf;
	long		r;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	buf = malloc (sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	r = 1;
	while (r && !ft_has_nl(temp[fd]))
	{
		r = read(fd, buf, BUFFER_SIZE);
		if (r < 0)
			return (free(buf), NULL);
		buf[r] = '\0';
		temp[fd] = ft_strjoin(temp[fd], buf);
	}
	free(buf);
	if (!temp[fd])
		return (NULL);
	line = newline(temp[fd]);
	temp[fd] = newtemp(temp[fd]);
	return (line);
}
