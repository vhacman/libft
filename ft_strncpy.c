
#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main()
{
    char	src[] = "Hello!";
    char	dest1[10];
    char	dest2[10];

    ft_strncpy(dest1, src, 3); // Copia solo "Hel"
    ft_strncpy(dest2, src, 10); // Copia tutto e aggiunge '\0'

    printf("Copia parziale: %s\n", dest1);
    printf("Copia completa: %s\n", dest2);

    return 0;
}*/
