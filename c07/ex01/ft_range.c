/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:35:49 by junbaek           #+#    #+#             */
/*   Updated: 2021/10/25 20:22:21 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*a;
	int		i;

	if (min >= max)
		return (NULL);
	a = (int *)malloc(sizeof(*a) * (max - min));
	if (a == NULL)
		return (NULL);
	else
	{
		i = -1;
		while (++i < max - min)
			a[i] = min + i;
		return (a);
	}
}
