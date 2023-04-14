/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <zaphod@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:44:10 by fcullen           #+#    #+#             */
/*   Updated: 2023/01/10 16:50:02 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

// DESCRIPTION
//      The isdigit() function tests for a decimal digit character.  
// 	 Regardless of locale, this includes
//      the following characters only:

//      ``0''         ``1''         ``2''         ``3''         ``4''
//      ``5''         ``6''         ``7''         ``8''         ``9''	

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
