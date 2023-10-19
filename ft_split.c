/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 01:58:34 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/19 01:09:58 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer
*/
//
// static int	split_count(char const *s, char c)
// {
// 	int	count;
// 	int	split_count;
//
// 	count = 0;
// 	split_count = 0;
// 	while (s[count])
// 	{
// 		if (s[count] == c && (s[count + 1] != c || s[count] + 1 != '\0') && s[count - 1] != c)
// 			split_count++;
// 		count++;
// 	}
// 	return (split_count + 1);
// }
//
// static char	*ft_new_str_dup(char const *s, int start, int end)
// {
// 	char	*new_str;
// 	int		count;
//
// 	if (start >= end)
// 		return (NULL);
// 	new_str = (char *) malloc (sizeof(char) * end - start + 1);
// 	if (!new_str)
// 		return (NULL);
// 	count = 0;
// 	while (start < end)
// 	{
// 		new_str[count] = s[start];
// 		count++;
// 		start++;
// 	}
// 	new_str[count] = '\0';
// 	return (new_str);
// }
//
// static char	**split_split(char *s, char c, char **sp)
// {
// 	int	c1;
// 	int	count2;
// 	int	start;
// 	int	end;
//
// 	start = 0;
// 	end = -1;
// 	count2 = 0;
// 	c1 = -1;
// 	while (s[++c1])
// 	{
// 		if (s[c1 - 1] == c && s[c1] != c)
// 			start = c1;
// 		if ((s[c1 + 1] == c && s[c1] != c) || (s[c1 + 1] == '\0'))
// 			end = c1 + 1;
// 		if (start >= 0 && end >= 0)
// 		{
// 			sp[count2] = ft_new_str_dup(s, start, end);
// 			count2++;
// 			start = -1;
// 			end = -1;
// 		}
// 	}
// 	sp[count2] = NULL;
// 	return (sp);
// }
//
// char	**ft_split(char const *s, char c)
// {
// 	char	**splitted;
//
// 	if (s == 0)
// 		return (0);
// 	splitted = (char **) malloc (sizeof(char *) * (split_count(s, c) + 1));
// 	if (!splitted)
// 		return (NULL);
// 	return (split_split(ft_strtrim(s, &c), c, splitted));
// }

static int		ft_wordcount(char const *str, char sep)
{
	int i;
	int count;

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

static char		**ft_malloc(char const *str, char sep)
{
	int		len;
	char	**tab_str;

	len = ft_wordcount(str, sep);
	tab_str = malloc(sizeof(*tab_str) * (len + 1));
	if (tab_str == 0)
	{
		return (0);
	}
	return (tab_str);
}

static int		ft_next_word_count(char const *str, char sep, int i)
{
	int count;

	count = 0;
	while (str[i] == sep && str[i] != '\0')
	{
		i++;
	}
	while (str[i] != '\0' && str[i] != sep)
	{
		count++;
		i++;
	}
	return (count);
}

// static char		**ft_free(char **str_tab, int i)
// {
// 	int j;
//
// 	j = 0;
// 	while (j < i && str_tab[j] != 0)
// 	{
// 		free(str_tab[j]);
// 		j++;
// 	}
// 	free(str_tab);
// 	return (0);
// }

char			**ft_split(char const *str, char charset)
{
	int		s;
	int		i;
	int		j;
	char	**tab_str;

	if (str == 0)
		return (0);
	s = 0;
	i = -1;
	if (!(tab_str = ft_malloc(str, charset)))
		return (0);
	while (++i < ft_wordcount(str, charset))
	{
		j = 0;
		tab_str[i] = malloc(ft_next_word_count(str, charset, s) + 1);
		// if (!(tab_str[i]))
		// 	return (ft_free(tab_str, i));
		while (str[s] != '\0' && str[s] == charset)
			s++;
		while (str[s] != '\0' && str[s] != charset)
			tab_str[i][j++] = str[s++];
		tab_str[i][j] = '\0';
	}
	tab_str[i] = 0;
	return (tab_str);
}

// int main()
// {
// 	char **a = ft_split("asd-asd-asd-", '-');
// 	(void) a;
// 	return EXIT_SUCCESS;
// }
