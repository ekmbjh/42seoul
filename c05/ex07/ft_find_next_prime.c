/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@studen.42seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:56:24 by junbaek           #+#    #+#             */
/*   Updated: 2021/10/23 20:36:32 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int n)
{
	int	i;

	i = 2;
	while (i <= (n / i))
	{
		if (n % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

#include <stdio.h>

int main(void)
{
	int a;

	a = ft_find_next_prime(2147483647);
	printf("%d", a);
	return (0);
}
