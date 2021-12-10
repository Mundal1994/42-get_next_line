/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:02:41 by molesen           #+#    #+#             */
/*   Updated: 2021/11/23 10:48:01 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp_dest;
	char	*temp_src;
	size_t	i;

	temp_dest = (char *)dst;
	temp_src = (char *)src;
	i = len;
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
	{
		while (i > 0)
		{
			temp_dest[i - 1] = temp_src[i - 1];
			i--;
		}
	}
	return (dst);
}
