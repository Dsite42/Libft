/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:55:55 by cgodecke          #+#    #+#             */
/*   Updated: 2023/01/04 21:10:06 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_memmove copies n bytes from memory area src to memory area
// dest and is able to use overlap src and dest.
// Return: A pointer to the copy.

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[n - i - 1] = ((char *)src)[n - i - 1];
		i++;
	}
	return ((char *)dest);
}
