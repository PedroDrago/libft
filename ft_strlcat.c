/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:10:22 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/12 08:33:31 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Appends at most size - ft_strlen(destine - 1) bytes from a
NUL-terminated source string to the end of a destine string.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_count;
	size_t	src_count;

	src_count = 0;
	dst_count = 0;
	if (size == 0)
		return (0);
	while (dst[dst_count])
		dst_count++;
	while (src[src_count] && src_count < size)
		dst[dst_count++] = src[src_count++];
	if (src_count < size)
		dst[dst_count] = '\0';
	return (dst_count);
}
