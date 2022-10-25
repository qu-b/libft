/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <fcullen@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:44:16 by fcullen           #+#    #+#             */
/*   Updated: 2022/10/20 20:00:36 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCRIPTION
//      The isprint() function tests for any printing character, including space (` ').  The value of the
//      argument must be representable as an unsigned char or the value of EOF.

int	ft_isprint(int c)
{
	if ((c >= ' ' && c <= '~'))
		return (1);
	else
		return (0);
}
