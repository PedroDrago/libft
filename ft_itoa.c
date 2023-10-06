/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 02:34:14 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/06 02:47:15 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
*/
void	fill_array(int n, char *number)
{
	if (n < 0)
	{
		number++;
		n = -n;
	}
	if (n > 9)
	{
		fill_array(n/10, number);
		fill_array(n%10, number);
	}
	else
	{
		*number = n + '0';
		number++;
	}
}
char	*ft_itoa(int n)
{
	char	*number;
	int	ncpy;
	int	houses;

	ncpy = n;
	houses = 1;
	while (ncpy > 0)
	{
		ncpy = ncpy / 10;
		houses++;
	}
	number = (char *) malloc (sizeof(char) * houses);
	if (n < 0)
		number[0] = '-';
	fill_array(n, number);

	return (number);
}
