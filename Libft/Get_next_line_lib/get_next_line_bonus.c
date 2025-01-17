/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:52:57 by andcarva          #+#    #+#             */
/*   Updated: 2025/01/14 14:04:21 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char		buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	char			*line;
	int				len;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || fd > FOPEN_MAX)
		return (NULL);
	while (*buffer[fd] || read(fd, buffer[fd], BUFFER_SIZE) > 0)
	{
		line = ft_strjoin_1(line, buffer[fd]);
		if (!line)
			return (NULL);
		len = ft_linelen(line);
		ft_buff_move(buffer[fd]);
		if (line[len - 1] == '\n')
			return (line);
	}
	return (line);
}

/* int main(void)
{
    int fd = open("text.txt", O_RDONLY);
   	int fd2 = open("text2.txt", O_RDONLY);
    char *line;
	int		i = 0;
	int		j = 0;

    if (fd == -1)
    {
        printf("Error opening file");
        return 1;
	}
    while (i < 1)
    {
		line = get_next_line(fd);
		if (line != NULL)
		{
    	    printf("line: %s", line);
    		free(line);
		}
		i++;
    }
	while (i < 5)
    {
		line = get_next_line(fd2);
		if (line != NULL)
		{
    	    printf("line: %s", line);
    		free(line);
		}
		i++;
    }
	while (i < 10)
    {
		line = get_next_line(fd);
		if (line != NULL)
		{
    	    printf("line: %s", line);
    		free(line);
		}
		i++;
    }
 	close(fd);
    close(fd2);
    return 0;
} */