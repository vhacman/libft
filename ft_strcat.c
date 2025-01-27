// HEADER
/*
The `ft_strcat` function concatenates two strings by copying the characters of `s2` 
to the end of `s1`. It requires `s1` to have enough allocated space to hold both 
strings and `s2` to be a valid null-terminated string (`\0`). 
The concatenation is performed character by character, and a new null terminator is added at the end.
*/
#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;

	i = ft_strlen(s1);
	while (*s2 != '\0')
	{
		s1[i] = *s2;
		i++;
		s2++;
	}
	s1[i] = '\0';
	return (s1);
}