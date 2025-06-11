/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:05:43 by vhacman           #+#    #+#             */
/*   Updated: 2025/06/11 13:46:10 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*extract_line(char **buffer)
{
	char	*line;
	char	*temp;
	size_t	i;

	i = 0;
	if (!*buffer || !**buffer)
	{
		free(*buffer);
		*buffer = NULL;
		return (NULL);
	}
	while ((*buffer)[i] && (*buffer)[i] != '\n')
		i++;
	if ((*buffer)[i] == '\n')
		i++;
	line = ft_strdup(*buffer);
	line[i] = '\0';
	temp = ft_strdup(*buffer + i);
	free(*buffer);
	*buffer = temp;
	return (line);
}

char	*read_to_buffer(int fd, char *buffer)
{
	char	*chunk;
	ssize_t	b_read;

	b_read = 1;
	chunk = malloc(BUFFER_SIZE + 1);
	if (!chunk)
		return (NULL);
	while (b_read > 0 && !ft_strchr(buffer, '\n'))
	{
		b_read = read(fd, chunk, BUFFER_SIZE);
		if (b_read < 0)
		{
			free(chunk);
			free(buffer);
			return (NULL);
		}
		chunk[b_read] = '\0';
		buffer = ft_strjoin(buffer, chunk);
	}
	free(chunk);
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_to_buffer(fd, buffer);
	if (!buffer)
		return (NULL);
	line = extract_line(&buffer);
	return (line);
}
