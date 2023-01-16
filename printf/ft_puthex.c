/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <fcullen@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:04:07 by fcullen           #+#    #+#             */
/*   Updated: 2023/01/10 16:50:15 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_puthex(int n, char x)
{
	char			*base;
	int				sum;
	unsigned int	c;

	base = "0123456789abcdef";
	if (x == 'X')
		base = "0123456789ABCDEF";
	sum = 0;
	c = (unsigned int)n;
	ft_putnbr_base(c, base);
	sum += ft_numlen(c);
	return (sum);
}
