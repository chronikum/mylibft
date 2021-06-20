/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 16:58:31 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/20 18:44:09 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);

char	*ft_char_biggest(int n)
{
	if (n == -2147483648)
	{
		return "-2147483648";
	}

	if (n == 2147483647)
	{
		return "2147483648";
	}

	return 0;
}

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
	str[(len)] = '\0';
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
	int neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	str = (char *)malloc((sizeof(char) * ft_numberlength(n)) + 1 + neg);
	if (neg == 1)
		str[0] = '-';
	ft_convert_to_char(n, &str[neg], ft_numberlength(n));
	// str[ft_numberlength(n) + 1] = '\0';
	return str;
}

int main()
{
	int n = -123123;
	char *c = ft_itoa(n);
	printf("%s", c);
}
