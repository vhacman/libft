//HEADER
/*
The function concatenates the `src` string to the `dest` string with a maximum limit of `size` bytes,
ensuring the result is always null-terminated (`\0`). It calculates how much space is available in `dest`.
If `size` is too small, it returns the theoretical length without concatenating anything.
The function copies characters from `src` to `dest`, respecting the limit of `size - 1`,
and ensures that `dest` is always null-terminated.
It returns the theoretical total length, which indicates how much 
space would have been needed to fully concatenate `src`.
*/
#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
