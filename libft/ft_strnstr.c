/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <fcullen@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:35:00 by fcullen           #+#    #+#             */
/*   Updated: 2023/03/21 12:59:12 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

// DESCRIPTION
//      The strnstr() function locates the first occurrence of the 
//      null-terminated string needle in the string haystack, where  
//      not more than len characters are searched. Characters that
//		appear after a `\0' character are not searched.
//      Since the strnstr() function is a FreeBSD specific API, it 
// 		should only be used when portability is not a concern.

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (needle[0] == haystack[i])
		{
			while (needle[j] == haystack[i + j] && needle[j] && i + j < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
