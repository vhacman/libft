//header 
/*
Searches for the first occurrence of a specific byte (c) in a memory block (s)
with a maximum length (n). Returns a pointer to the first matching byte
or NULL if the byte is not found. The search is performed byte by byte
and uses a cast to unsigned char to ensure correctness.
*/
void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    const unsigned char *ptr;

    if (s == NULL)
        return (NULL);

    ptr = (const unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (ptr[i] == (unsigned char)c)
            return ((void *)(ptr + i));
        i++;
    }
    return (NULL);
}