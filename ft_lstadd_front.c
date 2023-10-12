/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:20:27 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/12 14:22:41 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Adds the node ’new’ at the beginning of the list
*/

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
		new->next = *lst;
}
