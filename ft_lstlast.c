/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:26:27 by pdrago            #+#    #+#             */
/*   Updated: 2023/12/10 12:14:05 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_lstlast(t_list *lst)
{
	t_node	*current;

	current = lst->head;
	while (current)
	{
		if (!(current->next))
			break ;
		current = current->next;
	}
	return (current);
}
