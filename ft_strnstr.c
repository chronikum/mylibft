/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:58:18 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/18 15:00:06 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *c);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	h;
	int				n;
	int				l;
	unsigned int	j;

	l = 0;
	h = 0;
	n = 0;
	j = 0;
	l = ft_strlen((char *)needle);
	while (haystack[h])
	{
		while (haystack[(h + n)] == needle[n]
			&& haystack[(h + n)] && (len >= j))
		{
			n++;
			j++;
		}
		if (l == n)
			return ((char *)(&haystack[h]));
		h++;
		n = 0;
		j = 0;
	}
	return ((void *)0);
}
