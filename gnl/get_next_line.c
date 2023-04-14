/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <zaphod@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:01:59 by fcullen           #+#    #+#             */
/*   Updated: 2023/03/21 13:01:04 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif

// In get_next_line we read() text from a file into a buffer. The data in the 
// buffer is moved incrementally into a temporary variable called next_line.

// 1. Fill next_line with buffer until EOL or EOF is reached.
// 2. current_line becomes next_line
// 3. next_line becomes next line.

char	*get_next_line(int fd)
{
	char		*buf;
	char		*current_line;
	static char	*next_line = NULL;
	int			bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (0);
	bytes_read = 1;
	while (!ft_strchr(next_line, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == 0)
			break ;
		else if (bytes_read < 0)
			return (free(buf), free(next_line), NULL);
		buf[bytes_read] = '\0';
		next_line = ft_strjoin_gnl(next_line, buf);
	}
	free(buf);
	current_line = create_current_line(next_line);
	next_line = get_to_next(next_line);
	return (current_line);
}

char	*create_current_line(char *str)
{
	char	*result;
	int		i;

	if (str == 0)
		return (0);
	result = malloc(sizeof(char) * (ft_strlen(str) + 2));
	if (result == 0)
		return (0);
	i = 0;
	while (str[i])
	{
		result[i] = str[i];
		i++;
		if (str[i - 1] == '\n')
			break ;
	}
	result[i] = '\0';
	return (result);
}

char	*get_to_next(char	*str)
{
	char	*result;
	int		i;
	int		j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i] || !str[i + 1])
		return (free(str), NULL);
	if (str[i])
		i++;
	result = malloc(sizeof(char) * ft_strlen(str + i) + 1);
	if (result == 0)
		return (free(str), NULL);
	j = 0;
	while (str[i])
		result[j++] = str[i++];
	result[j] = '\0';
	free(str);
	return (result);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	s3 = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (0);
	if (!s1)
		s1 = ft_strdup("\0");
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = '\0';
	free(s1);
	return (s3);
}

// #include <stdio.h>
// #include <fcntl.h>
// #include "../inc/libft.h"

// int main(void)
// {
// 	char	*temp;
// 	int	fd;

// 	fd = open("../../test_maps/10-2.fdf", O_RDONLY);

// 	while(1)
// 	{
// 		temp = get_next_line(fd);
// 		if (!temp)
// 		break ;
// 		printf("OUTPUT: %s", temp);
// 		free(temp);
// 	}
// 	return (0);
// }