
#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
int	main(void)
{
	ft_putchar_fd(ft_tolower('A'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_tolower('U'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_tolower('A'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_tolower('5'), 1);
	ft_putchar_fd('\n', 1);
}*/
