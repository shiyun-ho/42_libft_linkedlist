/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 20:18:29 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/12/21 17:23:33 by shiyun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/**
 * @brief: Adds the node 'new' at beginning of the list
 * @param: lst - address of pointer to first link of a list
 * @param: new - address of a pointer to the node to be added to the list
 */
void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new)
        return ;
    //set the next_node has original first node lst
    new->next = *lst;
    *lst = new;
}

// # include <stdio.h>

// int main()
// {
//     int data = 42;
//     int new_data = 1;
    
//     t_list *head = ft_lstnew(&data);
//     t_list *new_node = ft_lstnew(&new_data);
    
//     printf("Original head_node of linked list: %d\n", *(int*)(head->content));
//     ft_lstadd_front(&head, new_node); 
//     printf("New head_node of linked list: %d\n", *(int*)(head->content));
// }