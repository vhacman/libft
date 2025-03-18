/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 09:00:59 by vhacman           #+#    #+#             */
/*   Updated: 2025/02/28 12:16:29 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

void	ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
}

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

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
