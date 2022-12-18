/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 10:53:38 by cgodecke          #+#    #+#             */
/*   Updated: 2022/12/18 12:37:13 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_calloc allocates memory for an array of nmemb elements of
// size bytes each. The memory is set to zero.
// Return: If nmemb or size is 0, then calloc() returns NULL. If the multi-
// plication of nmemb and size would result in integer overflow, then calloc()
// returns an error. By sucsess returns a pointer to the allocated memory.

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb * size > 2147483647)
		return (NULL);
	mem = (void *)malloc (nmemb * size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, nmemb * size);
	return (mem);
}
