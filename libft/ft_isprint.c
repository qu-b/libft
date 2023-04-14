/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <zaphod@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:44:16 by fcullen           #+#    #+#             */
/*   Updated: 2023/01/10 16:50:02 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

// DESCRIPTION
//      The isprint() function tests for any printing character,
//      including space (` '). The value of the argument must be representable 
//		as an unsigned char or the value of EOF.

int	ft_isprint(int c)
{
	if ((c >= ' ' && c <= '~'))
		return (1);
	else
		return (0);
}
