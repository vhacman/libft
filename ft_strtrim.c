/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 23:49:48 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/30 23:49:48 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	str = malloc(end - start + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}
/*
int	main(void)
{
	char	*s1 = "   hello world!   ";
	char	*set = " ";
	char	*trimmed;
   
	trimmed = ft_strtrim(s1, set);
	if (trimmed)
	{
		printf("Original: '%s'\n", s1);
		printf("Trimmed: '%s'\n", trimmed);
		free(trimmed);
	}
	else
	{	
		printf("Memory allocation failed.\n");
	}
	return 0;
}*/
