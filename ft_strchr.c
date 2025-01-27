/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:41:29 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/27 14:56:20 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* searches for the first occurence of a character C in string S.
It returns a pointer to the matched charachter if found, or NULL if the char
is not found. If C is the termiantor, it returns a pointer to it */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((s != '/0') && (*s != c))
		s++;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
