//HEADER

#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
	{
		i++; //incrementare fino al prossimo carattere
	}
	if (i == n)
		return (0);
	//altrimenti ritorna la differenza tra i primi caratteri diversi
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char s1[] = "qualcosina";
	char s2[] = "qualcosa";
	printf("%d\n", ft_strncmp(s1, s2, 8));
	return (0);
}
