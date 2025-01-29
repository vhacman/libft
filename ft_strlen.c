
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main()
{
	char	str1[] = "Hello, World!";
	printf("Lunghezza di \"%s\": %zu\n", str1, ft_strlen(str1));
	char	str2[] = "";
	printf("Lunghezza di stringa vuota: %zu\n", ft_strlen(str2));
	printf("Lunghezza di NULL: %zu\n", ft_strlen(NULL));
	 return (0);
}*/
