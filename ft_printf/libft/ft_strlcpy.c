/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:13:12 by rakkaya           #+#    #+#             */
/*   Updated: 2022/02/02 14:09:09 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = ft_strlen(src);
	if (!dest || !src)
		return (0);
	if (size)
	{
		while (*src && size-- - 1)
			*dest++ = *src++;
		*dest = 0;
	}
	return (i);
}

/*#include <stdio.h>
int main(void)
{
	char dst[] = "rumeysa";
	char src[] = "akkaya";
	size_t len = 2;

	printf("%zu", ft_strlcpy(dst, src, len));
}*/
