//Header

/*
It is used to copy a block of memory from one location to another.  
It is designed to safely copy a sequence of bytes from `src` to `dest`, 
even when the memory areas overlap, unlike `memcpy`.  
When the areas overlap and `dest > src`, the function copies the data starting
 from the end of the source area to the end of the destination area.  
This prevents prematurely overwriting bytes that still need to be copied.  
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;

	if (!dest && !src)
		return (NULL);

	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		size_t i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}