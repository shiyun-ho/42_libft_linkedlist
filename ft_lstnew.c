/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 20:07:50 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/10/05 20:37:26 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
# include <stdlib.h>

/**
 * @brief: Allocates and returns new node
 * @param: content - initalised with value of param content
 * @param: next - initialised to NULL
 */
t_list *ft_lstnew(void *content)
{
    t_list *new_node;

    new_node = malloc(sizeof(t_list));
    if (!new_node)
        return (NULL);
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}

//Testing if it works
// # include <stdio.h>

// int main()
// {
//     t_list *head = NULL;
//     int data = 42;

//     head = ft_lstnew(&data);
//     if (head){
//         printf("Head of linked list: %d\n", *(int*)(head->content));
//     }
//     else{
//         printf("ft_lstnew failed to add head of linkedlist\n");
//     }
//     free(head);

//     return (0);
// }