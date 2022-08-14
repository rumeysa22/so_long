/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:15:13 by rakkaya           #+#    #+#             */
/*   Updated: 2022/03/02 16:28:27 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_control(char str, va_list arguments)
{
	int	count;

	count = 0;
	if (str == 'c')
		count += ft_char(va_arg(arguments, int));
	else if (str == 's')
		count += ft_str(va_arg(arguments, char *));
	else if (str == 'd' || str == 'i')
		count += ft_nbr(va_arg(arguments, int), 10, 0);
	else if (str == 'u')
		count += ft_nbr(va_arg(arguments, unsigned int), 10, 0);
	else if (str == 'p')
		count += ft_pointer(va_arg(arguments, unsigned long), 16, 0);
	else if (str == 'x')
		count += ft_nbr(va_arg(arguments, unsigned int), 16, 0);
	else if (str == 'X')
		count += ft_nbr(va_arg(arguments, unsigned int), 16, 1);
	else if (str == '%')
		count += ft_char('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	arguments;
	int		count;

	count = 0;
	va_start(arguments, str);
	while (*str)
	{
		if (*str == '%')
		{
			count += ft_control(*(str + 1), arguments);
			str++;
		}
		else
			count += ft_char(*str);
		str++;
	}
	va_end(arguments);
	return (count);
}
/*
int	main(void)
{
	char *str;
	int my;
	int orj;
	str = "A yffyfyfyfpointer at %p points to %p";
	my = ft_printf("%p\n", str);
	orj = printf("%p\n", str);
	printf("%d\n", my);
	printf("%d", orj);
	return (0);
}*/
