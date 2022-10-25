/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <fcullen@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:43:34 by fcullen           #+#    #+#             */
/*   Updated: 2022/10/20 18:43:49 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCRIPTION
//      The isalnum() function tests for any character for which isalpha(3) 
// 	 	or isdigit(3) is true.  The value of the argument must be representable 
// 	 	as an unsigned char or the value of EOF.

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
