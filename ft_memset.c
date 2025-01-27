//Header

/*
The function is used to fill a memory area with a specified value, byte by byte.  
The function takes the following inputs:  
- A pointer (`b`) to the memory area to be modified.  
- A value (`c`), converted to `unsigned char`, to be copied into each byte.  
- A count (`count`), representing the number of bytes to fill.  
Operations performed:  
1. Converts `b` to a `char*` pointer to access individual bytes.  
2. Iterates for `count` bytes, setting each byte to the value `c`.  
3. Returns the original pointer `b`.  
Special cases:  
- If `count == 0`, it does not modify anything but still returns `b`.  
- If `b == NULL`, the behavior is undefined.  
*/
#include "libft.h"

void    *ft_memset(void *b, int c, size_t count)
{
	size_t	cur;
	char	*data;
	
	cur = 0;
	data = (char *)b;
	while( cur < count)
	{
		data[cur] = c;
		cur++;
	}
	return (b);
}