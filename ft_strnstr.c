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

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*haystack = "Ciao, questo è un test per ft_strnstr!";
	const char	*needle1 = "questo";
	const char	*needle2 = "ft_strnstr";
	const char	*needle3 = "non_esiste";
	const char	*needle4 = "";

	size_t	len;
       
	len = 30;

	printf("Test 1: Find \"%s\" in \"%s\" (len = %zu)\n",
			needle1, haystack, len);
	char	*result1 = ft_strnstr(haystack, needle1, len);
	if (result1)
		printf("Result: found! \"%s\"\n", result1);
	else
		printf("Result: Not found!\n");

	printf("\nTest 2: Find \"%s\" in \"%s\" (len = %zu)\n",
			needle2, haystack, len);
	char	*result2 = ft_strnstr(haystack, needle2, len);
	if (result2)
		printf("Result: Found! \"%s\"\n", result2);
	else
		printf("Result: Not found!\n");

	printf("\nTest 3: Find \"%s\" in \"%s\" (len = %zu)\n",
			needle3, haystack, len);
	char	*result3 = ft_strnstr(haystack, needle3, len);
	if (result3)
		printf("Result: Found! \"%s\"\n", result3);
	else
		printf("Result: Found!\n");

	printf("\nTest 4: Find an empty string in: \"%s\" (len = %zu)\n",
			haystack, len);
	char	*result4 = ft_strnstr(haystack, needle4, len);
	if (result4)
		printf("Result: Found! \"%s\"\n", result4);
	else
		printf("Result: Not found!\n");

	return 0;
}*/
