/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:55:55 by cgodecke          #+#    #+#             */
/*   Updated: 2022/12/16 19:10:19 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_memcpy copies n bytes from memory area src 
//to memory area dest. The memory areas shall not overlap.
// Return: A pointer to the copy.

#include <strings.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	i = 0;
	while (n > 0)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
		n--;
	}
	return ((char *)dest);
}
