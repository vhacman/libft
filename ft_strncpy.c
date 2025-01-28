/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:39:49 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/27 10:48:37 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
The `ft_strncpy` function copies up to `n` characters
from a source string (`src`) to a destination string (`dest`):  
- If `src` is shorter than `n`, the remaining space in `dest` is
filled with null terminators (`\0`).  
- If `src` is at least `n` characters long, the function does 
 **not** guarantee a null terminator in `dest`.  
*/
#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
