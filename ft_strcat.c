// HEADER
//
#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i; //dichiarato contatore per dest
	int	j; //dichiarato contatore per src

	i = 0;
	j = 0;
	while (dest[i] != '\0') //serve per trovare la fine di dest
	{
		i++;
	}
	while (src[j] != '\0') // aggiungere src alla fine di dest
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0'; //ci assicuriamo che dest abbia NULL alla fine
	return (dest); //restituisce dest, che ora contiene anche src alla fine
}

int	main(void)
{
	char dest[20] = "madonna_che";
	char src[] = "_fame";
	printf("%s\n", ft_strcat(dest, src));
	return (0);
}
