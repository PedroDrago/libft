/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_newqueue.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:43:08 by pdrago            #+#    #+#             */
/*   Updated: 2024/01/14 10:53:28 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

t_queue *queue_newqueue()
{
	t_queue	*queue;

	queue = (t_queue *) malloc (sizeof(t_queue));
	if (!queue)
		return (NULL);
	queue->head = NULL;
	queue->tail = NULL;
	queue->size = 0;
	return (queue);
}
