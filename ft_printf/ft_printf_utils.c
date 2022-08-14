/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:16:00 by rakkaya           #+#    #+#             */
/*   Updated: 2022/03/02 18:08:51 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_str(char *str)
{
	int	count;

	count = 0;
	if (!str)
	{
		count += write(1, "(null)", 6);
		return (count);
	}
	while (*str)
	{
		count += ft_char(*str);
		str++;
	}
	return (count);
}

int	ft_nbr(long double number, int base, int is_upper)
{
	int	count;

	count = 1;
	if (number < 0)
	{
		number *= -1;
		write(1, "-", 1);
		count++;
	}
	if (number >= base)
		count += ft_nbr(((unsigned long)number / base), base, is_upper);
	if (is_upper)
		write(1, &"0123456789ABCDEF"[(unsigned long) number % base], 1);
	else
		write(1, &"0123456789abcdef"[(unsigned long) number % base], 1);
	return (count);
}

int	ft_pointer(unsigned long address, int base, int is_upper)
{
	int	count;

	count = 0;
	count += ft_str("0x");
	count += ft_nbr(address, base, is_upper);
	return (count);
}
