/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <zaphod@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:45:43 by fcullen           #+#    #+#             */
/*   Updated: 2023/01/10 16:50:15 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

// DESCRIPTION:
// 		Outputs the string ’s’ to the std out.

int	ft_putstr(char *s)
{
	size_t	i;
	int		len;

	i = 0;
	len = 0;
	if (!s)
		s = "(null)";
	while (s[i])
	{
		len += ft_putchar(s[i]);
		i++;
	}
	return (len);
}
