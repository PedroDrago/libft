/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:31:01 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/05 18:07:13 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			count;
	char			*ptr_dest;
	const char		*ptr_src;

	ptr_dest = (char *) dest;
	ptr_src = (const char *) src;
	count = -1;
	while (++count < n)
		ptr_dest[count] = ptr_src[count];
	return (dest);
}
