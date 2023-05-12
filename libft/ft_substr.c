/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaphod <zaphod@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:46:25 by zaphod           #+#    #+#             */
/*   Updated: 2023/03/21 13:48:20 by zaphod          ###   ########.fr       */
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
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	i = 0;
	while ((char)s[start] && i < len)
		substr[i++] = (char)s[start++];
	substr[i] = '\0';
	return (substr);
}
