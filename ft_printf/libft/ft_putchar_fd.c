/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:35:54 by rakkaya           #+#    #+#             */
/*   Updated: 2022/01/27 15:49:15 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/* #include <fcntl.h>
int main()
{
	int fd = open("deneme.txt", 0_CREAT | O_RDWR, 0777);
	ft_putchar_fd ('a', fd);
}*/
