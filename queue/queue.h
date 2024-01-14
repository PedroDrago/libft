/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 09:37:02 by pdrago            #+#    #+#             */
/*   Updated: 2024/01/14 10:57:39 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

typedef struct s_queuenode
{
	void			*content;
	struct s_queuenode	*next;
	struct s_queuenode	*previous;
}	t_queuenode;
typedef struct s_queue
{
	t_queuenode	*head;
	t_queuenode	*tail;
	size_t	size;
}	t_queue;

t_queuenode	*queue_newnode(void *content);
t_queue *queue_newqueue();
t_queue	*queue_map(t_queue *queue, void *(*func)(void *), int free_content);
void	queue_delnode(t_queuenode *node, int free_content);
void	enqueue(t_queue *queue, t_queuenode *node);
t_queuenode	*dequeue(t_queue *queue);
void	queue_clear(t_queue *queue, int free_content);
void	queue_iter(t_queue *queue, void (*func)(void *));
