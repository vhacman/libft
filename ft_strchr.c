/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:15:02 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/30 20:15:17 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((*s) && (*s != c))
		s++;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	const char	str[] = "Hello, 42!";
	char		c;
	char		*result;

	c = 'o';
	printf("Original string: \"%s\"\n", str);
	printf("Character to find: '%c'\n", c);
	result = ft_strchr(str, c);
	if (result)
		printf("Character found at position: %ld\n", result - str);
	else
		printf("Character not found in the string.\n");
	return (0);
}*/
