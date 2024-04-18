/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_sep.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 03:17:57 by pdrago            #+#    #+#             */
/*   Updated: 2024/04/18 18:12:01 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	free_vars(char *s1, char *s2, int should_free)
{
	if (should_free == FREE_ONE)
		free(s1);
	else if (should_free == FREE_TWO)
		free(s2);
	else if (should_free == FREE_BOTH)
	{
		free(s1);
		free(s2);
	}
}

static int	concatenate_s1(char const *s1, char *joined)
{
	int	count;

	count = 0;
	if (!s1)
		return (0);
	while (s1[count])
	{
		joined[count] = s1[count];
		count++;
	}
	return (count);
}

static void	concatenate_s2(char const *s2, int i, char *joined)
{
	int	count2;

	if (!s2)
		return ;
	count2 = 0;
	while (s2[count2])
	{
		joined[i] = s2[count2];
		i++;
		count2++;
	}
	joined[i] = '\0';
}

char	*ft_strjoin_sep(char *s1, char *s2, char sep, int should_free)
{
	char	*joined;
	int		i;

	if (!s1 && !s2)
		return (NULL);
	joined = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	if (!joined)
		return (NULL);
	i = concatenate_s1(s1, joined);
	joined[i++] = sep;
	concatenate_s2(s2, i, joined);
	return (free_vars((char *)s1, (char *)s2, should_free), joined);
}
