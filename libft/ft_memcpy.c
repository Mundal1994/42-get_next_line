/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:50:49 by molesen           #+#    #+#             */
/*   Updated: 2021/11/23 10:46:28 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*temp_dest;
	const unsigned char	*temp_src;

	temp_dest = (unsigned char *)dst;
	temp_src = (const unsigned char *)src;
	if (!dst && !src && n > 0)
		return (dst);
	if (n > 0)
	{
		while (n--)
			*temp_dest++ = *temp_src++;
	}
	return (dst);
}
