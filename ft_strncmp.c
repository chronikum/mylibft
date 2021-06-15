/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:11:26 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/15 16:11:27 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				f;

	i = 0;
	f = 0;
	while (f == 0 && (i < n) && (n != 0))
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (f);
		if (s1[i] > s2[i])
			f = 1;
		else if (s1[i] < s2[i])
			f = -1;
		i++;
	}
	return (f);
}
