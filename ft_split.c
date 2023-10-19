/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 01:58:34 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/19 13:20:10 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer
*/

static int	ft_wordcount(char const *str, char sep)
{
	int	i;
	int	count;

	if (str == 0 || str[0] == 0)
		return (0);
	i = 1;
	count = 0;
	if (str[0] != sep)
		count++;
	while (str[i] != '\0')
	{
		if (str[i] != sep && str[i - 1] == sep)
			count++;
		i++;
	}
	return (count);
}

static char	*ft_new_str_dup(char const *s, int start, int end)
{
	char	*new_str;
	int		count;

	if (start >= end)
		return (NULL);
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

static char	**split_split(char *s, char c, char **sp)
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
		if ((s[c1 + 1] == c && s[c1] != c) || (s[c1 + 1] == '\0'))
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

	if (s == 0)
		return (0);
	splitted = (char **) malloc (sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!splitted)
		return (NULL);
	return (split_split(ft_strtrim(s, &c), c, splitted));
}
