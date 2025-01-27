//header

/*
This function duplicates a string, verifying the source, allocating memory, 
copying the content, and returning a pointer to the new string. 
If memory allocation fails or the source is null, it returns NULL. 
Called “ft_strdup,” it uses ft_strlen and ft_strcpy.
*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1) + 1;
	s2 = (char *)malloc(sizeof(char) * len);
	if (!s2)
		return (NULL);
	ft_strcpy(s2, s1);
	return (s2);
}