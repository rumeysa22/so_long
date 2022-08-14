/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:53:47 by rakkaya           #+#    #+#             */
/*   Updated: 2022/01/11 12:49:59 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = dst;
	s = src;
	if (d > s)
	{
		while (len-- > 0)
			*(d + len) = *(s + len);
	}
	else
	{
		while (len-- > 0)
			*(d++) = *(s++);
	}
	return (dst);
}
/*
int main(void)
{
	char str[] = "merhaba";
	ft_memmove(str + 3, str, 4);
	printf ("%s", str);
}
*/
