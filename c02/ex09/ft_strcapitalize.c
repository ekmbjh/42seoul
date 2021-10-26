/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student@42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:37:40 by junbaek           #+#    #+#             */
/*   Updated: 2021/10/18 14:52:51 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z' )
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	ft_strlowcase(str);
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			if (y == 1)
			{
				str[x] -= 32;
				y = 0;
			}
		}
		else if (str[x] >= '0' && str [x] <= '9')
			y = 0;
		else
			y = 1;
		x++;
	}
	return (str);
}
