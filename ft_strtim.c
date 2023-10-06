/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 00:49:29 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/06 01:49:00 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/
static int	is_in_set(char c, char const*set)
{
	int	count;

	count = 0;
	while (set[count])
	{
		if (c == set[count])
			return (1);
		count++;
	}
	return (0);
}

static int	get_bytes(char const *s1, char const *set)
{
	int	bytes;
	int	count;
	int	count2;

	bytes = 0;
	count = 0;
	while (is_in_set(s1[count], set))
		count++;
	count2 = ft_strlen(s1);
	while (is_in_set(s1[count2 - 1], set))
		count2--;
	while (count <= count2)
	{
		bytes++;
		count++;
	}
	return (bytes);
}

static int	get_end(char const *s1, char const *set)
{
	int	count;

	count = ft_strlen(s1) - 1;
	while (is_in_set(s1[count], set))
		count--;
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		count;
	int		count2;
	int		end;

	count = 0;
	count2 = 0;
	end = get_end(s1, set);
	trimmed = (char *) malloc (get_bytes(s1, set));
	while (is_in_set(s1[count], set))
		count++;
	while (count <= end && s1[count])
	{
		trimmed[count2] = s1[count];
		count++;
		count2++;
	}
	return (trimmed);
}
