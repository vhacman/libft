#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		if (n == -2147483648)
		{
			ft_putchar('2');
			n = -147483648;
		}
		n *= -1;
	}
	if (n / 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}
/*
int	main(void)
{
	// Test di numeri positivi
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(12345);
	ft_putchar('\n');

	// Test di numeri negativi
	ft_putnbr(-7);
	ft_putchar('\n');
	ft_putnbr(-98765);
	ft_putchar('\n');

	// Test del caso limite (minimo valore di un int)
	ft_putnbr(-2147483648);
	ft_putchar('\n');

	// Test del massimo valore di un int
	ft_putnbr(2147483647);
	ft_putchar('\n');

	return (0);
}*/
