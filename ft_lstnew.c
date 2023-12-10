/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 12:24:13 by pdrago            #+#    #+#             */
/*   Updated: 2023/12/10 12:36:32 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void)
{
	t_list	*list;

	list = (t_list *) malloc (sizeof(t_list *));
	if (!list)
		return (NULL);
	list->head = NULL;
	return (list);
}
