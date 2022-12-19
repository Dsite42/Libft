/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:37:38 by coder             #+#    #+#             */
/*   Updated: 2022/12/19 11:42:55 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_strlcpy copies n-1 bytes to a dest string by 0 terminating
// the results. src must be NUL-terminated.
// Return: The total length of the string they tried to create (length of src).

#include <strings.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = ft_strlen(src);
	while (size > 0 && i < size - 1 && i < length)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dest[i] = '\0';
	}
	return (length);
}
