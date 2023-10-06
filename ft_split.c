/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 01:58:34 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/06 02:33:01 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	int		len;
	int		count;
	char	*str;

	len = end - start;
	str = (char *) malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	count = 0;
	while (start < end)
		str[count++] = s[start++];
	str[count] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		start;
	int		end;
	int		count;
	int		count2;
	char	**splited;

	splited = (char **) malloc (sizeof(char *) * (split_count(s, c) + 1));
	if (!splited)
		return (NULL);
	count2 = 0;
	start = 0;
	while (1)
	{
		if (s[count] == c || s[count] == '\0')
		{
			end = count;
			splited[count2++] = ft_new_str_dup(s, start, end);
			start = count + 1;
		}
		if (s[count++] == '\0')
			break ;
	}
	count2++;
	splited[count2] = NULL;
	return (splited);
}
/*
#include <stdio.h>
int main(void)
{
	char	str[] = "pedro-pinheiro-drago";
	char	**sp = ft_split(str, '-');
	int	count;

	count = 0;
	while (sp[count])
	{
		printf("%s\n", sp[count]);
		free(sp[count]);
		count++;
	}
	free (sp);

	return 0;
}
*/
