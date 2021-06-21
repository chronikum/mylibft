/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 18:38:10 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/21 13:33:03 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);

size_t	ft_strlen_char(const char *s, char c)
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
		return i;
	}
	while (s[i + 1] != c)
		i++;
	if (!(s[i] == c && (s[i + 1] != c)))
		i++;
	next = (const char*) &s[1 + i];
	if (!next)
		return (0);
	d = (next - s) * sizeof(char);
	return (d);
}

char	*ft_get_index(const char *s, char c, int p)
{
	int	d;
	int	w;
	int	l;
	char *s1;

	d = 0;
	w = 0;
	l = 0;
	if (ft_strlen(s) == 0)
		return (0);
	if (s[0] != c)
	{
		w++;
		return &s[d];
	}
	while (d < (int) ft_strlen(s))
	{
		if (s[d] == c && s[d + 1] != c)
		{
			if (w == p)
			{
				l = ft_strlen_char(&s[d], c);
				s1 = ft_substr(&s[d], 0, l);
				char *c1 = ft_strtrim(ft_substr(&s[d], 0, l), &c);
				printf("|%s| and length: %d\n", c1, ft_strlen(c1));
				return c1;
			}
			w++;
		}
		d++;
	}
	return &s[d];
}

int	ft_word_count(char *s, char c)
{
	int	d;
	int	w;

	d = 0;
	w = 0;
	if (ft_strlen(s) == 0)
		return (0);
	if (s[0] != c)
		w++;
	while (d < (int) ft_strlen(s))
	{
		if (s[d] == c && (s[d + 1] != c))
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

	e = 0;
	w = ft_word_count((char *) s, c);
	d = (char **)malloc(sizeof(char *) * w);
	printf("Words: %d\n", w);
	while (e < w)
	{
		d[e] = ft_get_index((char *) s, c, e);
		printf("%d: |%s|\n",e, d[e]);
		e++;
	}
	if (!d)
		return (NULL);
	return (d);
}

int main()
{
	char *to_split = " tss=1232123=            test1     test2 test3";
	char placeholder = ' ';

	char **c = ft_split(to_split, placeholder);
	// printf("\nFIRST :%s", c[]);
}