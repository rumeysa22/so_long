/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:05:30 by rakkaya           #+#    #+#             */
/*   Updated: 2022/01/27 15:49:46 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n-- > 0)
	{
		*(str++) = 0;
	}
}
/*int main()
{
	char s[] = "rumeysa";
	size_t n = 5;
	ft_bzero (s,n);
	printf ("%s", s);
}*/
