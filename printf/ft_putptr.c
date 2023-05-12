/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaphod <zaphod@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:42:08 by zaphod           #+#    #+#             */
/*   Updated: 2023/01/10 16:50:15 by zaphod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include <limits.h>

int	ft_putptr(void *ptr)
{
	char	c;
	int		len;

	len = 2;
	write(1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0", 1);
	else
	{
		if ((unsigned long)ptr >= 16)
			len += ft_putlhex((unsigned long)ptr / 16);
		if ((unsigned long)ptr % 16 >= 10)
			c = (unsigned long)ptr % 16 + 87;
		else
			c = (unsigned long)ptr % 16 + 48;
		len += ft_putchar(c);
	}
	return (len);
}
