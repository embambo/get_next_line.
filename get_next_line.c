/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 15:07:26 by embambo           #+#    #+#             */
/*   Updated: 2019/10/09 17:36:50 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_substring(int fd, char *file[], char **line, int el)
{
	unsigned int	line_len;
	size_t			file_len;
	int				len;
	char			*substr;

	line_len = (unsigned int) ft_strlen(*line);
	file_len = (size_t)ft_strlen(file[fd]);
	len = (int)ft_strlen(*line);
	substr = ft_strsub(file[fd], line_len + el, file_len - len + el);
	return (substr);
}


int get_next_line(int fd, char **line)
{
	int		file[MAX_FD];
	char	buf[BUFF_SIZE];
	int		*temp;
	int		el;
	int		ret;

	if (fd < 0 || read(fd, NULL, 0) == -1
			|| (!file[fd] && !(file[fd] = ft_strnew(1))) || !line)
		return (-1);
	while (!ft_strchr(file[fd],'\n') && (ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		temp = file[fd];
		file[fd] = ft_strjoin(file[fd], buf);
		ft_strdel(&temp);
	}
	if (ret == -1 || !*(temp = file[fd]))
		return (ret == -1 ? 1 : 0);
	if ((el = ft_strchr(file[fd], '\n') > 0))
		*line = ft_strsub(file[fd], 0, ft_strchr(file[fd], '\n') - file[fd]);
	else
		*line = ft_strdup(file[fd]);
	file[fd] = (char*)ft_substring(fd, file, line, el);
	ft_strdel(&temp);
	return (!(!file[fd] && !ft_strlen(*line)));
}


