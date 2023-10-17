/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 08:39:29 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/17 14:51:05 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Copies n bytes from a source memory area to a destine 
memory area. The areas may overlap.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst_cpy;
	const char	*src_cpy;

	dst_cpy = (char *) dest;
	src_cpy = (const char *) src;
	if (!dest || !src)
		return (NULL);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (--n)
		dst_cpy[n] = src_cpy[n];
	return (dest);
}
