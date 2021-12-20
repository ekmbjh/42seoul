/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:16:51 by junbaek           #+#    #+#             */
/*   Updated: 2021/12/20 15:16:53 by junbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_f_content;

	if (lst == NULL)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		new_f_content = ft_lstnew((*f)(lst->content));
		if (new_f_content == NULL)
			ft_lstclear(&new_f_content, (*del));
		else
			ft_lstadd_back(&new_lst, new_f_content);
		lst = lst->next;
	}
	return (new_lst);
}
