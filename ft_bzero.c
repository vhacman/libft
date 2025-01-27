//header
/*
The function sets the first `n` bytes of the memory area pointed to by `s` to `'\0'`.  
It does not return anything.  
It is used to clear a memory area by setting its bytes to `0`.
*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n)
	{
		*p++ = 0;
		--n;
	}
}