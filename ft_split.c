/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 18:38:10 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/19 23:14:58 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
// not working (yet)
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);

int ft_word_count(char *s, char c)
{
	int	d;
	int	w;
	d = 0;
	w = 1;

	if (ft_strlen(s) == 0)
		return 0;
	while (d < (int) ft_strlen(s))
	{
		d++;
		if (s[d] == c)
			w++;
	}
	return w;
}

char **ft_split(char const *s, char c)
{
	unsigned int	d;
	unsigned int	w;
	unsigned int	wc;
	unsigned int	size;

	d = 0;
	w = 0;
	size = 0;
	wc = 0;
	w = ft_word_count((char *) s, c);
	return (NULL);
}
