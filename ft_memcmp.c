//header
/*
@s1: Primo blocco di memoria.
@s2: Secondo blocco di memoria.
@n: Numero massimo di byte da confrontare.
Restituisce:
- Un valore negativo se s1 < s2.
- 0 se s1 == s2.
- Un valore positivo se s1 > s2.
 */
#include "libft.h"
#include <stddef.h>

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    const unsigned char *ps1;
    const unsigned char *ps2;

    ps1 = (const unsigned char *)s1;
    ps2 = (const unsigned char *)s2;
    i = 0;

    while (i < n)
    {
        if (ps1[i] != ps2[i])
        {
            return ((int)(ps1[i] - ps2[i]));
        }
        i++;
    }
    return (0);
}