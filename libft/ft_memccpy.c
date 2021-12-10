/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:18:47 by molesen           #+#    #+#             */
/*   Updated: 2021/11/19 13:12:25 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c,
size_t n)
{
	unsigned char		*temp_dest;
	const unsigned char	*temp_src;
	unsigned char		new;

	temp_dest = (unsigned char *)dst;
	temp_src = (const unsigned char *)src;
	new = (unsigned char)c;
	while (n-- > 0)
	{
		*temp_dest = *temp_src;
		if (*temp_src == new)
		{
			temp_dest++;
			return (temp_dest);
		}
		temp_src++;
		temp_dest++;
	}
	return (NULL);
}
