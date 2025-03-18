/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:26:39 by vhacman           #+#    #+#             */
/*   Updated: 2025/02/28 14:05:48 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*extract_line(char **raw_input_ptr)
{
	char			*line;
	t_buffer_info	data;
	size_t			line_len;

	if (!raw_input_ptr || !*raw_input_ptr || !**raw_input_ptr)
		return (NULL);
	data.raw_input = *raw_input_ptr;
	data.raw_input_ptr = raw_input_ptr;
	data.end = ft_strchr(data.raw_input, '\n');
	data.remainder = NULL;
	if (data.end)
		line_len = data.end - data.raw_input + 1;
	else
		line_len = ft_strlen(data.raw_input);
	line = (char *)malloc(sizeof(char) * (line_len + 1));
	if (!line)
		return (NULL);
	ft_strncpy(line, data.raw_input, line_len);
	line[line_len] = '\0';
	extract_line_helper(data, line);
	return (line);
}

void	extract_line_helper(t_buffer_info data, char *line)
{
	if (data.end && *(data.end + 1))
	{
		data.remainder = ft_strdup(data.end + 1);
		if (!data.remainder)
			free(line);
		free(data.raw_input);
		*(data.raw_input_ptr) = data.remainder;
	}
	else
	{
		free(data.raw_input);
		*(data.raw_input_ptr) = NULL;
	}
}

char	*read_and_update(int fd, char *raw_input_data)
{
	char	*buffer;
	char	*temp;
	int		bytes_read;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read < 0)
		return (free(buffer), NULL);
	if (bytes_read == 0)
		return (free(buffer), raw_input_data);
	buffer[bytes_read] = '\0';
	if (!raw_input_data)
		temp = ft_strdup(buffer);
	else
		temp = ft_strjoin(raw_input_data, buffer);
	free(buffer);
	free(raw_input_data);
	return (temp);
}

char	*get_next_line_reader(int fd, char *raw_input_data)
{
	char	*read_done;

	while (!raw_input_data || !ft_strchr(raw_input_data, '\n'))
	{
		read_done = read_and_update(fd, raw_input_data);
		if (!read_done)
		{
			if (raw_input_data)
				free(raw_input_data);
			raw_input_data = NULL;
			return (NULL);
		}
		if (read_done == raw_input_data
			&& !ft_strchr(raw_input_data, '\n'))
			break ;
		raw_input_data = read_done;
	}
	return (raw_input_data);
}
/* 
 * get_next_line - Legge una riga da un file descriptor specificato e la 
 * restituisce come una stringa. Utilizza un buffer statico per ogni file 
 * descriptor, gestito tramite un array di puntatori fd_buffers. La funzione 
 * chiama get_next_line_reader per leggere i dati e extract_line per estrarre 
 * la riga. Ritorna NULL se ci sono errori o EOF. Il buffer associato al 
 * file descriptor viene liberato se non ci sono più dati.
 */

char	*get_next_line(int fd)
{
	static char	*fd_buffers[OPEN_MAX];
	char		*line;

	if (fd < 0 || fd >= OPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	fd_buffers[fd] = get_next_line_reader(fd, fd_buffers[fd]);
	if (!fd_buffers[fd] || !*fd_buffers[fd])
	{
		if (fd_buffers[fd])
		{
			free(fd_buffers[fd]);
			fd_buffers[fd] = NULL;
		}
		return (NULL);
	}
	line = extract_line(&fd_buffers[fd]);
	return (line);
}
/*
int main(void)
{
	int     fd1;
    int     fd2;
    int     fd3;
    char    *line;
	fd1 = open("file1.txt", O_RDONLY);
	fd2 = open("file2.txt", O_RDONLY);
	fd3 = open("file3.txt", O_RDONLY);
	if (fd1 == -1 || fd2 == -1 || fd3 == -1)
    {
        printf("Errore nell'apertura dei file\n");
        return (1);
    }
	line = get_next_line(fd1);
	printf("File 1: %s", line);
	free(line);
	line = get_next_line(fd2);
	printf("File 2: %s", line);
	free(line);
	line = get_next_line(fd3);
	printf("File 3: %s", line);
	free(line);
	line = get_next_line(fd1);
	printf("File 1: %s", line);
	free(line);
	close(fd1);
	close(fd2);
	close(fd3);
    return (0);
}*/
