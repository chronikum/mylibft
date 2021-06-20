/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 16:58:31 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/20 17:38:31 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void	ft_convert_to_char(int n, char* str, size_t len)
{
	unsigned int	t;
	char 			c;
	static size_t	i = 0;


	t = 0;
	i++;
	c = n + 48;
	if (n > 9) 
	{
		t = n % 10;
		n /= 10;
		printf("%d %d\n", t, (len - i));
		ft_convert_to_char(n, i, len);
	} 
	else 
	{
			printf("%d %d\n", n, (len - i));
	}
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
	int l;
	char *str;
	int t;
	int o;
	int x;

	o = n;
	x = 0;
	str = (char *)malloc((sizeof(char) * ft_numberlength(n)) + 1);
	ft_convert_to_char(n, str, ft_numberlength(n));
	// printf("TEST: %s", c);
	return "a";
}

int	main()
{
	int d = 12345;
	char *s = ft_itoa(d);
	// printf("\n%s", s);
}