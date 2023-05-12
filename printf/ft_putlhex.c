/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaphod <zaphod@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:30:34 by zaphod           #+#    #+#             */
/*   Updated: 2023/01/10 16:50:15 by zaphod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

// Takes an int, converts to lowercase hexadecimal and prints
// to standard output.

int	ft_putlhex(long int n)
{
	char	c;
	int		len;

	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		n *= -1;
	}
	if (n >= 16)
		len += ft_putlhex(n / 16);
	if (n % 16 >= 10)
		c = n % 16 + 87;
	else
		c = n % 16 + 48;
	len += ft_putchar(c);
	return (len);
}
