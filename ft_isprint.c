/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 20:56:50 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/05 23:09:24 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
checks for any printable character including space.
*/
int	ft_isprint(int c)
{
	if ((c >= 0 && c <= 31) || (c == 127))
		return (0);
	return (1);
}
