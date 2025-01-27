//HEADER

/*
The function prints a string (`char *s`) to the standard output, character by character. 
It accepts a pointer to a null-terminated string (`\0`). 
Before proceeding, it ensures the pointer is not `NULL` to avoid undefined behavior; if it is, 
the function does nothing. An integer variable `i` is initialized to 0 to serve as an index 
for accessing the characters of the string. 
A `while` loop is used to iterate through the string, and it stops when the null terminator is encountered.
*/
#include "libft.h"

void	ft_putstr(char *s)
{
	int i;

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