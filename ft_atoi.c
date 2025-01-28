/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:13:39 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/27 12:31:54 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*The function converts a string representing a number into an integer (int),
handling any initial spaces, signs, and numeric digits.The function ignores
whitespace and control characters (i.e., from ASCII 9 to 13).It handles the
`+` or `-` signs: if it encounters a minus sign, it inverts the `sign` variable
from 1 to -1 or vice versa. It ignores the `+` sign without making any changes.
It converts only consecutive digits and stops at the first non-numeric char
It returns the converted number as an integer.*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
