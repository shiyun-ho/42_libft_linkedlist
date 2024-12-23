/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:32:02 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/12/21 17:29:18 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief: Returns last node of the list
 * @param: lst - beginning of the list
 * @return: last node of the list
 */
t_list *ft_lstlast(t_list *lst)
{
    t_list *last_node;

    if (!lst)
        return NULL;
    while(lst)
    {
        last_node = lst;
        lst = lst->next;
    }
    return (last_node);    
}

