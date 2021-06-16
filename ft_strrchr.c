/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:42:49 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/16 13:51:57 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *c)
{
	int	n;

	n = 0;
	while (c[n] != '\0')
		n++;
	return (n);
}

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*g;
	int		t;

	i = 0;
	t = 0;
	while (s[t] != '\0')
		t++;
	t++;
	while (t != 0)
	{
		if ((s[t] != c))
			t--;
		else
		{
			g = (char *) &s[t];
			return (g);
		}
	}
	return (0);
}
