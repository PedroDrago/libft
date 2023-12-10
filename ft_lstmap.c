/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:46:24 by pdrago            #+#    #+#             */
/*   Updated: 2023/12/10 12:34:10 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_all(t_list *new, void (*del)(void *))
{
	t_node	*node;
	while (new)
	{
		node = new->head->next;
		del(new->head->content);
		free(new);
		new->head = node;
	}
	free(new);
}


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_node	*new_node;
	t_list	*new_list;

	if (!f || !del)
		return (NULL);
	new_list = ft_lstnew();
	while (lst)
	{
		new_node = ft_newnode(f(lst->head->content));
		if (!new_node)
		{
			ft_free_all(new_list, del);
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(new_list, new_node);
		lst->head = lst->head->next;
	}
	return (new_list);
}
