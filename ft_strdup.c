/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:38:29 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/05 22:17:04 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ret;
	int		count;

	ret = (char *) malloc (sizeof(char) * ft_strlen(s));
	count = 0;
	while (s[count])
	{
		ret[count] = s[count];
		count++;
	}
	return (ret);
}
