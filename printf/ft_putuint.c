/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <zaphod@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:36:05 by fcullen           #+#    #+#             */
/*   Updated: 2023/01/10 16:50:15 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

// DESCRIPTION:
// 		Outputs the unsigned integer ’n’ to the std out.

int	ft_putuint(unsigned int n)
{
	int				len;
	unsigned int	nbr;

	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		nbr = n * -1;
	}
	else
		nbr = n;
	if (nbr >= 10)
		len += ft_putuint(nbr / 10);
	len += ft_putchar((char)(nbr % 10 + 48));
	return (len);
}
