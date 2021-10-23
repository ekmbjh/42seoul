/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@studen.42seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:55:36 by junbaek           #+#    #+#             */
/*   Updated: 2021/10/23 15:55:42 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;
	int	i;

	if (nb < 0)
		return (0);
	i = nb;
	fac = 1;
	while (i > 0)
	{
		fac = fac * i;
		i--;
	}
	return (fac);
}
