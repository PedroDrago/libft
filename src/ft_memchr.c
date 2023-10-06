/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:24:56 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/05 21:28:50 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		count;
	char	*ptr;

	ptr = (char *) s;
	count = -1;
	while (*ptr && (++count < n))
	{
		if (*ptr == c)
			break;
		ptr++;
	}
	return (ptr);
}
