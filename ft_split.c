/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 18:38:10 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/22 12:02:54 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);

size_t	ft_clen(const char *s, char c)
{
	size_t	n;
	char	*next;
	size_t	d;
	size_t	i;

	n = 0;
	i = 0;
	if (s[0] != c)
	{
		while (s[i] != c)
			i++;
		return (i);
	}
	while (s[i + 1] != c)
		i++;
	if (!(s[i] == c && (s[i + 1] != c)))
		i++;
	next = (char *) &s[1 + i];
	if (!next)
		return (0);
	d = (next - s) * sizeof(char);
	return (d);
}

char	*ft_get_index(const char *s, char c, int p)
{
	int		d;
	int		w;

	d = 0;
	w = 0;
	if (ft_strlen(s) == 0)
		return (0);
	if (s[0] != c)
	{
		w++;
		if (p == 0)
			return (ft_strtrim(ft_substr(&s[d], 0, ft_clen(&s[0], c)), &c));
	}
	while (d++ < (int) ft_strlen(s))
	{
		if (s[d] == c && s[d + 1] != c)
		{
			if (w == p)
				return (ft_strtrim(ft_substr(&s[d], 0, ft_clen(&s[d], c)), &c));
			w++;
		}
	}
	return ((char *) &s[d]);
}

int	ft_word_count(char *s, char c)
{
	int	d;
	int	w;

	d = 0;
	w = 0;
	while (d < (int) ft_strlen(s))
	{
		if ((s[d] == c && (s[d + 1] != c) && (s[d + 1] != '\0'))
			|| (d == 0 && s[d] != c))
			w++;
		d++;
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char			**d;
	unsigned int	w;
	unsigned int	e;
	
	if (!s)
		return (0);
	e = 0;
	w = ft_word_count((char *) s, c);
	d = (char **)malloc((sizeof(char *) * (w + 1)));
	if (!d)
		return (NULL);
	while (e < w)
	{
		d[e] = ft_get_index((char *) s, c, e);
		e++;
	}
	d[e] = NULL;
	return (d);
}
