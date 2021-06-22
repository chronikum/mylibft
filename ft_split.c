/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:15:44 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/22 22:03:05 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlen(const char *s);

int  ft_protected(char ***ret, char *s, int (*arr)[3])
{
	if (!s)
		return (0);
	*ret = malloc(sizeof(char *) * ft_strlen(s) + 1);
	if (!*ret)
		return (0);
	(*arr)[0] = 0;
	(*arr)[1] = 0;
	return (1);
}

char **ft_split(char const *s, char c)
{
	char	**ret;
	int		i;
	int		arr[3];

	i = 0;
	if (!ft_protected(&ret, (char *) s, &arr))
		return (0);
	while (s[arr[0]]) // Für jeden Char
	{
		while (s[arr[0]] == c && s[arr[0]])
			arr[0]++;
		// if (s[arr[0]])
		// {
		// 	arr[2] = arr[0];
		// 	while (s[arr[0]] != c && s[arr[0]])
		// 		arr[0]++;
		// 	ret[arr[1]] = malloc(arr[0] - arr[2] + 1);
		// 	ft_memcpy(ret[arr[1]], &(s[arr[2]]), arr[0] - arr[2]);
		// 	ret[arr[1]][arr[0] - arr[2]] = 0;
		// 	arr[1]++;
		// }
		if (s[arr[0]])
			arr[0]++;
	}
	ret[arr[1]] = 0;
	return (ret);
}