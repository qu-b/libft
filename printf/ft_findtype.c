/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findtype.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <zaphod@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:36:17 by fcullen           #+#    #+#             */
/*   Updated: 2023/01/10 16:50:15 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

//	Finds the type of data to print (the letter/symbol after %),
//	and prints it to standard output.

int	ft_findtype(const char *format, int i, va_list arg)
{
	int	len;

	len = 0;
	if (format[i + 1] == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (format[i + 1] == 's')
		len += ft_putstr(va_arg(arg, char *));
	else if (format[i + 1] == 'p')
		len += ft_putptr(va_arg(arg, void *));
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		len += ft_putnbr(va_arg(arg, int));
	else if (format[i + 1] == 'u')
		len += ft_putuint(va_arg(arg, unsigned int));
	else if (format[i + 1] == 'x' || format[i + 1] == 'X')
		len += ft_puthex(va_arg(arg, int), format[i + 1]);
	else if (format[i + 1] == '%')
		len += ft_putchar('%');
	return (len);
}
