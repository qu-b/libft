/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaphod <zaphod@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:40:22 by zaphod           #+#    #+#             */
/*   Updated: 2023/01/10 16:50:15 by zaphod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_putnbr_base(unsigned long long nb, char *base)
{
	if (nb >= 16)
		ft_putnbr_base((nb / 16), base);
	ft_putchar(base[nb % 16]);
}
