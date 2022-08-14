/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:16:36 by rakkaya           #+#    #+#             */
/*   Updated: 2022/03/02 18:05:39 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_control(char str, va_list arguments);
int	ft_printf(const char *str, ...);
int	ft_char(int c);
int	ft_str(char *str);
int	ft_nbr(long double number, int base, int is_upper);
int	ft_pointer(unsigned long address, int base, int is_upper);
#endif
