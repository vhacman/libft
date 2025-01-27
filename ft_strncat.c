//HEADER
/*
The function concatenates at most `nb` characters from the `src` string to the end of the `dest` string,
ensuring that `dest` is always null-terminated (`\0`). It locates the end of `dest`, then copies up to `nb`
characters from `src` to `dest`.
The function guarantees that `dest` ends with a null character and returns a pointer to `dest`.
*/
#include "libft.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	
	while(dest[i] != '\0')
	{
		i++;
	}
	while(src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}