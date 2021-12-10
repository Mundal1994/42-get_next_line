/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:17:23 by molesen           #+#    #+#             */
/*   Updated: 2021/11/23 11:05:57 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_needle_finder_n(char *pnt, const char *needle, size_t len,
size_t i)
{
	int	pos;
	int	j;

	while (pnt[i] != '\0' && i < len)
	{
		j = 0;
		if (pnt[i] == needle[j])
		{
			pos = i;
			while ((pnt[i] == needle[j] && i < len) || needle[j] == '\0')
			{
				if (needle[j] == '\0')
					return (&pnt[pos]);
				i++;
				j++;
			}
			i = pos;
		}
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(char const *haystack, const char *needle, size_t len)
{
	char	*pnt;
	size_t	i;

	i = 0;
	pnt = (char *)haystack;
	if (needle[i] == '\0')
		return (pnt);
	return (ft_needle_finder_n(pnt, needle, len, i));
}
