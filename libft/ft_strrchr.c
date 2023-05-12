/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaphod <zaphod@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:37:38 by zaphod           #+#    #+#             */
/*   Updated: 2023/01/10 16:50:02 by zaphod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

// DESCRIPTION
//      The strchr() function locates the first occurrence of c 
//		(converted to a char) in the string pointed to by s.  
//      The terminating null character is considered to be part of the string;
//      therefore if c is `\0', the functions locate the terminating `\0'.
//      The strrchr() function is identical to strchr(), 
//		except it locates the last occurrence of c.

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last_occ;

	i = 0;
	last_occ = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			last_occ = i;
		i++;
	}
	if (last_occ >= 0)
	{
		return ((char *)(s + last_occ));
	}
	if (s[i] == (char) c)
	{
		return ((char *)(s + i));
	}
	return (NULL);
}
