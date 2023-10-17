/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:14:33 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/16 21:37:41 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The ft_memset() function fills the first n bytes 
of the memory area pointed to by s with the constant byte c.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	count;
	int		*ptr;

	count = 0;
	ptr = (int *) s;
	while (count < n)
	{
		ptr[count] = c;
		count++;
	}
	return (s);
}
