/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:55:55 by cgodecke          #+#    #+#             */
/*   Updated: 2022/12/20 15:40:50 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_memmove copies n bytes from memory area src to memory area
// dest and is able to use overlap src and dest.
// Return: A pointer to the copy.

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)dest)[len - i - 1] = ((char *)src)[len - i - 1];
		i++;
	}
	return ((char *)dest);
}
