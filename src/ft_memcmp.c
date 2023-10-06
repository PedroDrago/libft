/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:20:17 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/05 21:23:37 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	int	count;

	ptr1 = (unsigned char *) s1;
	ptr2 = (unsigned char *) s2;
	count = 0;
	if (n == 0)
		return (0);
	while (ptr1[count] && ptr2[count])
	{
		if (ptr1[count] != ptr2[count])
			return (ptr1[count] - ptr2[count]);
		count++;
	}
	return (ptr1[count] - ptr2[count]);
}

