/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student@42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:37:03 by junbaek           #+#    #+#             */
/*   Updated: 2021/10/18 10:37:05 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	else
	{
		while (*(str + i) != '\0')
		{
			if (str[i] < 'A' || str[i] > 'Z')
			{
				j++;
			}
			i++;
		}
		if (j != 0)
			return (0);
		else
			return (1);
	}
}
