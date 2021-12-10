/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:39:08 by molesen           #+#    #+#             */
/*   Updated: 2021/11/02 10:56:28 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*pnt;
	int		i;
	int		pos;

	i = 0;
	pos = -1;
	pnt = (char *)str;
	while (pnt[i] != '\0')
	{
		if (pnt[i] == c)
		{
			pos = i;
			pos++;
		}
		i++;
	}
	if (pnt[i] == c)
	{
		pos = i++;
		pos++;
	}
	if (pos == -1)
		return (NULL);
	return (&pnt[pos - 1]);
}
