/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:45:13 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/27 10:45:16 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
This function duplicates a string, verifying the source, allocating memory, 
copying the content, and returning a pointer to the new string. 
If memory allocation fails or the source is null, it returns NULL. 
Called “ft_strdup,” it uses ft_strlen and ft_strcpy.
*/
#include "libft.h"
#include <unistd.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1) + 1;
	s2 = (char *)malloc(sizeof(char) * len);
	if (!s2)
		return (NULL);
	ft_strcpy(s2, s1);
	return (s2);
}
/*
int	main(void)
{
	char	*original;
	char	*duplicate;

	original = "Hello, 42!";
	duplicate = ft_strdup(original);
	if (duplicate)
	{
		printf("Original String: %s\n", original);
		printf("Duplicate String: %s\n", duplicate);
		free(duplicate);
	}
	else
		printf("Error, malloc has failed.\n");
	return(0);
}*/
