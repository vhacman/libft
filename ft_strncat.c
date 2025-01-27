/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:40:49 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/27 11:41:42 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function concatenates at most `nb` characters from the `src` string
to the end of the `dest` string, ensuring that `dest` is always
null-terminated (`\0`). It locates the end of `dest`, then copies up to `nb`
characters from `src` to `dest`.The function guarantees that `dest` ends
with a null character and returns a pointer to `dest`.*/
#include "libft.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
