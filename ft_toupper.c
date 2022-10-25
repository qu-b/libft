/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <fcullen@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:46:30 by fcullen           #+#    #+#             */
/*   Updated: 2022/10/20 20:52:17 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCRIPTION
//      The toupper() function converts a lowercase letter to the
//      corresponding uppercase letter. The argument must be representable 
//      as an unsigned char or the value of EOF. Although the toupper()  
//      function uses the current locale, the toupper_l() function may be  
//		passed a locale directly. See xlocale(3) for more information.

int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
		return (c - 32);
	else
		return (c);
}
