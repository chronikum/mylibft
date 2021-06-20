/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 18:38:10 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/20 20:18:42 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);

size_t	ft_strlen_char(const char *s, char c)
{
	size_t	n;
	char	*next;
	size_t	d;

	n = 0;
	next = ft_strchr((const char *) &s[1], c);
	if (!next)
		return (0);
	d = (next - s) * sizeof(char);
	return (d);
}

char	*ft_get_index(char *s, char c, int p)
{
	unsigned int	x;
	int				u;
	size_t			l;

	x = 0;
	u = 0;
	while (s[x])
	{
		if (s[x] == c)
		{
			if (p == u)
			{
				l = ft_strlen_char(&s[x], c);
				return (ft_substr(&s[x], x, l));
			}
			u++;
		}
		x++;
	}
	return (&s[p]);
}

int	ft_word_count(char *s, char c)
{
	int	d;
	int	w;

	d = 0;
	w = 1;
	if (ft_strlen(s) == 0)
		return (0);
	while (d < (int) ft_strlen(s))
	{
		d++;
		if (s[d] == c)
			w++;
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char			**d;
	unsigned int	w;
	unsigned int	e;

	e = 0;
	w = ft_word_count((char *) s, c);
	d = (char **)malloc(sizeof(char *) * w);
	while (e < w)
	{
		d[e] = ft_get_index((char *) s, c, e);
		e++;
	}
	if (!d)
		return (NULL);
	return (d);
}
