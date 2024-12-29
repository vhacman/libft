/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:06:49 by vhacman           #+#    #+#             */
/*   Updated: 2024/11/25 16:19:42 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write_num(char nbr)
{
	write(1, &nbr, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_write_num('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_write_num(nb % 10 + '0');
}
/*
int	main(void)
{
	ft_putnbr(234);
	ft_write_num('\n');
	ft_putnbr(-2147483648);
	ft_write_num('\n');
	return (0);
}*/
