//HEADER
//


#include <string.h>
#include <unistd.h>
#include <stdio.h>
// nb = il numero massimo di caratteri che definisce quanti caratteri da src devono essere
// copiati in dest. Se src è più lunga di nb, solo i primi nb caratteri veranno copiati
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	//controlla che dest[i] esiste 
	while(dest[i] != '\0')
	{
		i++;
	}
	//copia i caratteri di src nella posizione di dest
	//a partire dall'indice i(dove la stringa di destinazione
	//è terminata).
	//Vengono copiati al massimo nb caratteri, o meno se la stringa src finisce prima.
	//dopo aver copiato ogni carattere, i e j vengono incrementati
	while(src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0'; //viene aggiunto un carattere NULL per terminare la stringa risultante in dest
	return (dest);
}

int	main(void)
{
	char	dest[20] = "madonna_che";
	char	src[] = "_fame";
	printf("%s\n", ft_strncat(dest, src, 11));
	return (0);	
}

