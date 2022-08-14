/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:31:36 by rakkaya           #+#    #+#             */
/*   Updated: 2022/02/02 17:40:45 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && n-- > 0)
	{
		if (s1[i] != s2[i])
			return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
			i++;
	}
	return (0);
}
/*#include <stdio.h>
int main ()
{
	char s1[] = "rumeysa";
	char s2[] = "rumeyse";
	size_t n = 7;
	printf("%d", ft_strncmp(s1, s2, n));
}*/
