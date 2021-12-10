/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:35:04 by junbaek           #+#    #+#             */
/*   Updated: 2021/12/09 15:35:06 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t num, size_t size)
{
	void	*mem;

	if (num == 0 || size == 0)
		return (NULL);
	mem = malloc(num * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, (num * size));
	return (mem);
}
