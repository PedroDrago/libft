/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 01:58:34 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/17 21:10:01 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer
*/

static int	split_count(char const *s, char c)
{
	int	count;
	int	split_count;

	count = 0;
	split_count = 0;
	while (s[count])
	{
		if (s[count] == c)
			split_count++;
		count++;
	}
	return (split_count + 1);
}

static char	*ft_new_str_dup(char const *s, int start, int end)
{
	char	*new_str;
	int		count;

	new_str = (char *) malloc (sizeof(char) * end - start + 1);
	if (!new_str)
		return (NULL);
	count = 0;
	while (start < end)
	{
		new_str[count] = s[start];
		count++;
		start++;
	}
	new_str[count] = '\0';
	return (new_str);
}

char	**split_split(char *s, char c, char **sp)
{
	int	c1;
	int	count2;
	int	start;
	int	end;

	start = 0;
	end = -1;
	count2 = 0;
	c1 = -1;
	while (s[++c1])
	{
		if (s[c1 - 1] == c && s[c1] != c)
			start = c1;
		else if ((s[c1 + 1] == c && s[c1] != c) || (s[c1 + 1] == '\0'))
			end = c1 + 1;
		if (start >= 0 && end >= 0)
		{
			sp[count2] = ft_new_str_dup(s, start, end);
			count2++;
			start = -1;
			end = -1;
		}
	}
	sp[count2] = NULL;
	return (sp);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;

	splitted = (char **) malloc (sizeof(char *) * (split_count(s, c) + 1));
	if (!splitted)
		return (NULL);
	return (split_split(ft_strtrim(s, &c), c, splitted));
}
