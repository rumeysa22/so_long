/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:03:21 by rakkaya           #+#    #+#             */
/*   Updated: 2022/01/28 15:08:51 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (s)
		while (*s != '\0')
			ft_putchar_fd(*s++, fd);
	ft_putchar_fd('\n', fd);
}

/*#include <fcntl.h>

int main()
{
	int fd = open("deneme6.txt", O_CREAT | O_RDWR, 0777);
	ft_putendl_fd("string", fd);
}*/
