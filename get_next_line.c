/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 09:36:16 by molesen           #+#    #+#             */
/*   Updated: 2021/12/08 17:53:26 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_str_to_line(const int fd, char **str, char **line)
{
	char	*temp;
	int		len;

	len = ft_strlen_stop(str[fd], '\n');
	if (str[fd][len] == '\0')
	{
		line[0] = ft_strdup(str[fd]);
		if (!line[0])
			return (-1);
		ft_strdel(&str[fd]);
	}
	else
	{
		line[0] = ft_strsub(str[fd], 0, len);
		if (!line[0])
			return (-1);
		temp = str[fd];
		str[fd] = ft_strdup(&temp[len + 1]);
		if (!str[fd])
			return (-1);
		ft_strdel(&temp);
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	return (0);
}

static int	ft_buf_to_str(const int fd, char **str, char *buf)
{
	char	*temp;

	if (str[fd])
	{
		temp = str[fd];
		str[fd] = ft_strjoin(temp, buf);
		ft_strdel(&temp);
	}
	else
	{
		str[fd] = ft_strdup(buf);
		if (!str[fd])
			return (-1);
	}
	return (0);
}

static int	ft_binary_check(char *buf, char **line)
{
	int	count;
	int	i;

	count = 1;
	i = 0;
	while (buf[i] != '\0')
	{
		if (ft_isascii(buf[i]) == 1)
			return (FALSE);
		i++;
	}
	line[0] = NULL;
	return (TRUE);
}

static int	ft_find_n(char *buf)
{
	while (*buf)
	{
		if (*buf == '\n')
			return (TRUE);
		buf++;
	}
	return (FALSE);
}

int	get_next_line(const int fd, char **line)
{	
	static char	*str[FD_SIZE];
	char		buf[BUFF_SIZE + 1];
	int			ret;

	if (fd <= -1 || fd > FD_SIZE || !line || BUFF_SIZE < 1)
		return (-1);
	ret = read(fd, buf, BUFF_SIZE);
	while (ret > 0)
	{
		buf[ret] = '\0';
		if (ft_binary_check(buf, line) == TRUE)
			return (0);
		if (ft_buf_to_str(fd, str, buf) == -1)
			return (-1);
		if (fd == 0 && ft_find_n(buf) == TRUE)
			break ;
		ret = read(fd, buf, BUFF_SIZE);
	}
	if (ret == -1)
		return (-1);
	if (ret == 0 && !str[fd])
		return (0);
	if (ft_str_to_line(fd, str, line) == -1)
		return (-1);
	return (1);
}
