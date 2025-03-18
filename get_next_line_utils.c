/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 08:20:00 by vhacman           #+#    #+#             */
/*   Updated: 2025/02/24 21:21:11 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* Returns the length of a string.
** Returns 0 if str is NULL. */
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

/* Searches for the first occurrence of character c in string str.
** Returns a pointer to the matching character or NULL if not found.
** Also returns NULL if str is NULL. */
char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (NULL);
}

/* Creates a duplicate of string s1.
** Returns NULL if s1 is NULL or if memory allocation fails. */
char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	ft_strncpy(s2, s1, len);
	s2[len] = '\0';
	return (s2);
}

/* Concatenates string_1 and string_2 into a new string.
** Returns NULL if both inputs are NULL or if memory allocation fails.
** Properly handles cases where one input is NULL. */
char	*ft_strjoin(char const *string_1, char const *string_2)
{
	size_t	i;
	size_t	j;
	size_t	len_1;
	size_t	len_2;
	char	*new_str;

	if (!string_1 && !string_2)
		return (NULL);
	len_1 = ft_strlen(string_1);
	len_2 = ft_strlen(string_2);
	new_str = (char *)malloc(sizeof(char) * (len_1 + len_2 + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	j = 0;
	while (i < len_1)
		new_str[j++] = string_1[i++];
	i = 0;
	while (i < len_2)
		new_str[j++] = string_2[i++];
	new_str[j] = '\0';
	return (new_str);
}

/* Copies up to n characters from src to dest, ensuring null-termination.
** Returns the original dest pointer for chaining. */
char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
