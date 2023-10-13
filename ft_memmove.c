/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 08:39:29 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/13 11:22:36 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

#define CAPACITY 64000 
/*
Copies n bytes from a source memory area to a destine 
memory area. The areas may overlap.
*/

void	*memmove(void *dest, const void *src, size_t n)
{
	const char		*charsrc;
	int				count;
	char			buffer[CAPACITY];
	char			*chardest;
	size_t			ncpy;

	chardest = (char *) dest;
	charsrc = (const char *) src;
	count = 0;
	ncpy = n;
	while (charsrc[count] && ncpy)
	{
		buffer[count] = charsrc[count];
		count++;
		ncpy--;
	}
	count = 0;
	ncpy = n;
	while (buffer[count] && ncpy)
	{
		chardest[count] = buffer[count];
		count++;
		ncpy--;
	}
	return (chardest);
}
