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
/*
int	main(void)
{
	char	str1[] = "Hello, 42!";
	char	str2[] = ""; // Stringa vuota
	char	*str3 = NULL; // Puntatore nullo
	write(1, "Test 1: ", 8);
	ft_putstr(str1);
	write(1, "\n", 1);
	write(1, "Test 2: ", 8);
	ft_putstr(str2);
	write(1, "\n", 1);
	write(1, "Test 3: ", 8);
	ft_putstr(str3);
	write(1, "\n", 1);
	return (0);
}*/
