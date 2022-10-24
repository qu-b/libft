/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <fcullen@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:44:23 by fcullen           #+#    #+#             */
/*   Updated: 2022/10/24 17:51:18 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		len++;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	int		len;
	char	*nbr;
	long	n;

	n = nb;
	len = ft_intlen(n);
	nbr = malloc(len + 1);
	if (!nbr)
		return (0);
	nbr[len] = '\0';
	if (n == 0)
		nbr[0] = 48;
	if (n < 0)
	{
		nbr[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		nbr[len - 1] = n % 10 + 48;
		n /= 10;
		len--;
	}
	return (nbr);
}

/*#include <stdio.h>
int main(void)
{
	int max = 2147483647;
	int min = -2147483648;
	int zero = 0;
	printf("MAX: %s\n",ft_itoa(max));
	printf("MIN: %s\n",ft_itoa(min));
	printf("ZERO: %s\n",ft_itoa(zero));
}*/