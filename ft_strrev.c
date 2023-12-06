/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:45:14 by pdrago            #+#    #+#             */
/*   Updated: 2023/12/06 09:49:50 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(const char *str)
{
	char	*rev;
	int	len;
	int	count;

	len = ft_strlen(str);
	count = -1;
	rev = (char *) malloc (sizeof(char) * len + 1);
	while (++count < len)
		rev[count] = str[len - count - 1];
	rev[count] = '\0';
	return (rev);
}
