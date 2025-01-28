/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:36:59 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/27 12:24:42 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Searches for the first occurrence of a specific byte (c) in a memory block
(s) with a maximum length (n). Returns a pointer to the first matching byte
or NULL if the byte is not found. The search is performed byte by byte
and uses a cast to unsigned char to ensure correctness.*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned int		i;

	if (s == NULL)
		return (NULL);
	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	str[] = "Hello, 42!";
	char		c;
	size_t		n;
	char		*result;

//	str = "Hello, 42!";
	c = 'o';
	n = 10;
	printf("Original String: \"%s\"n", str);
	printf("Char to find: '%c', Number of bytes: %zu\n", c, n);
	result = (char *)ft_memchr(str, c, n);
	if (result)
		printf("Char found in position: %ld\n", result - str);
	else
		printf("Char not found in the first: %zu byte.\n", n);
	return (0);
}*/
