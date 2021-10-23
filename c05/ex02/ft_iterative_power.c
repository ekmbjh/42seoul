/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@studen.42seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:55:55 by junbaek           #+#    #+#             */
/*   Updated: 2021/10/23 15:55:57 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	cnt;

	if (power < 0)
		return (0);
	cnt = 0;
	result = 1;
	while (cnt < power)
	{
		result = result * nb;
		cnt++;
	}
	return (result);
}
