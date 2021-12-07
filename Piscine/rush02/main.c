/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:58:24 by junbaek           #+#    #+#             */
/*   Updated: 2021/10/24 16:58:31 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void	ERROR(void)
{
	char	*str;

	str = "ERROR!";
	write(1, str, 6);
}

int	main(int argc, char *argv[])
{
	char		*str[2];
	long long	text_size;

	if (argc != 2 && argc != 3)
	{
		ERROR();
		return (0);
	}
	text_size = size_file();
	if (argc == 2)
	{
		str[0] = argv[1];
		read_dict(str[0], text_size);
	}
	else if (argc == 3)
	{
		str[0] = argv[1];
		str[1] = argv[2];
		input_dict(str[0], str[1], text_size);
	}
}
