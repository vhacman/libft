//HEADER
/*
The function compares two strings, `s1` and `s2`, up to a maximum of `n` characters,
returning a value that indicates their relationship. It compares the characters of `s1` and `s2` one by one,
stopping when a difference is found, the end of a string is reached, or `n` characters have been compared.  
- Returns `0` if the first `n` characters of both strings are identical.  
- Returns a positive value if the first differing character in `s1` has a greater ASCII value than in `s2`.  
- Returns a negative value if the first differing character in `s1` has a smaller ASCII value than in `s2`.  
*/
#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}