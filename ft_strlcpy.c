/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <fcullen@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:26:57 by fcullen           #+#    #+#             */
/*   Updated: 2022/10/23 14:19:33 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DESCRIPTION
//      The strlcpy() and strlcat() functions copy and concatenate strings with the same input parame-
//      ters and output result as snprintf(3).  They are designed to be safer, more consistent, and less
//      error prone replacements for the easily misused functions strncpy(3) and strncat(3).

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
	{
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

/*#include <stdio.h>
int main(void)
{
	char *dest;
	ft_strlcpy(dest, "lorem ipsum", 3);
}*/
