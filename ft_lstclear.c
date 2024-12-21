/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 17:46:37 by shiyun            #+#    #+#             */
/*   Updated: 2024/12/21 18:13:01 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief: Delete and free given element and every successor of element 
 *         using del and free 
 *         Pointer to list must be set to NULL
 * @param: Address of pointer to an element
 * @param: Address of function used to delete the content of the element
*/
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *current_node;
    t_list  *next_node;
    
    if (!lst || !del)
        return ;

    current_node = *lst;
    while(current_node)
    {
        next_node = current_node->next;
        (*del)(current_node->content);
        free(current_node);
        current_node = next_node;
    }
    *lst = NULL;
}