/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <fcullen@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:37:38 by fcullen           #+#    #+#             */
/*   Updated: 2022/10/23 15:36:34 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i])
		i++;
	i--;
	while (i > -1)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i--;
	}
	i++;
	while (str[i])
		i++;
	if (str[i] == '\0' && c == '\0')
		return (&str[i]);
	return (0);
}
