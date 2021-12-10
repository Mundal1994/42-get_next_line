/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:45:51 by molesen           #+#    #+#             */
/*   Updated: 2021/11/02 13:00:49 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*temp;
	char	*pnt;
	size_t	len;

	pnt = (char *)str;
	len = ft_strlen(str) + 1;
	temp = (char *)malloc(len * sizeof(char));
	if (temp != NULL)
		ft_strcpy(temp, pnt);
	return (temp);
}
