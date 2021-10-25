/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:21:45 by junbaek           #+#    #+#             */
/*   Updated: 2021/10/25 20:44:43 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	memory_in_need;
	int	index;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	memory_in_need = max - min - 1;
	*range = (int *)malloc(sizeof(int) * memory_in_need);
	if (*range == NULL)
		return (-1);
	index = 0;
	while (index <= memory_in_need)
	{
		(*range)[index] = min + index;
		index++;
	}
	return (memory_in_need + 1);
}
