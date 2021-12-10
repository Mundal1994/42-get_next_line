/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:46:32 by molesen           #+#    #+#             */
/*   Updated: 2021/11/18 12:50:35 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_needle_finder(char *pnt, const char *needle, int i)
{
	int	pos;
	int	j;

	pos = -1;
	while (pnt[i] != '\0')
	{
		j = 0;
		if (pnt[i] == needle[j])
		{
			pos = i;
			while (pnt[i] == needle[j] || needle[j] == '\0')
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

char	*ft_strstr(char const *haystack, const char *needle)
{
	char	*pnt;
	int		i;

	i = 0;
	pnt = (char *)haystack;
	if (needle[i] == '\0')
		return (pnt);
	return (ft_needle_finder(pnt, needle, i));
}
