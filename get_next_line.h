/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 09:36:53 by molesen           #+#    #+#             */
/*   Updated: 2021/12/15 14:24:08 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <unistd.h>
# include <stdlib.h> 

# define BUFF_SIZE  8
# define FD_SIZE    4096
# define TRUE   0
# define FALSE  1
# define ERROR  -1

int	get_next_line(const int fd, char **line);

#endif
