/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:59:02 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/27 16:08:57 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*the function searches for the last occurance of the char C in the string S
It returns a pointer to the position of the last occurance of the char
in the string. If the char is not found it returns NULL. The null terminator
of the string is also considered part of the string and can be searched for.*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurance;
	char	target;

	last_occurance = NULL;
	target = (char)c;
	while (*s)
	{
		if (*s == target)
			last_occurance = (char *)s;
		s++;
	}
	if (target == 0)
		return ((char *)s);
	return (last_occurance);
}
/*
int main(void)
{
    const char *test_string = "Hello, world!"; // Stringa di test
    char target_char;                          // Carattere da cercare
    char *result;                              // Risultato della funzione

    // Test 1: Cerca il carattere 'o'
    target_char = 'o';
    result = ft_strrchr(test_string, target_char);
    printf("Test 1:\n");
    printf("Stringa: \"%s\"\n", test_string);
    printf("Carattere da cercare: '%c'\n", target_char);
    if (result)
        printf("Ultima occorrenza trovata: \"%s\"\n\n", result);
    else
        printf("Carattere '%c' non trovato nella stringa.\n\n", target_char);

    // Test 2: Cerca un carattere non presente ('x')
    target_char = 'x';
    result = ft_strrchr(test_string, target_char);
    printf("Test 2:\n");
    printf("Stringa: \"%s\"\n", test_string);
    printf("Carattere da cercare: '%c'\n", target_char);
    if (result)
        printf("Ultima occorrenza trovata: \"%s\"\n\n", result);
    else
        printf("Carattere '%c' non trovato nella stringa.\n\n", target_char);

    // Test 3: Cerca il terminatore '\0'
    target_char = '\0';
    result = ft_strrchr(test_string, target_char);
    printf("Test 3:\n");
    printf("Stringa: \"%s\"\n", test_string);
    printf("Carattere da cercare: '\\0'\n");
    if (result)
        printf("Ultima occorrenza di '\\0': puntatore a \"%s\"\n\n", result);
    else
        printf("Carattere '\\0' non trovato nella stringa.\n\n");

    return 0;
}*/
