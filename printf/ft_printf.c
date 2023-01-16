/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <fcullen@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:31:57 by fcullen           #+#    #+#             */
/*   Updated: 2023/01/10 16:50:15 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

// DESCRIPTION:
// 		Write a library that contains ft_printf, a function
// 		that will mimic the real printf

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			len += ft_findtype(str, i, args);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

// #include <stdio.h>

// int main (int ac, char **av)
// {
// 	ft_printf("M: %x\n", atoi(av[1]));
// 	ft_printf("M: %d\n", ft_printf("%d\n" ,atoi(av[1])));
// 	printf("T: %p\n", atoi(av[1]));
// 	printf("T: %p\n", printf("%d\n" ,atoi(av[1])));

// }
// int main(void)
// {
// 	long l = 9223372036854775807;
// 	ft_printf("%p\n", l);
// 	return (0);
// }