/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:15:44 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/23 09:05:36 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlen(const char *s);

int	ft_create_result(char ***result, char *s)
{
	*result = malloc(sizeof(char *) * ft_strlen(s) + 1);
	if (!*result)
		return (0);
	return (1);
}

void	ft_set_zero(int *i, int *j, int *k, int *l)
{
	*i = 0;
	*j = 0;
	*k = 0;
	*l = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		k;
	int		l;

	ft_set_zero(&i, &j, &k, &l);
	if (!ft_create_result(&result, (char *) s) || !s)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[i] != c && s[i])
			i++;
		result[l] = malloc(i - j + 1);
		ft_memcpy(result[l], &(s[j]), i - j);
		result[l][i - j] = 0;
		l++;
		if (s[i])
			i++;
	}
	result[l] = 0;
	return (result);
}


int	main()
{
	char *s = "Das      ist ein Test    d ddddd d s";
	char p = ' ';

	char **r = ft_split(s, p);
	printf("%s", r[0]);
	printf("%s", r[1]);
	printf("%s", r[2]);
	printf("%s", r[3]);
	printf("%s", r[4]);
	printf("%s", r[5]);
	printf("%s", r[6]);
	printf("%s", r[7]);
}