/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:13:11 by coder             #+#    #+#             */
/*   Updated: 2023/01/04 21:31:39 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_strlcat copies n-1 bytes to the end of dst string 
// by 0 terminating the results. src and dst must be NUL-terminated.
// Return: The total length of the string they tried to create (initial length
// of dst plus length of src).

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	returnvalue;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size >= (dst_len + src_len))
		returnvalue = dst_len + src_len;
	else
		returnvalue = size + src_len;
	while (size > 0 && i < src_len && (dst_len + i) < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dst[dst_len + i] = '\0';
	}
	return (returnvalue);
}
