/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:40:40 by rakkaya           #+#    #+#             */
/*   Updated: 2022/01/12 11:15:55 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)b;
	while (len-- > 0)
	{
		*(str++) = (unsigned char)c;
	}
	return (b);
}
/*
 #include <stdio.h>
 int main()
 {
     char str[] = "rumeysa";
     int c = '*';
     printf("%s", ft_memset(str, c, 2));
 }
 */
