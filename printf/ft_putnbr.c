/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaphod <zaphod@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:45:40 by zaphod           #+#    #+#             */
/*   Updated: 2023/01/10 16:50:15 by zaphod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

// DESCRIPTION:
// 		Outputs the integer ’n’ to the std out.

int	ft_putnbr(int nb)
{
	int				len;
	unsigned int	nbr;

	len = 0;
	if (nb < 0)
	{
		len += ft_putchar('-');
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int)nb;
	if (nbr >= 10)
		len += ft_putnbr(nbr / 10);
	len += ft_putchar((char)(nbr % 10 + 48));
	return (len);
}
