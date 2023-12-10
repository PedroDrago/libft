/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:36:42 by pdrago            #+#    #+#             */
/*   Updated: 2023/12/10 12:12:17 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list *lst, void (*del)(void*))
{
	t_node	*current;
	t_node *tmp;

	current = lst->head;
	while (current)
	{
		tmp = current->next;
		del(current->content);
		free(current);
		current = tmp;
	}
	lst = NULL;
}
