/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:37:53 by junbaek           #+#    #+#             */
/*   Updated: 2021/10/18 09:14:10 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	tmp;

	index = 0;
	while (index < size / 2)
	{
		tmp = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = tmp;
		index++;
	}
}
