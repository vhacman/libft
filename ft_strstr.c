/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:40:17 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/27 12:33:41 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*The `ft_strstr` function performs a substring search within a string. 
It returns a pointer to the first occurrence of the substring `to_find` within
the main string `str`, or `NULL` if the substring is not found. The function
correctly handles the case where the substring is empty, returning the main
string directly. If the substring is found, it returns a pointer to the
starting position of the match. If the substring is not found, it returns `NULL`
*/

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (!*to_find)
		return (str);
	while (*str)
	{
		i = 0;
		while (to_find[i] && str[i] && str[i] == to_find[i])
		{
			i++;
		}
		if (!to_find[i])
			return (str);
		str++;
	}
	return (0);
}
