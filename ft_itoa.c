/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 16:58:31 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/20 17:51:26 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void	ft_convert_to_char(int n, char* str, size_t len)
{
	unsigned int	t;
	static size_t	i = 0;

	t = 0;
	i++;
	if (n > 9)
	{
		t = n % 10;
		n /= 10;
		str[(len - i)] = (char) t + 48;
		ft_convert_to_char(n, str, len);
	} 
	else 
		str[(len - i)] = (char) n + 48;
}

int ft_numberlength(int n)
{
	int o;
	int t;
	int l;

	o = n;
	l = 0;
	while (o > 0)
	{
		t = o % 10;
		o /= 10;
		l++;
	}
	return l;
}

char *ft_itoa(int n)
{
	char *str;
	
	str = (char *)malloc((sizeof(char) * ft_numberlength(n)) + 1);
	ft_convert_to_char(n, str, ft_numberlength(n));
	str[ft_numberlength(n) + 1] = '\0';
	return str;
}