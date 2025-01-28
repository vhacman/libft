/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:50:56 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/27 10:51:26 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* The ft_strlcat function appends the src string to the dest string while
ensuring the total size does not exceed destsize, including the null-terminator
It calculates the initial length of dest, checks if there’s enough space to
concatenate, and then appends as much of src as possible without exceeding 
the buffer limit.*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 0;
	src_len = ft_strlen(src);
	i = 0;
	while (dest_len < destsize && dest[dest_len])
		dest_len++;
	if (destsize <= dest_len)
		return (destsize + src_len);
	while (src[i] && (dest_len + i) < (destsize - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if ((dest_len + i) < destsize)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char	dest1[20] = "Hello, ";
	const char	*src;
       
	src	= "42 School";
	size_t	size;
	size	= 15;
	size_t	result;
       
	result = ft_strlcat(dest1, src, size);
	printf("Destinazione: \"%s\"\n", dest1);
	printf("Lunghezza finale: %zu\n", result);
	return (0);
}*/
