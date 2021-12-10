/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:10:00 by molesen           #+#    #+#             */
/*   Updated: 2021/11/16 12:52:31 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strjoin_i(char const *s1, char const *s2, char *str,
unsigned int len_s1)
{
	unsigned int	len_s2;
	unsigned int	i;
	unsigned int	j;

	len_s2 = ft_strlen((char *)s2);
	i = 0;
	while (i < len_s1)
	{
		str[i] = (char)s1[i];
		i++;
	}
	j = 0;
	while (i < (len_s1 + len_s2))
	{
		str[i] = (char)s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	len_s1;
	unsigned int	len_s2;

	str = NULL;
	if (s1 && s2)
	{
		len_s1 = ft_strlen((char *)s1);
		len_s2 = ft_strlen((char *)s2);
		str = (char *)malloc(sizeof(char) * ((len_s1 + len_s2) + 1));
		if (!str)
			return (NULL);
		ft_strjoin_i(s1, s2, str, len_s1);
	}
	return (str);
}
