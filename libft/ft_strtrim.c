/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <zaphod@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:34:46 by fcullen           #+#    #+#             */
/*   Updated: 2023/03/21 18:06:12 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

// DESCRIPTION:

//		Allocates (with malloc(3)) and returns a copy of
//		’s1’ with the characters specified in ’set’ removed
//		from the beginning and the end of the string.

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trim;

	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	while (end > start)
	{
		if (!ft_strrchr(set, s1[end - 1]))
			break ;
		end--;
	}
	trim = malloc(sizeof(char) * (end - start + 1));
	if (!trim)
		return (0);
	i = 0;
	while (start < end && s1[start])
		trim[i++] = s1[start++];
	trim[i] = 0;
	return (trim);
}
