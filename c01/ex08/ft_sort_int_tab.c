/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:38:45 by junbaek           #+#    #+#             */
/*   Updated: 2021/10/18 09:28:50 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab [i] > tab [i + 1])
		{
			temp = tab [i + 1];
			tab [i + 1] = tab [i];
			tab [i] = temp;
			i = -1;
		}
		i++;
	}
}
