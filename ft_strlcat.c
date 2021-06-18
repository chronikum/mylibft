/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:42:03 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/18 11:50:13 by jfritz           ###   ########.fr       */
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
	size_t	s;

	t = ft_strlen(dst);
	j = t;
	i = 0;
	s = ft_strlen(src);
	while ((t < dstsize) && (src[i] != '\0') && (j < dstsize - 1))
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	if (dstsize != 0 && (t < dstsize))
		dst[j] = '\0';
	if (t > dstsize)
		return (dstsize + s);
	return (t + s);
}

int main()
{
    char src1[] = "12345678";
    char dest1[] = "4444";
    char src2[] = "12345678";
    char dest2[] = "4444";
	size_t t = ft_strlen(src2);

    printf("%i, %s\n", (int) ft_strlcat(dest1, src1, t), dest1);
    printf("%i, %s\n", (int) strlcat(dest2, src2, t), dest2);
}