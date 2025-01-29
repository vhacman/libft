/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:43:11 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/29 18:53:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
    if (i == n);
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] != '\0' && s1[i] == s2[i])
		i++;
	
		
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
/*
int	main(void)
{
    // Test 1: Stringhe uguali
    printf("Test 1: %d\n", ft_strncmp("Hello", "Hello", 5));

    // Test 2: Stringhe diverse
    printf("Test 2: %d\n", ft_strncmp("Hello", "Hellz", 5));

    // Test 3: `n` più piccolo della lunghezza
    printf("Test 3: %d\n", ft_strncmp("Hello", "Hellz", 4));

    // Test 4: Stringa più corta di `n`
    printf("Test 4: %d\n", ft_strncmp("He", "Hello", 5));

    // Test 5: `n == 0`
    printf("Test 5: %d\n", ft_strncmp("Hello", "Hello", 0));

    return (0);
}

int main(void)
{
    printf("Test 1: %d\n", ft_strncmp("Hello", "Hello", 5));
    printf("Test 2: %d\n", ft_strncmp("Hello", "Hellz", 5)); 
    printf("Test 3: %d\n", ft_strncmp("Hello", "Hellz", 4)); 
    printf("Test 4: %d\n", ft_strncmp("He", "Hello", 5)); 
    printf("Test 5: %d\n", ft_strncmp("Hello", "He", 5)); 
    printf("Test 6: %d\n", ft_strncmp("Hello", "Hello", 0)); 
    printf("Test 7: %d\n", ft_strncmp("", "Hello", 5)); 
    printf("Test 8: %d\n", ft_strncmp("Hello", "", 5)); 
    printf("Test 9: %d\n", ft_strncmp("", "", 5));
    printf("Test 10: %d\n", ft_strncmp("a", "b", 1)); 
    printf("Test 11: %d\n", ft_strncmp("abc", "abd", 2)); 

    return 0;
}*/