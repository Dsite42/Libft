/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:37:36 by chris             #+#    #+#             */
/*   Updated: 2023/01/02 18:11:54 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include<stdlib.h>

// This function ft_lstdelone takes as a parameter a node and frees the memory
// of the node’s content using the function ’del’ given as a parameter and free
// the node. The memory of ’next’ is not freed.
// Return: None.

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
