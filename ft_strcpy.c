/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:42:30 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/27 10:50:13 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
The `strcpy` function copies a source string into a destination,
including the null terminator (`\0`).
It requires the destination to have sufficient space.
This function is useful when working with preallocated
buffers and the sizes involved are known.
*/
#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
