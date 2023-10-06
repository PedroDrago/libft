/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 21:57:14 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/05 23:14:44 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The ft_strchr() function returns a pointer to the 
first occurrence of the character c in the string s.
*/

char	*ft_strchr(const char *s, int c)
{
	char	*ptrc;
	int		count;

	count = 0;
	ptrc = 0;
	while (s[count])
	{
		if (s[count] == c)
		{
			ptrc = (char *) &s[count];
			return (ptrc);
		}
		count++;
	}
	if (s[count] == c)
		ptrc = (char *) &s[count];
	return (ptrc);
}
