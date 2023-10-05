/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:14:33 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/05 18:07:33 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
