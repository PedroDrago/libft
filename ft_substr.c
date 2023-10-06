/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 00:02:21 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/06 00:46:19 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
*/

/*DUVIDA: a função não especifica se a substring deve ser NULL terminated*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		count;
	char				*substr;

	count = 0;
	substr = (char *) malloc (sizeof(char) * len);
	if (!substr)
		return (NULL);
	while (start < len)
		substr[count++] = s[start++];
	substr[count] = '\0';
	return (substr);
}
