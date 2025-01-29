/* searches for the first occurence of a character C in string S.
It returns a pointer to the matched charachter if found, or NULL if the char
is not found. If C is the termiantor, it returns a pointer to it */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((*s) && (*s != c))
		s++;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	const char	str[] = "Hello, 42!";
	char		c;
	char		*result;

	c = 'o';
	printf("Original string: \"%s\"\n", str);
	printf("Character to find: '%c'\n", c);
	result = ft_strchr(str, c);
	if (result)
		printf("Character found at position: %ld\n", result - str);
	else
		printf("Character not found in the string.\n");
	return (0);
}*/
