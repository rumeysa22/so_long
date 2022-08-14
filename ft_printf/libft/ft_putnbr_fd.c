/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:10:41 by rakkaya           #+#    #+#             */
/*   Updated: 2022/01/28 15:41:07 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	s[10];
	int		i;
	long	nbr;

	nbr = n;
	i = 0;
	if (nbr == 0)
		write(fd, "0", 1);
	if (nbr < 0)
	{
		nbr *= -1;
		write(fd, "-", 1);
	}
	while (nbr)
	{
		s[i++] = nbr % 10 + '0';
		nbr /= 10;
	}
	while (i--)
		write(fd, s + i, 1);
}
/*
#include <fcntl.h>
int main()
{
	int fd = open("deneme8.txt", O_CREAT | O_RDWR, 0777);
	ft_putnbr_fd (5, fd);
}*/
