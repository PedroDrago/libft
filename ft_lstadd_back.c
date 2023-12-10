/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:28:33 by pdrago            #+#    #+#             */
/*   Updated: 2023/12/10 12:42:56 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list *lst, t_node *new)
{
	t_node	*current;

	if (!(lst->head))
		lst->head = new;
	else
	{
		current = lst->head;
		while (current->next)
			current = current->next;
		current->next = new;
	}
	lst->size++;
}
