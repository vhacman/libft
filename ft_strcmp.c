//HEADER DA INSERIRE
//



#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
// return (0); --> s1 = s2;
// return (negativo) --> s1 < s2;
// return (positivo) --> s1 > s2;
int	main(void)
{
	char s1[] = "cacca";
	char s2[] = "cacca";
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);

}
