/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 22:58:36 by chris             #+#    #+#             */
/*   Updated: 2022/12/23 23:55:41 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_lstnew creates a new node. The member variable ’content’ is
// initialized with the value of the parameter ’content’. The variable ’next’
// is initialized to NULL.
// Return: The new node as t_list.

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

t_list *ft_lstnew(void *content)
{
	t_list	*tmp;

	tmp = (t_list *) malloc(sizeof(t_list));
	if (tmp == NULL)
		return (NULL);
	tmp->content = content;
	tmp->next = NULL;
	return (tmp);
}

int main(void)
{
	int str = 228727527;

	printf("%i\n", (int)*(ft_lstnew(&str)->content));
}