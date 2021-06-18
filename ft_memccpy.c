/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:54:01 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/18 10:25:36 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int e;
	unsigned char *d;
	unsigned char *s;
	void *r;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	e = 0;
	while (n > e)
	{
		d[e] = s[e];
		if (s[e] == c)
		{
			
			return (void*) &dst[e];
		}
		e++;
	}
	return 0;
}

int main()
{
	char e = 'c';
    char buffer[80];
	char* msg = "thestring: not copied";

    memset( buffer, '\0', 80 );
	//memset( buffer2, '\0', 80 );
    void *c = ft_memccpy( buffer, msg, e, 22 );
	memset( buffer, '\0', 80 );
	void *d = memccpy( buffer, msg, e, 22 );

    printf( "%p\n", c );
	printf( "%p\n", d );

	if (c == d) // gleich, wenn memccpy und memccpy verwendet werden. nicht gleich wenn ich meine benutze mit memccpy
	{
		printf("SAME");
	}
    
    return 0;
}