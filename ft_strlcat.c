/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:42:03 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/17 17:04:30 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// fix that
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

int main()
{
    char src1[] = "11";
    char dest1[] = "222";
    char src2[] = "11";
    char dest2[] = "222";
    printf("%i, %s\n", (int) ft_strlcat(dest1, src1, 5), dest1);
    printf("%i, %s\n", (int) strlcat(dest2, src2, 5), dest2);
}