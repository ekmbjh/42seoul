/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student@42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:34:53 by junbaek           #+#    #+#             */
/*   Updated: 2021/10/18 10:34:55 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
			if ((str[i] < 'a' && str[i] > 'Z') || str[i] < 'A' || str[i] > 'z')
			{
				j++;
			}
			i++;
		}
	}
	if (j != 0)
		return (0);
	else
		return (1);
}
