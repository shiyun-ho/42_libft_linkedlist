/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 18:24:00 by shiyun            #+#    #+#             */
/*   Updated: 2024/12/21 22:16:58 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief: Iterates through list 'lst'
 * 		   Applies function 'f' to content of each element
 * 		   Creates a new list node after
 * 		   'del' function to delete the content when there's an error creating new
 * 				lst node
 * @param: Address of a pointer to an element
 * @param: Address of the function used to iterate on the list
 * @param: Address of the function used to delete the content of an element if needed
 * @return: New list
 * @return: NULL if allocation fails
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_node;
	
	head = NULL;
	while (lst)
	{
		new_node = ft_lstnew((*f)(lst->content));	
		if (!new_node)
		{
			ft_lstclear(&head, del);
			return NULL;
		}
		ft_lstadd_back(&head, new_node);
		lst = lst->next;
	}
	return (head);
}
