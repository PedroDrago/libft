/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:26:27 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/17 11:37:32 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Returns the last node of the list.
*/

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current->next)
	{
		current = current->next;
	}
	return (current);
}
