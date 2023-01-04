/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:13:11 by coder             #+#    #+#             */
/*   Updated: 2023/01/04 21:11:41 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_strlcat copies n-1 bytes to the end of dest string 
// by 0 terminating the results. src and dest must be NUL-terminated.
// Return: The total length of the string they tried to create (initial length
// of dest plus length of src).

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;
	size_t	returnvalue;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size >= (dest_len + src_len))
		returnvalue = dest_len + src_len;
	else
		returnvalue = size + src_len;
	while (size > 0 && i < src_len && (dest_len + i) < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dest[dest_len + i] = '\0';
	}
	return (returnvalue);
}

/*
int	main(void)
{
	char			src[] = "abgdfg";
	char			dest[10] = "1s";
	unsigned int	size;

	size = 9;
	
	printf("%i\n", ft_strlcat(dest, src, size));
	//printf("%lu\n", strlcat(dest, src, size));
	printf("%s", dest);
}
*/