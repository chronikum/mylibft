/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 11:56:50 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/18 12:10:34 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned int	c;
	unsigned char	*t;

	c = 0;
	t = (unsigned char *)s;
	while (n > c)
	{
		t[c] = 0;
		c++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;

	if (count == 0 || size == 0)
		return (0);
	p = malloc(count * size);
	ft_bzero(p, count * size);
	return (p);
}
