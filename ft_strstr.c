// HEADER


#include <unistd.h>
#include <string.h>
#include <stdio.h>
//la funzione cerca SOLO la prima occorrenza della sottostringa all'interno della stringa
//principale; restituisce anche il proseguimento della sottostringa che contiene il mio to_fin
//Nel nostro caso se to_find[] = "ba", allora il result[] = "baleno".
char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (!*to_find) // if (to_find[i] != '\0')
		return (str);
	while (*str) // while (str[i] != '\0')
	{
		i = 0;
		while (to_find[i] && str[i] && str[i] == to_find[i])
		{	
			i++;
		}
		if (!to_find[i])
			return (str);
		str++;
	}	
	return (0);
}

int	main(void)
{
	char	str[] = "arcobaleno";
	char	to_find[] = "ba";
	char	*result = ft_strstr(str, to_find);
	if (result)
        	printf("Risultato: %s\n", result);
    	else
       		printf("Sottostringa non trovata.\n");
	return (0);
}
