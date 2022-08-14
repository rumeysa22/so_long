/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:53:47 by rakkaya           #+#    #+#             */
/*   Updated: 2022/01/11 14:11:34 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = dst;
	s = src;
	while (n-- > 0)
	{
		*(d++) = *(s++);
	}
	return (dst);
}
/*
 #include <stdio.h>
 int main()
 {
     char s[] = "test";
     char d[] = "aba";
     printf("%s",ft_memcpy(s,d,3));
 }
 */
