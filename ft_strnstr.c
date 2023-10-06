/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:17:00 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/06 10:17:51 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strnstr() function locates the first occurrence of the 
null-terminated string little in the string big, where not 
more than len characters are searched.  Characters that appear 
after a ‘\0’ character are not searched.
*/

char	*strnstr(const char *big, const char *little, size_t len);
