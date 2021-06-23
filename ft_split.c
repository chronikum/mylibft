/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:15:44 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/23 08:46:54 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlen(const char *s);

int  ft_create_result(char ***result, char *s)
{
	if (!s)
		return (0);
	*result = malloc(sizeof(char *) * ft_strlen(s) + 1);
	if (!*result)
		return (0);
	return (1);
}

char **ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	j = 0;
	l = 0;
	if (!ft_create_result(&result, (char *) s))
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			j = i;
			while (s[i] != c && s[i])
				i++;
			result[l] = malloc(i - j + 1);
			ft_memcpy(result[l], &(s[j]), i - j);
			result[l][i - j] = 0;
			l++;
		}
		if (s[i])
			i++;
	}
	result[l] = 0;
	return (result);
}

int	main()
{
	char *s = "Das ist ein Test!";
	char p = ' ';

	char **r = ft_split(s, p);
}