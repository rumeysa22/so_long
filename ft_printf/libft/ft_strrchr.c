/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:55:14 by rakkaya           #+#    #+#             */
/*   Updated: 2022/02/02 12:50:53 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (i--)
		if (s[i] == (char)c)
			return ((char *)(s + i));
	return (NULL);
}

/*#include <stdio.h>
int main()
{
   char s[] = "rumeysaakkaya";
   int c = 'e';
   printf("%s",ft_strrchr(s,c));
}*/
