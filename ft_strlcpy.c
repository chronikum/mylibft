/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:25:04 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/18 14:59:51 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	l;

	l = 0;
	c = 0;
	while (src[l] != '\0')
		l++;
	while (((dstsize - 1) > c) && src[c] != '\0' && dst[c] != '\0')
	{
		if (dstsize == 0)
			return (l);
		dst[c] = src[c];
		c++;
	}
	if (dstsize != 0)
		dst[(c)] = '\0';
	return (l);
}
