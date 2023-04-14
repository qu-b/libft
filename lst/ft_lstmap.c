/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <zaphod@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:45:13 by fcullen           #+#    #+#             */
/*   Updated: 2023/01/10 16:50:41 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

// DESCRIPTION:
// 	Iterates the list ’lst’ and applies the function
// 	’f’ to the content of each element. Creates a new
// 	list resulting of the successive applications of
// 	the function ’f’. The ’del’ function is used to
// 	delete the content of an element if needed.

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*elem;
	t_list	*felem;

	newlist = 0;
	felem = f(lst->content);
	if (!lst)
		return (0);
	while (lst)
	{
		elem = ft_lstnew(felem);
		if (!elem)
		{
			ft_lstclear(&newlist, del);
			ft_lstclear(&felem, del);
			return (0);
		}
		ft_lstadd_back(&newlist, elem);
		lst = lst->next;
	}
	return (newlist);
}
