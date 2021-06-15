/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:13:18 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/15 15:52:27 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	whitespace(char c)
{
	return ((c == '\t') || (c == '\n')
		|| (c == '\v') || (c == '\f') || (c == '\r') || (c == ' '));
}

int	is_digit(char c)
{
	return ((c >= 48) && (c <= 57));
}

int	ft_count_minus(int r, int m)
{
	if (m % 2 == 1)
		return (-r);
	return (r);
}

int	ft_atoi(char *str)
{
	int		i;
	int		r;
	int		m;

	i = 0;
	r = 0;
	m = 0;
	while (whitespace(str[i]))
		i++;
	while (((str[i] == 45) || (str[i] == 43)))
	{
		if (str[i] == '-')
			m++;
		i++;
	}
	while (is_digit(str[i]))
	{
		if ((!(is_digit(str[i]))) && (r != 0))
			return (ft_count_minus(r, m));
		if (is_digit(str[i]))
			r = ((10 * r) + (str[i] - 48));
		i++;
	}
	return (ft_count_minus(r, m));
}
