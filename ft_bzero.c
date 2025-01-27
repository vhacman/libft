/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:43:35 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/27 12:30:19 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*The function sets the first `n` bytes of the memory area pointed
to by `s` to `'\0'`. It does not return anything.  
It is used to clear a memory area by setting its bytes to `0`.*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n)
	{
		*p++ = 0;
		--n;
	}
}
