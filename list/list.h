/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 09:41:15 by pdrago            #+#    #+#             */
/*   Updated: 2024/01/14 10:46:56 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

typedef struct s_listnode
{
	void			*content;
	struct s_listnode	*next;
	struct s_listnode	*previous;
}	t_listnode;
typedef struct s_list
{
	t_listnode	*head;
	t_listnode	*tail;
	size_t	size;
}	t_list; //addback | addfront | clear | delone | addmiddle | map | iter | newnode

t_list	*list_newlist();
t_listnode	*list_removenode(t_list *list, t_listnode *node);

/*
Adds the node `new` at the beginning of the list
*/
void	list_addfront(t_list *lst, t_listnode *new);
/*
Adds the node `new` at the end of the list.
*/
void	list_addback(t_list *lst, t_listnode *new);
/*
Takes as a parameter a node and frees the memory of
the node’s content using the function `del` given
as a parameter and free the node. The memory of
`next` must not be freed.
*/
void	list_delnode(t_listnode *node, int free_content);
/*
Deletes and frees the given node and every
successor of that node, using the function `del`
and free(3).
Finally, the pointer to the list must be set to
`NULL`.
*/
void	list_clear(t_list *lst, int free_content);
/*
Iterates the list `lst` and applies the function
`f` on the content of each node.
*/
void	list_iter(t_list *lst, void (*f)(void *));
/*
Allocates (with malloc(3)) and returns a new node.
The member variable `content` is initialized with
the value of the parameter `content`. The variable
`next` is initialized to NULL.
*/
t_listnode	*list_newnode(void *content);
/*
Returns the last node of the list.
*/
/*
Iterates the list `lst` and applies the function
`f` on the content of each node. Creates a new
list resulting of the successive applications of
the function `f`. The `del` function is used to
delete the content of a node if needed.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), int free_content);
