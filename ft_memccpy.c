/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:54:01 by jfritz            #+#    #+#             */
/*   Updated: 2021/06/17 17:04:10 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// fix that
void ft_memccpy(void *dst, const void src, int c, size_t n)
{
	unsigned int e;
	void *srcd = &src;

	e = 0;
	while (n >= e)
	{
		dst[e] = srcd[e];
		e++;
	}
}

int main ()
{
  char myname[] = "Pierre de Fermat";


  return 0;
}