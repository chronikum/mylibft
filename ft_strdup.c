/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:15:21 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/18 12:21:06 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_len(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (1)
	{
		dest[i] = src[i];
		if (dest[i] == '\0')
			return (dest);
		i++;
	}
}

char	*ft_strdup(const char *s1)
{
	char	*dest;

	dest = malloc(ft_str_len(s1) + 1);
	ft_strcpy(dest, s1);
	return (dest);
}
