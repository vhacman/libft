/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:42:06 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/27 11:59:49 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*The function prints a string (`char *s`) to the standard output,
 character by character.It accepts a pointer to a null-terminated string (`\0`). 
Before proceeding, it ensures the pointer is not `NULL`
to avoid undefined behavior; if it is, the function does nothing.
An integer variable `i` is initialized to 0 to serve as an index for accessing
the characters of the string. A `while` loop is used to iterate through 
the string, and it stops when the null terminator is encountered.*/
#include "libft.h"

void	ft_putstr(char *s)
{
	int	i;

	if (s != NULL)
	{
		i = 0;
		while (s[i])
		{
			ft_putchar(s[i]);
			i++;
		}
	}
}
