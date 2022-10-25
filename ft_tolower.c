/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <fcullen@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:46:28 by fcullen           #+#    #+#             */
/*   Updated: 2022/10/20 20:53:14 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCRIPTION
//      The tolower() function converts an upper-case letter to the corresponding lower-case letter.
//      The argument must be representable as an unsigned char or the value of EOF.

//      Although the tolower() function uses the current locale, the tolower_l() function may be passed
//      a locale directly. See xlocale(3) for more information.

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (c + 32);
	else
		return (c);
}
