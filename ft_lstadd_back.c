/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:36:29 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/10/05 21:42:32 by hshi-yun         ###   ########.fr       */
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
    
    if (!lst || !*lst || !new)
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