/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:46:59 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/28 17:54:42 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
    ft_putchar_fd('A', 1);
    ft_putchar_fd('\n', 1); // Forza nuova riga

    ft_putchar_fd('E', 2);
    ft_putchar_fd('\n', 2); // Forza nuova riga per stderr
    return 0;
}*/
