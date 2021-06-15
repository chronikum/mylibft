/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:25:04 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/15 14:39:02 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int c;

	c = 0;

	while((dstsize - 1) > c)
	{
		dst[c] = src[c];
		c++;
	}
	dst[(c + 1)] = '\0';
}
