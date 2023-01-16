/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <fcullen@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:46:25 by fcullen           #+#    #+#             */
/*   Updated: 2023/01/10 16:50:02 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

// DESCRIPTION:
// 		Returns the substring of the given string at the given start
// 		position with the given length (or smaller if the length of the 
// 		original string is less than start + length, or length is bigger 
// 		than MAXSTRINGLEN)

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		i;

	if (len > 2147483647)
		len = 2147483647;
	if ((size_t)start > ft_strlen(s))
	{
		substr = malloc(sizeof(char));
		if (!substr)
			return (0);
		substr[0] = 0;
		return (substr);
	}
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	i = 0;
	while ((char)s[start] && i < len)
		substr[i++] = (char)s[start++];
	substr[i] = 0;
	return (substr);
}
