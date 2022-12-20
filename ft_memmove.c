/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:55:55 by cgodecke          #+#    #+#             */
/*   Updated: 2022/12/16 19:18:23 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_memmove copies n bytes from memory area src to memory area
//dest by coping the src to an tmp array to be able to use overlap src and dest.
// Return: A pointer to the copy.

#include <strings.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	tmp[n];

	i = 0;
	while (i < n)
	{
		tmp[i] = *(char *)src;
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(char *)dest = tmp[i];
		dest++;
		i++;
	}
	return ((char *)dest);
}
