/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:35:15 by rakkaya           #+#    #+#             */
/*   Updated: 2022/01/28 14:12:51 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*#include <stdio.h>

void	ft_putstr(unsigned int i, char *s)
{
	*s -= 32;
}

int main(void)
{
	char str[] = "ahmet";
	ft_striteri(str, &ft_putstr);
	printf("%s\n", str); 
	return (0);
}*/
