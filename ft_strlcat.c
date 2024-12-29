//HEADER
//
#include <unistd.h>
#include <string.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
//size = la dimensione totale del buffer di destinazione, includendo lo spazio per il terminator. 
//Concatena la stringa src alla stringa dst, ma assicura che la lunghezza totale del contenuto in dst non superi (size - 1), lasciando spazio per il terminatore null.
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	//nel caso in cui la simensione dest_len è 0 o quando il buffer della destinazione è più lungo della dimensione, restituisce la lunghezza che dovrebbe avere. 
	if (size <= dest_len)
		return (size + src_len);
	//controlla che src abbia un carattere null, cioe la fine della stringa.
	//verifica che ci sia ancora spazio nel buffer dest per poter aggiungere un altro carattere da src.
	//(size - 1) --> assicura uno spazio per il terminator
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len); //restituisce la lunghezza teorica
}

int	main(void)
{
	char	dest[40] = "Hello_";
	char	src[] = "World!";
	unsigned int	size = 15;
	unsigned int	result = ft_strlcat(dest, src, size);

	printf("Resulting string: '%s'\n", dest); // %s --> specifica che il parametro successivo è una stringa (char *) - gli apici singoli '%s' --> servono per incorniciare la stringa, rendendola piu leggibile e mostrando gli eventuali spazi vuoti.
	printf("Theoretical length: %u\n", result); // %u --> il parametro successivo è un numero intero senza segno (unsigned int)
	return (0);
}

//Se il buffer non è sufficiente, i caratteri in eccesso vengono troncati
