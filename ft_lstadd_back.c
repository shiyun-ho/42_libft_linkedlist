/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:36:29 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/12/21 17:29:52 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/**
 * @brief: Adds the node 'new' to the end of th lit
 * @param: lst - address of pointer to first node of the linked list
 * @param: new - address of a pointer to the node to be added to the list
 */
void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last_node;
    
    if (!new)
        return ;
    if (lst)
    {
        if (*lst)
        {
            last_node = ft_lstlast(*lst);
            last_node->next = new;
        }
        else
            *lst = new;
    }      
}