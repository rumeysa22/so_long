/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:12:31 by rakkaya           #+#    #+#             */
/*   Updated: 2022/02/02 16:19:33 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + ft_strlen(s) < len)
		len = start + ft_strlen(s);
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (i < len && s[start] && start < ft_strlen(s))
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
/*
#include<stdio.h>
int main()
{
	char  str[] = "rumeysaakkaya";
	unsigned int start = 2;
	size_t  len = 6;
	printf("%s", ft_substr(str, start, len));
}*/
