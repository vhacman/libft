/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:15:23 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/30 20:15:23 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*This function duplicates a string, verifying the source, allocating memory,
copying the content, and returning a pointer to the new string.
If memory allocation fails or the source is null, it returns NULL.
Called “ft_strdup,” it uses ft_strlen and ft_strcpy.*/
char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(void)
{
    // Caso 1: Stringa normale
    char	str1[] = "42 Network";
    char	*copy1 = ft_strdup(str1);
    printf("Originale: %s | Copia: %s\n", str1, copy1);
    free(copy1);

    // Caso 2: Stringa vuota
    char	str2[] = "";
    char	*copy2 = ft_strdup(str2);
    printf("Stringa vuota: '%s'\n", copy2);
    free(copy2);

    // Caso 3: NULL (deve restituire NULL)
    char	*copy3 = ft_strdup(NULL);
    printf("NULL: %p\n", (void *)copy3);

    return (0);
}*/
