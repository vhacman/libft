/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:39:12 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/27 10:52:37 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
The ft_strcmp function compares two strings character by character.
It returns the difference between the ASCII values 
of the first differing characters.
The function is robust and efficient but requires both strings 
to be properly null-terminated (\0) to avoid undefined behavior.
*/
#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
