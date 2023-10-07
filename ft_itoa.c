/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 02:34:14 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/07 02:13:14 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
*/

static int	count_digits(int n)
{
	int	digits;

	digits = 0;
	while (n != 0)
	{
		n /= 10;
		++digits;
	}
	return (digits);
}

char	*allocate_string(int *n, int *digits)
{
	char	*str;

	if ((*n) < 0)
	{
		str = (char *) malloc (sizeof(char) * ((*digits) + 2));
		if (!str)
			return (NULL);
		str[0] = '-';
		*n = -(*n);
		(*digits)++;
	}
	else
	{
		str = (char *) malloc (sizeof(char) * ((*digits) + 1));
		if (!str)
			return (NULL);
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;

	if (n == 0)
	{
		str = (char *) malloc (sizeof(char) * 2);
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = 0;
		return (str);
	}
	digits = count_digits(n);
	str = allocate_string(&n, &digits);
	while (n != 0)
	{
		str[digits - 1] = (n % 10) + '0';
		digits--;
		n = n / 10;
	}
	str[digits - 2] = '\0';
	return (str);
}
