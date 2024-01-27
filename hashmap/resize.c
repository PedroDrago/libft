/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:36:52 by pdrago            #+#    #+#             */
/*   Updated: 2024/01/26 21:21:23 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

void	*resize(t_hashmap *map)
{
	unsigned int	count;
	t_hashmap		*newmap;

	newmap = create_hashmap(map->current_size + 20);
	if (!newmap)
		return (NULL);
	count = 0;
	while (count < map->current_size)
	{
		newmap->array[count] = map->array[count];
		count++;
	}
	destroy_map(map);
	while (count < newmap->max_size)
	{
		newmap->array[count] = NULL;
		count++;
	}
	map = newmap;
	return (map);
}
