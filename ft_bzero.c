/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <fcullen@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:43:14 by fcullen           #+#    #+#             */
/*   Updated: 2022/10/20 18:43:16 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCRIPTION
//		The bzero() function writes n zeroed bytes to the string s.  
//		If n is zero, bzero() does nothing.

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
