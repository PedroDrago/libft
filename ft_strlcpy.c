/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:08:47 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/07 03:51:04 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Copies up to size - 1 characters from the NUL-terminated source 
string to a destine string, NUL-terminating the result.
*/

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	int	count;

	count = 0;
	while (src[count] && count < size)
	{
		dst[count] = src[count];
		count++;
	}

	if (size > 0)
		dst[count] = '\0';
	return (count);
}
