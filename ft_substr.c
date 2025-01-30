/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@student.42.fr>              +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:24:54 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/30 17:24:54 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Used to extract a substring from a given string.
s: The string from which the substring will be created.
start: The starting index of the substring.
len: The maximum length of the substring.*/

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
        if (!s)
                return (NULL);
        size_t str_len;

        str_len = ft_strlen(s);

        if (start >= str_len)
                return ((char *)malloc(1));
        size_t copy_len;
        copy_len = len;
        if (start + len > str_len)
                copy_len = str_len - start;
        char *sub_str = (char *)malloc(copy_len + 1);
        if (!sub_str)
                return (NULL);
        size_t i;
        i = 0;
        while (i < copy_len)
        {
                sub_str[i] = s[start + i];
                i++;
        }
        sub_str[i] = '\0';
        return (sub_str);
}
/*
int     main(void)
{
        const char  *str = "Hello, World!";
        char        *sub = ft_substr(str, 7, 5);

        if (sub)
        {
                printf("Substring: %s\n", sub);
                free(sub);
        }
        else
                printf("Memory allocation failed\n");
        return (0);
}*/