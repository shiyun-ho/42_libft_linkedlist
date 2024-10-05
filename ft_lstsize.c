/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 20:46:07 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/10/05 21:30:36 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/**
 * @brief: Count the number of nodes in a list
 * @param: lst - beginning of the list
 * @return: length of the list
 */
int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while(lst)
    {
        i++;
        lst = lst->next;
    }
    return (i);
}