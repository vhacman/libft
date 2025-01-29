/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:45:31 by vhacman           #+#    #+#             */
/*   Updated: 2025/01/29 18:19:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main()
{
	char	str1[] = "Hello, World!";
	printf("Lunghezza di \"%s\": %zu\n", str1, ft_strlen(str1));
	char	str2[] = "";
	printf("Lunghezza di stringa vuota: %zu\n", ft_strlen(str2));
	printf("Lunghezza di NULL: %zu\n", ft_strlen(NULL));
	 return (0);
}*/
