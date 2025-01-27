/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:37:19 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/27 11:30:20 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Used to copy a block of memory from one location to another. It is designed
to safely copy a sequence of bytes from `src` to `dest`, even when the memory
areas overlap. When the areas overlap and `dest > src`,
the function copies the data starting  from the end of the src area to the
end of the destination area.*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (d > s)
		while (n-- > 0)
			d[n] = s[n];
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
