/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:42:03 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/17 15:54:59 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(char *c)
{
	int	n;

	n = 0;
	while (c[n] != '\0')
		n++;
	return (n);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	t;
	size_t	j;
	size_t	i;
	size_t	u;

	t = ft_strlen(dst);
	j = t;
	i = 0;
	while (t <= dstsize && src[i] != '\0' && j < dstsize - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	if (dstsize != 0 && t > dstsize)
		dst[j] = '\0';
	return (dstsize + ft_strlen(src));
}
