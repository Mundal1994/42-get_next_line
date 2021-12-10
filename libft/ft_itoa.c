/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:30:28 by molesen           #+#    #+#             */
/*   Updated: 2021/11/18 12:57:30 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_of_int(unsigned int i)
{
	if (i >= 1000000000)
		return (10);
	if (i >= 100000000)
		return (9);
	if (i >= 10000000)
		return (8);
	if (i >= 1000000)
		return (7);
	if (i >= 100000)
		return (6);
	if (i >= 10000)
		return (5);
	if (i >= 1000)
		return (4);
	if (i >= 100)
		return (3);
	if (i >= 10)
		return (2);
	return (1);
}

static int	ft_len_finder(int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
			return (11);
		else
		{
			n *= -1;
			return (ft_len_of_int(n) + 1);
		}
	}
	return (ft_len_of_int(n));
}

static char	*ft_to_string(char *dst, int nb)
{
	if (nb / 10 == 0)
	{
		*dst = nb + '0';
		dst++;
		*dst = '\0';
		return (dst);
	}
	dst = ft_to_string(dst, nb / 10);
	*dst = nb % 10 + '0';
	dst++;
	*dst = '\0';
	return (dst);
}

static char	*ft_neg_calc(char *dst, int n)
{
	dst[0] = '-';
	if (n == -2147483648)
	{
		dst[1] = '2';
		n = 147483648;
		ft_to_string(&dst[2], n);
	}
	else
	{
		n *= -1;
		ft_to_string(&dst[1], n);
	}
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*dst;
	size_t	len;

	len = ft_len_finder(n);
	dst = (char *)ft_memalloc(sizeof(char) * len + 1);
	if (!dst)
		return (NULL);
	if (n < 0)
		ft_neg_calc(dst, n);
	else
		ft_to_string(dst, n);
	return (dst);
}
