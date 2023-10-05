/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 21:57:14 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/05 18:59:56 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
