/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 23:29:41 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/30 23:29:41 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function ft_calloc allocates memory for number elements, each of size
bytes, and initializes the memory to zero.If the memory allocation succeeds, 
it uses ft_bzero to set all the bytes of the allocated memory to zero.
If allocation fails, it returns NULL.
It returns a pointer to the newly allocated memory,
which is initialized to zero.*/

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*dest;

	dest = (void *)malloc(number * size);
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, number * size);
	return (dest);
}
