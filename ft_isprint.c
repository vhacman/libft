/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:01:59 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/28 16:24:42 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	test1;
	char	test2;
	char	test3;
	char	test4;

	test1 = 'A';
	test2 = '\n';
	test3 = ' ';
	test4 = '~';
	printf("Is '%c' printable? %d\n", test1, ft_isprint(test1));
	printf("Is '\\n' printable? %d\n", ft_isprint(test2));
	printf("Is ' ' printable? %d\n", ft_isprint(test3));
	printf("Is '%c' printable? %d\n", test4, ft_isprint(test4));
	return (0);
}*/
