/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:35:24 by molesen           #+#    #+#             */
/*   Updated: 2021/12/01 09:57:33 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	char	*pnt;

	i = 0;
	pnt = dest;
	while (i < n && src[i] != '\0')
	{
		pnt[i] = src[i];
		i++;
	}
	while (i < n)
	{
		pnt[i] = '\0';
		i++;
	}
	return (dest);
}
