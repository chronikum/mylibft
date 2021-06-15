/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:25:04 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/15 15:00:43 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	c;

	if (dstsize == 0)
		return (0);
	c = 0;
	while (((dstsize - 1) > c) && src[c] != '\0')
	{
		dst[c] = src[c];
		c++;
	}
	dst[(c + 1)] = '\0';
	return (c + 1);
}
