/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:26:59 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/28 17:34:42 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
int	main(void)
{
	ft_putchar_fd(ft_toupper('a'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper('u'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper('A'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper('5'), 1);
	ft_putchar_fd('\n', 1);
}*/
