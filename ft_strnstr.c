/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:17:00 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/12 10:23:35 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strnstr() function locates the first occurrence of the 
null-terminated string little in the string big, where not 
more than len characters are searched.  Characters that appear 
after a ‘\0’ character are not searched.
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		count;
	char	*little_start;
	size_t	little_len;

	count = 0;
	little_len = ft_strlen(little);
	if (!(*little))
		return ((char *) big);
	while (*big && len--)
	{
		if (*big == little[count])
		{
			if (count++ == 0)
				little_start = (char *) big;
			if (count == little_len)
				return (little_start);
		}
		else
		{
			count = 0;
			little_start = 0;
		}
		big++;
	}
	return (NULL);
}
